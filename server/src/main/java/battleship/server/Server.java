package battleship.server;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;

import battleship.Dispatcher;
import battleship.messages.Chat;
import battleship.messages.Fire;
import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.IncorrectUsage;
import battleship.messages.Login;
import battleship.messages.LoginReply;
import battleship.messages.Message;
import battleship.messages.PhaseChange;
import battleship.messages.PlayerChangedTeam;
import battleship.messages.PlayerJoined;
import battleship.messages.Resign;
import battleship.messages.SetReady;
import battleship.messages.ShipPlacement;
import battleship.messages.ShipPlacementReply;
import battleship.messages.ShipSunk;
import battleship.messages.Snapshot;
import battleship.messages.TeamSelect;
import battleship.messages.TeamSelectReply;
import battleship.state.Game;
import battleship.state.Phase;
import battleship.state.Player;
import battleship.state.Segment;
import battleship.state.Ship;
import battleship.state.Shot;
import battleship.state.Team;
import battleship.state.Vec2;

public class Server {

	/**
	 * Creates a new server without adding any backends. Use addBackend(..) to
	 * add backends and then call init().
	 */
	public Server() {
	}

	/**
	 * Adds a listening backend to this Server. Must be called before init
	 * 
	 * @param backend
	 *            The backend to add
	 */
	public Server addBackend(final int port, final BackEnd.Factory factory) {
		m_backEnds.add(factory.create(port, m_networkListener));
		return this;
	}

	/**
	 * Starts this clients internal threads.
	 */
	public Server init() {
		for (final BackEnd backend : m_backEnds) {
			backend.init();
		}
		return this;
	}

	/**
	 * Stops this clients internal threads.
	 */
	public Server close() {
		for (final BackEnd backend : m_backEnds) {
			backend.close();
		}
		return this;
	}

	// ////////////////////////////////////////////////////////////// //
	// ////////////////////// GAME LOGIC //////////////////////////// //
	// ////////////////////////////////////////////////////////////// //

	private final GameServerListener m_gameListener = new GameServerListener() {

		@Override
		public void onJoin(final Player player) {
			m_players.put(m_sendingClient, player);
			reply(new LoginReply(player.getUuid(), true, null));
			broadcastSnapshot();
			broadcast(new PlayerJoined(player.getUuid()));
		}

		@Override
		public void onLeft(final Player player, final String reason) {
			m_players.remove(m_sendingClient);
			if (player != null && player.getTeam() != Team.OBSERVERS && isInGame()) {
				removePlayer(player);
				handleGameOver(opposingTeam(player), "Team " + player.getTeam() + " disconnected");
			}
		}

		@Override
		public void handle(final Chat message) {
			chat(message);
			// Sender should always get the chat msg back
			if (message.getTeam() != null && sendingPlayer() != null
					&& message.getTeam() != sendingPlayer().getTeam()) {
				reply(message);
			}
		}

		@Override
		public void handle(final Fire o) {

			final Player player = sendingPlayer();

			if (player == null) {
				incorrectUsage("Cannot fire, thou hath not logged in yet!");
				return;
			}

			if (!isInGame()) {
				incorrectUsage("Cannot fire, the game hasn't started yet!");
				return;
			}

			if (isObserver(player)) {
				incorrectUsage("Cannot fire, you're an observer, you cannot fire ... :P");
				return;
			}

			if (!isPlayersTurn(player)) {
				incorrectUsage("Cannot fire, it's not your turn, dumbass!");
				return;
			}

			if (hasFiredAt(o, player)) {
				incorrectUsage("Cannot fire, you've already fired there!");
				return;
			}

			if (!isInsideMap(o.getPosition(), player)) {
				incorrectUsage("Cannot fire, outside map bounds..");
				return;
			}

			for (final Ship enemyShip : shipsOf(opposingTeam(player))) {
				for (final Segment segment : enemyShip.getPoints()) {
					if (segment.getPos().equals(o.getPosition())) {
						segment.setAlive(false);
						broadcast(new FireResult(true, o.getPosition(), player.getTeam()));
						if (enemyShip.isSunk()) {
							broadcast(new ShipSunk(enemyShip, opposingTeam(player)));

							if (!isAlive(player)) {
								handleGameOver(player.getTeam(), "All enemy ships sunk!");
							}

						}
						broadcastSnapshot();
						return;
					}
				}
			}

			broadcast(new FireResult(false, o.getPosition(), player.getTeam()));

		}

		@Override
		public void handle(final Login o) {
			if (isInLobby()) {
				if (!m_players.containsKey(m_sendingClient)) {
					onJoin(createPlayer(o.getName()));
				}
			} else {
				reply(new LoginReply(null, false, "Game has already started"));
			}
		}

		@Override
		public void handle(final Resign o) {
			final Player player = sendingPlayer();
			if (player != null && player.getTeam() != Team.OBSERVERS && isInGame()) {
				handleGameOver(opposingTeam(player), "Team " + player.getTeam() + " resigned");
			}
		}

		@Override
		public void handle(final SetReady o) {
			final Player player = sendingPlayer();
			if (player != null) {
				player.setReady(o.getIsReady());
				if (playersReady()) {
					if (isPreGame()) {
						startGame();
					} else if (isPostGame()) {
						resetToPreGameLobby();
					}
					setPlayersNotReady();
				}
			}
		}

		@Override
		public void handle(final TeamSelect o) {
			final Player player = sendingPlayer();
			final Team newTeam = o.getTeam();
			if (isPreGame() && player != null) {
				final Team oldTeam = player.getTeam();
				if (newTeam != oldTeam) {
					if (isTeamFree(newTeam)) {
						setPlayerTeam(player, newTeam, oldTeam);
						reply(new TeamSelectReply(true, null));
						broadcast(new PlayerChangedTeam(player.getUuid()));
						broadcastSnapshot();
					} else {
						reply(new TeamSelectReply(false, "Team is full"));
					}
				} else {
					incorrectUsage("You're already on that team");
				}
			}
		}

		@Override
		public void handle(final ShipPlacement o) {
			final Player player = sendingPlayer();
			if (isPreGame() && player != null && !isObserver(player)) {
				if (validateShipPlacement(o.getShips())) {
					setShips(player.getTeam(), o.getShips());
					reply(new ShipPlacementReply(true, null));
				} else {
					reply(new ShipPlacementReply(false, "Illegal ship placement"));
				}
			}
		}

	};

