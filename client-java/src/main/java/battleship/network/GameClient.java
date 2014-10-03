package battleship.network;

import java.util.ArrayList;
import java.util.List;

import battleship.Dispatcher;
import battleship.messages.Chat;
import battleship.messages.Fire;
import battleship.messages.Login;
import battleship.messages.Message;
import battleship.messages.Resign;
import battleship.messages.SetReady;
import battleship.messages.ShipPlacement;
import battleship.messages.TeamSelect;
import battleship.state.Ship;
import battleship.state.Team;
import battleship.state.Vec2;

public class GameClient {

	public GameClient(final String nickName, final GameClientListener listener, final NetworkClient network) {
		m_nickName = nickName;
		m_network = network;
		m_listener = listener;
		m_network.addListener(new NetwrkListener());
	}

	/**
	 * Starts the underlying threads of the attached network interface.
	 */
	public void init() {
		m_network.init();
	}

	/**
	 * Closes the underlying threads of the attached network interface
	 */
	public void close() {
		m_network.close();
	}

	/**
	 * Checks if this client is currently connected to the server
	 * 
	 * @return If this client is connected to the server.
	 */
	public boolean isConnected() {
		return m_connected;
	}

	/**
	 * Sends a message to request firing on a position
	 * 
	 * @param position
	 *            The position to fire on
	 */
	public void fire(final Vec2 position) {
		m_network.sendMessage(new Fire(position));
	}

	/**
	 * Sends a message to request a team change
	 * 
	 * @param team
	 *            The team to change to
	 */
	public void selectTeam(final Team team) {
		m_network.sendMessage(new TeamSelect(team));
	}

	/**
	 * Sends a chat message
	 * 
	 * @param message
	 *            The text message to send
	 * 
	 * @param team
	 *            The team to talk to (null implies broadcast)
	 */
	public void chat(final String message, final Team team) {
		m_network.sendMessage(new Chat(message, team));
	}

	/**
	 * Sends a resignation message (you give up this match).
	 */
	public void resign() {
		m_network.sendMessage(new Resign());
	}

	/**
	 * Sends a message to place ships (before starting a game)
	 * 
	 * @param ships
	 *            The placed shipts
	 */
	public void placeShips(final List<Ship> ships) {
		m_network.sendMessage(new ShipPlacement(new ArrayList<>(ships)));
	}

	/**
	 * Sends a message that we are ready to start the game
	 * 
	 * @param ready
	 *            If we are ready to start the game
	 */
	public void setReady(final boolean ready) {
		m_network.sendMessage(new SetReady(ready));
	}

	// /////////////////////////////////////////////////////// //
	// ////////////////////// PRIVATE /////////////////////// //
	// ////////////////////////////////////////////////////// //

	private class NetwrkListener implements NetworkListener {
		@Override
		public void onMessage(final Message message) {
			Dispatcher.dispatch(message, m_listener);
		}

		@Override
		public void onConnect() {
			m_connected = true;
			m_network.sendMessage(new Login(m_nickName));
			m_listener.onConnect();
		}

		@Override
		public void onDisconnect(String reason) {
			m_connected = false;
			m_listener.onDisconnect(reason);
		}

		@Override
		public void onError(Exception error, Object source) {
			m_listener.onNetworkError(error, source);
		}

	}

	private volatile boolean m_connected;
	private final NetworkClient m_network;
	private final GameClientListener m_listener;
	private final String m_nickName;

}
