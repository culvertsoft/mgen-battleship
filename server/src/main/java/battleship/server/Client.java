package battleship.server;

import battleship.messages.Message;

public interface Client {

	void send(final Message message);

}