	// ////////////////////////////////////////////////////////////// //
	// ////////////////////// NETWORK LOGIC ///////////////////////// //
	// ////////////////////////////////////////////////////////////// //

	private final NetworkListener m_networkListener = new NetworkListener() {

		@Override
		public synchronized void onConnect(final Client client) {
			System.out.println("client connected, waiting for login from: " + client);
		}

		@Override
		public synchronized void onDisconnect(final Client client, final String reason) {
			if (m_players.containsKey(client)) {
				m_sendingClient = client;
				m_gameListener.onLeft(m_players.get(client), reason);
			}
		}

		@Override
		public synchronized void onMessage(final Client client, final Message message) {
			m_sendingClient = client;
			Dispatcher.dispatch(message, m_gameListener);
		}

		@Override
		public synchronized void onError(final Exception error, final Object source) {
			System.err.println("Error from: " + source);
			error.printStackTrace();
		}
	};

	// ////////////////////////////////////////////////////////////// //
	// ////////////////////// MISC PRIVATE ////////////////////////// //
	// ////////////////////////////////////////////////////////////// //

	private void handleGameOver(final Team winner, final String reason) {
		broadcast(new GameOver(Phase.LOBBY_POSTGAME, winner, reason));
		setPhase(Phase.LOBBY_POSTGAME);
		broadcastSnapshot();
	}

	private void setPlayerTeam(final Player player, final Team newTeam, final Team oldTeam) {

		player.setTeam(newTeam);

		switch (oldTeam) {
		case RED:
			game().unsetRedPlayer();
			break;
		case BLUE:
			game().unsetBluePlayer();
			break;
		default:
			game().getObservers().remove(player);
			break;
		}

		switch (newTeam) {
		case RED:
			game().setRedPlayer(player);
			break;
		case BLUE:
			game().setBluePlayer(player);
			break;
		default:
			game().getObservers().add(player);
			break;
		}
	}

	private void resetToPreGameLobby() {
		setPhase(Phase.LOBBY_PREGAME);
	}

	private void startGame() {
		setPhase(Phase.PLAYING);
	}

	private void setPlayersNotReady() {
		final Player red = game().getRedPlayer();
		final Player blue = game().getBluePlayer();
		if (red != null) {
			red.setReady(false);
		}
		if (blue != null) {
			blue.setReady(false);
		}
		for (final Player observer : game().getObservers()) {
			observer.setReady(false);
		}
	}

	private boolean playersReady() {
		return game().hasBluePlayer() && game().hasRedPlayer() && game().getBluePlayer().getReady()
				&& game().getRedPlayer().getReady();
	}

	private void setShips(final Team team, final ArrayList<Ship> ships) {
		switch (team) {
		case RED:
			game().getRedMap().setShips(ships);
			break;
		case BLUE:
			game().getBlueMap().setShips(ships);
			break;
		default:
			break;
		}
	}

	private boolean isAlive(final Player player) {
		for (final Ship ship : shipsOf(player)) {
			if (ship.isAlive()) {
				return true;
			}
		}
		return false;
	}

	private List<Ship> shipsOf(final Player player) {
		return shipsOf(player.getTeam());
	}

	private List<Ship> shipsOf(final Team team) {
		switch (team) {
		case BLUE:
			return game().getBlueMap().getShips();
		case RED:
			return game().getRedMap().getShips();
		default:
			return null;
		}
	}

	private boolean isInsideMap(final Vec2 position, final Player shootingPlayer) {
		final battleship.state.Map opponentMap = mapOf(opposingTeam(shootingPlayer));
		final int x = position.getX();
		final int y = position.getY();
		final int w = opponentMap.getSize().getX();
		final int h = opponentMap.getSize().getY();
		return 0 <= x && x < w && 0 <= y && y < h;
	}

