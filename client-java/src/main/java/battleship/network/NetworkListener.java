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
	 */
	void onDisconnect();

	/**
	 * Called when the network layer receives a message
	 * 
	 * @param message
	 *            The message received
	 */
	void onMessage(Message message);

}
