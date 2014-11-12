package battleship.network;

import battleship.messages.Message;

public interface NetworkListener {

	/**
	 * Called when the network layer connects to the mgen-battleship server.
	 */
	void onConnect();

	/**
	 * Called when the network layer disconnects from the mgen-battleship
	 * server.
	 * 
	 * @param reason
	 *            Why the disconnect occurred
	 */
	void onDisconnect(String reason);

	/**
	 * Called when the network layer receives a message
	 * 
	 * @param message
	 *            The message received
	 */
	void onMessage(Message message);

	/**
	 * Called when an error occurs on the network layer
	 * 
	 * @param error
	 *            The error
	 * 
	 * @param source
	 *            The source of the error (for internal debugging)
	 */
	void onError(Exception error, Object source);

}
