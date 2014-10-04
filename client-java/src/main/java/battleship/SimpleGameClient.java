package battleship;

import java.util.List;

import battleship.messages.Chat;
import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.LoginReply;
import battleship.messages.NextTurn;
import battleship.messages.PhaseChange;
import battleship.messages.ShipPlacementReply;
import battleship.messages.ShipSunk;
import battleship.messages.Snapshot;
import battleship.messages.TeamSelectReply;
import battleship.network.GameClient;
import battleship.network.GameClientListener;
import battleship.network.MNetNetworkClient;
import battleship.state.Game;
import battleship.state.Phase;
import battleship.state.Ship;
import battleship.state.Shot;
import battleship.state.Team;

public class SimpleGameClient {

	public SimpleGameClient(final AI ai, final String address, final int port) {
		m_ai = ai;
		m_gameListener = new GameListener();
		m_networkClient = new MNetNetworkClient(address, port);
		m_gameClient = new GameClient(ai.selectName(), m_gameListener, m_networkClient);
	}

	public void init() {
		m_gameClient.init();
	}

	public void close() {
		m_gameClient.close();
	}

	/**
	 * Overload this to be notified of errors
	 * 
	 * @param error
	 *            The exception
	 * 
	 * @param source
	 *            The source of the exception
	 */
	public void onError(Exception error, Object source) {
		System.err.println("Error occurred on: " + source);
		error.printStackTrace();
	}

	/**
	 * Overload this to handle chat messages
	 * 
	 * @param msg
	 *            The chat messag received
	 */
	public void onChat(final Chat msg) {
		System.out.println(msg.getTeam() + ": " + msg.getText());
	}

	/**
	 * Convenience method to send a chat message
	 * 
	 * @param message
	 *            The text message to send
	 * 
	 * @param team
	 *            The team to send to, or null if to all
	 */
	public void chat(final String message, final Team team) {
		m_gameClient.chat(message, team);
	}

	private class GameListener extends GameClientListener {

		@Override
		public void onNetworkError(Exception error, Object source) {
			SimpleGameClient.this.onError(error, source);
		}

		@Override
		public void handle(LoginReply o) {
			if (o.getResult()) {
				m_id = o.getUuid();
				m_team = o.getTeam();
				m_ai.assignedTeam(m_team);
				m_ships = m_ai.placeShips();
				sendShipPlacement();
			} else {
				SimpleGameClient.this.onError(
						new RuntimeException("Login failed: " + o.getFailReason()),
						this);
			}
		}

		@Override
		public void handle(TeamSelectReply o) {
			if (o.getResult()) {
				m_ai.assignedTeam(o.getTeam());
				sendShipPlacement();
			}
		}

		@Override
		public void handle(ShipPlacementReply o) {
			if (o.getResult()) {

			} else {

			}
		}

		@Override
		public void handle(ShipSunk o) {
			m_ai.shipSunk(o);
		}

		@Override
		public void handle(Chat o) {
			SimpleGameClient.this.onChat(o);
		}

		@Override
		public void handle(FireResult o) {
			m_ai.shotFired(o);
		}

		@Override
		public void handle(PhaseChange o) {
			m_ai.gamePhaseChanged(o.getPhase());
			if (o.getPhase() == Phase.LOBBY) {
				m_ships = m_ai.placeShips();
				m_team = m_ai.selectTeam(m_state);
				sendTeam();
				sendShipPlacement();
			}
		}

		@Override
		public void handle(Snapshot o) {
			m_state = o.getState();
			m_team = m_state.getPlayer(m_id).getTeam();
		}

		@Override
		public void handle(NextTurn o) {
			if (o.getTeam() == m_team) {
				final Shot shot = m_ai.makeShot(m_state);
				if (shot != null) {
					m_gameClient.fire(shot.getPos());
				} else {
					m_gameClient.resign();
				}
			}
		}

		@Override
		public void handle(GameOver o) {
			m_ai.gameOver(o);
		}

	}

	private void sendTeam() {
		m_gameClient.selectTeam(m_team);
	}

	private void sendShipPlacement() {
		m_gameClient.placeShips(m_ships);
	}

	private Game m_state;
	private String m_id;
	private Team m_team;
	private List<Ship> m_ships;
	private final AI m_ai;
	private final GameClientListener m_gameListener;
	private final MNetNetworkClient m_networkClient;
	private final GameClient m_gameClient;

}
