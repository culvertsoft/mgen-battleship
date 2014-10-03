package battleship.server;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import battleship.Dispatcher;
import battleship.messages.Chat;
import battleship.messages.Fire;
import battleship.messages.Login;
import battleship.messages.Message;
import battleship.messages.Resign;
import battleship.messages.ShipPlacement;
import battleship.messages.TeamSelect;
import battleship.state.Player;

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
	public void addBackend(final BackEnd backend) {
		m_backEnds.add(backend);
	}

	/**
	 * Starts this clients internal threads.
	 */
	public void init() {
		for (final BackEnd backend : m_backEnds) {
			backend.init();
		}
	}

	/**
	 * Stops this clients internal threads.
	 */
	public void close() {
		for (final BackEnd backend : m_backEnds) {
			backend.close();
		}
	}

	/**
	 * Gets the internal NetworkListener interface. This is attachable to new
	 * BackEnds that may be added to this Server.
	 * 
	 * @return The internal NetworkListener interface of this Server.
	 */
	public NetworkListener networkListener() {
		return m_networkListener;
	}

	// ////////////////////////////////////////////////////////////// //
	// ////////////////////// GAME LOGIC //////////////////////////// //
	// ////////////////////////////////////////////////////////////// //

	private final GameServerListener m_gameListener = new GameServerListener() {

		@Override
		public void onJoin(final Player player) {
			// TODO Auto-generated method stub
		}

		@Override
		public void onLeft(final Player player, final String reason) {
			// TODO Auto-generated method stub
		}

		@Override
		protected void handle(final Chat o) {
			// TODO Auto-generated method stub
			super.handle(o);
		}

		@Override
		protected void handle(final Fire o) {
			// TODO Auto-generated method stub
			super.handle(o);
		}

		@Override
		protected void handle(final Login o) {
			// TODO Auto-generated method stub
			super.handle(o);
		}

		@Override
		protected void handle(final Resign o) {
			// TODO Auto-generated method stub
			super.handle(o);
		}

		@Override
		protected void handle(final TeamSelect o) {
			// TODO Auto-generated method stub
			super.handle(o);
		}

		@Override
		protected void handle(final ShipPlacement o) {
			// TODO Auto-generated method stub
			super.handle(o);
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
				m_currentClient = client;
				m_currentPlayer = m_players.get(client);
				m_gameListener.onLeft(m_players.get(client), reason);
			}
		}

		@Override
		public synchronized void onMessage(final Client client, final Message message) {
			m_currentClient = client;
			m_currentPlayer = m_players.get(client);
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

	private void reply(final Message message) {
		m_currentClient.send(message);
	}

	private Client m_currentClient = null;
	private Player m_currentPlayer = null;
	private final List<BackEnd> m_backEnds = new ArrayList<BackEnd>();
	private final Map<Client, Player> m_players = new HashMap<>();

}