	private battleship.state.Map mapOf(final Team team) {
		switch (team) {
		case BLUE:
			return game().getBlueMap();
		case RED:
			return game().getRedMap();
		default:
			return null;
		}
	}

	private boolean hasFiredAt(final Fire fire, final Player shootingPlayer) {
		for (final Shot shot : shootingPlayer.getShots()) {
			if (shot.getPos().equals(fire.getPosition())) {
				return true;
			}
		}
		return false;
	}

	private void incorrectUsage(final String reason) {
		reply(new IncorrectUsage(reason));
	}

	private boolean isPlayersTurn(final Player player) {
		return game().getCurrentTeam() == player.getTeam();
	}

	private void chat(final Chat o) {
		broadcast(o, o.getTeam());
	}

	private boolean validateShipPlacement(final ArrayList<Ship> ships) {
		final List<Integer> lengths = new ArrayList<>();
		for (final Ship ship : ships) {
			if (!ship.arePointsInLine()) {
				return false;
			}
			lengths.add(ship.length());
		}
		Collections.sort(lengths);
		return lengths.equals(properShipLengths());
	}

	private boolean isObserver(final Player player) {
		return player.getTeam() == Team.OBSERVERS;
	}

	private boolean isTeamFree(final Team team) {
		switch (team) {
		case BLUE:
			return game().hasBluePlayer();
		case OBSERVERS:
			return true;
		case RED:
			return game().hasRedPlayer();
		default:
			return false;
		}
	}

	private void removePlayer(final Player player) {
		switch (player.getTeam()) {
		case BLUE:
			game().unsetBluePlayer();
			game().setBlueMap(createMap());
		case RED:
			game().unsetRedPlayer();
			game().setRedMap(createMap());
		default:
			game().getObservers().remove(player);
		}
	}

	private Player sendingPlayer() {
		return m_players.get(m_sendingClient);
	}

	private void setPhase(Phase newPhase) {
		m_game.setPhase(newPhase);
		broadcast(new PhaseChange(newPhase));
	}

	private Team opposingTeam(final Team team) {
		switch (team) {
		case BLUE:
			return Team.RED;
		case RED:
			return Team.BLUE;
		default:
			return null;
		}
	}

	private Game game() {
		return m_game;
	}

	private Snapshot snapshot() {
		return new Snapshot(m_game);
	}

	private void broadcastSnapshot() {
		broadcast(snapshot());
	}

	private Team opposingTeam(final Player player) {
		return opposingTeam(player.getTeam());
	}

	private boolean isInGame() {
		return phase() == Phase.PLAYING;
	}

	private void reply(final Message message) {
		m_sendingClient.send(message);
	}

	private void broadcast(final Message message, final Team team) {

		// Filter out information players shouldn't know
		if (!isPostGame() && message instanceof Snapshot) {
			final Game game = ((Snapshot) message).getState();
			game.getRedMap().getShips().clear();
			game.getBlueMap().getShips().clear();
		}

		for (final Client client : m_players.keySet()) {
			if (team == null || team == m_players.get(client).getTeam()) {
				client.send(message);
			}
		}

	}

	private void broadcast(final Message message) {
		broadcast(message, null);
	}

	private Phase phase() {
		return m_game.getPhase();
	}

	private boolean isPreGame() {
		return phase() == Phase.LOBBY_PREGAME;
	}

	private boolean isPostGame() {
		return phase() == Phase.LOBBY_POSTGAME;
	}

	private boolean isInLobby() {
		return isPreGame() || isPostGame();
	}

	private Team freeSlot() {
		if (!m_game.hasRedPlayer()) {
			return Team.RED;
		} else if (!m_game.hasBluePlayer()) {
			return Team.BLUE;
		} else {
			return Team.OBSERVERS;
		}
	}

	private Player createPlayer(final String name) {
		return new Player(
				UUID.randomUUID().toString(),
				name,
				freeSlot(),
				false,
				new ArrayList<Shot>());
	}

	private List<Integer> properShipLengths() {
		final List<Integer> out = new ArrayList<>();
		out.add(2);
		out.add(2);
		out.add(3);
		out.add(5);
		out.add(6);
		return out;
	}

	private battleship.state.Map createMap() {
		return new battleship.state.Map(new ArrayList<Ship>(), new Vec2(10, 10));
	}

	private Game createGame() {

		final Player prevRed = m_game != null ? m_game.getRedPlayer() : null;
		final Player prevBlue = m_game != null ? m_game.getBluePlayer() : null;
		final ArrayList<Player> prevObservers = m_game != null ? m_game.getObservers()
				: new ArrayList<Player>();

		return new Game(prevRed, // redplayer
				prevBlue, // blueplayer
				prevObservers, // observers
				createMap(), // redmap
				createMap(), // bluemap
				Phase.LOBBY_PREGAME, // phase
				Team.RED, // teamThisTurn
				0.0 // tLastMove
		);
	}

	private Game m_game = createGame();

	private Client m_sendingClient = null;
	private final List<BackEnd> m_backEnds = new ArrayList<BackEnd>();
	private final Map<Client, Player> m_players = new HashMap<>();

}
