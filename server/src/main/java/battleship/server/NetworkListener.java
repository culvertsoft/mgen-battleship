package battleship.server;

import battleship.messages.Message;

public interface NetworkListener {

	/**
	 * Called when the network layer connects to the mgen-battleship server.
	 * 
	 * @param client
	 *            The client that just connected
	 */
	void onConnect(final Client client);

	/**
	 * Called when the network layer disconnects from the mgen-battleship
	 * server.
	 * 
	 * @param client
	 *            The client that just disconnected
	 * 
	 * @param reason
	 *            The reason why the client just disconnected
	 */
	void onDisconnect(final Client client, final String reason);

	/**
	 * Called when the network layer receives a message
	 * 
	 * @param client
	 *            The client from who you just received a message
	 * 
	 * @param message
	 *            The message received
	 */
	void onMessage(final Client client, final Message message);

	/**
	 * Called when an error occurs on the network layer
	 * 
	 * @param error
	 *            The error
	 * 
	 * @param source
	 *            The source of the error (for internal debugging)
	 */
	void onError(final Exception error, final Object source);

}
