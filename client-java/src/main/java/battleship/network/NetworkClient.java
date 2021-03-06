package battleship.network;

import battleship.messages.Message;
import battleship.util.Speaker;

public abstract class NetworkClient {

	/**
	 * Starts this clients internal threads.
	 */
	public abstract void init();

	/**
	 * Stops this clients internal threads.
	 */
	public abstract void close();

	/**
	 * You call this to send a message to the server.
	 * 
	 * @param message
	 *            The message to send
	 */
	public abstract void sendMessage(final Message message);

	/**
	 * Adds a network listener to this client for receiving callbacks.
	 * 
	 * @param listener
	 *            The listener to add.
	 */
	public void addListener(final NetworkListener listener) {
		m_speaker.addListener(listener);
	}

	/**
	 * Removes a network listener to this client for receiving callbacks.
	 * 
	 * @param listener
	 *            The listener to remove.
	 */
	public void removeListener(final NetworkListener listener) {
		m_speaker.removeListener(listener);
	}

	// ////////////////////////////////////////////////////////////////// //
	// //////////////////////// Implementation ////////////////////////// //
	// ////////////////////////////////////////////////////////////////// //

	/**
	 * Called by the implementation when establishing the connection.
	 */
	protected void onConnect() {
		m_speaker.dispatch(m_speaker.new Action() {
			public void apply(final NetworkListener listener) {
				listener.onConnect();
			}
		});
	}

	/**
	 * Called by the implementation when losing the connection.
	 * 
	 * @param reason
	 *            The reason we were disconnected
	 */
	protected void onDisconnect(final String reason) {
		m_speaker.dispatch(m_speaker.new Action() {
			public void apply(final NetworkListener listener) {
				listener.onDisconnect(reason);
			}
		});
	}

	/**
	 * Called by the implementation when receiving a message.
	 * 
	 * @param message
	 *            The message we just received
	 */
	protected void onMessage(final Message message) {
		m_speaker.dispatch(m_speaker.new Action() {
			public void apply(final NetworkListener listener) {
				listener.onMessage(message);
			}
		});
	}

	/**
	 * Called by the implementation when an error on the networklayer occurs.
	 * 
	 * @param error
	 *            The Exception associated with the error that just occurred
	 * 
	 * @param source
	 *            The source object from which the error originated from
	 */
	protected void onNetworkError(final Exception error, final Object source) {
		m_speaker.dispatch(m_speaker.new Action() {
			public void apply(final NetworkListener listener) {
				listener.onError(error, source);
			}
		});
	}

	private final Speaker<NetworkListener> m_speaker = new Speaker<>();

}
