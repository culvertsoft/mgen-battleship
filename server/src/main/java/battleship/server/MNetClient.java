package battleship.server;

import se.culvertsoft.mnet.api.Route;
import battleship.messages.Message;

public class MNetClient implements Client {

	public MNetClient(final Route route, final MNetBackEnd backEnd) {
		m_route = route;
		m_BackEnd = backEnd;
	}

	@Override
	public void send(final Message message) {
		m_BackEnd.send(message, m_route);
	}

	@Override
	public String toString() {
		return "MNetClient [m_route=" + m_route + ", m_BackEnd=" + m_BackEnd + "]";
	}

	private final Route m_route;
	private final MNetBackEnd m_BackEnd;

}
