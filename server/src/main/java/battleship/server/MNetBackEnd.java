package battleship.server;

import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

import se.culvertsoft.mnet.DataMessage;
import se.culvertsoft.mnet.NodeSettings;
import se.culvertsoft.mnet.api.Connection;
import se.culvertsoft.mnet.api.Route;
import se.culvertsoft.mnet.backend.WebsockBackendSettings;
import battleship.messages.Message;
import battleship.util.ListUtil;
import battleship.util.Serializer;

public class MNetBackEnd extends se.culvertsoft.mnet.client.MNetClient implements BackEnd {

	public MNetBackEnd(final int port, final NetworkListener listener) {
		super(new WebsockBackendSettings().setListenPort(port), new NodeSettings()
				.setName("mgen-battleship-server")
				.setTags(ListUtil.create("mgen-battleship-server")));
		m_listener = listener;
	}

	@Override
	public void handleConnect(final Route route) {
		m_clients.put(route, new MNetClient(route, this));
		m_listener.onConnect(m_clients.get(route));
	}

	@Override
	public void handleDisconnect(final Route route, final String reason) {
		m_listener.onDisconnect(m_clients.get(route), reason);
		m_clients.remove(route);
	}

	@Override
	public void handleError(final Exception error, final Object source) {
		m_listener.onError(error, source);
	}

	@Override
	public void handleMessage(final se.culvertsoft.mnet.Message mnetMsg, final Connection connection, final Route route) {
		if (route != null && mnetMsg instanceof DataMessage) {
			try {
				m_listener.onMessage(m_clients.get(route), m_serializer.read((DataMessage) mnetMsg));
			} catch (IOException e) {
				handleError(e, this);
			}
		}
	}

	@Override
	public void init() {
		start();
	}

	@Override
	public void close() {
		stop();
	}

	void send(final Message message, final Route route) {
		try {
			send(m_serializer.writeJson(message), route.endpointId());
		} catch (IOException e) {
			handleError(e, this);
		}
	}
	
	public static final BackEnd.Factory FACTORY = new Factory() {
		@Override
		public BackEnd create(final int port, final NetworkListener listener) {
			return new MNetBackEnd(port, listener);
		}
	}; 

	private final Map<Route, MNetClient> m_clients = new HashMap<>();
	private final Serializer m_serializer = new Serializer();
	private final NetworkListener m_listener;

}
