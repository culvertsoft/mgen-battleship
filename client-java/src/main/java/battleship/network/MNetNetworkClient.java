package battleship.network;

import java.io.IOException;

import se.culvertsoft.mnet.DataMessage;
import se.culvertsoft.mnet.NodeSettings;
import se.culvertsoft.mnet.api.Connection;
import se.culvertsoft.mnet.api.Route;
import se.culvertsoft.mnet.backend.WebsockBackendSettings;
import se.culvertsoft.mnet.client.MNetClient;
import battleship.messages.Message;
import battleship.util.ListUtil;
import battleship.util.Serializer;
import battleship.util.WsUtil;

public class MNetNetworkClient extends NetworkClient {

	public MNetNetworkClient(final String address, final int port) {
		m_address = address;
		m_port = port;
		m_mnetClient = new MNetBridge();
	}

	@Override
	public void init() {
		m_mnetClient.start();
	}

	@Override
	public void close() {
		m_mnetClient.stop();
	}

	@Override
	public void sendMessage(final Message message) {
		try {
			final String json = m_serializer.writeJson(message);
			m_mnetClient.send(json, m_serverRoute.endpointId());
		} catch (IOException e) {
			onNetworkError(e, this);
		}
	}

	// ////////////////////////////////////////////////////////////// //
	// /////////////////////// PRIVATE ////////////////////////////// //
	// ////////////////////////////////////////////////////////////// //

	private class MNetBridge extends MNetClient {

		public MNetBridge() {
			super(
					new WebsockBackendSettings().unsetListenPort().setConnectTo(ListUtil.create(WsUtil.mkAddress(m_address, m_port))),
					new NodeSettings().setName("mgen-battleship-client"));
		}

		@Override
		public void handleConnect(final Route route) {
			if (isFromServer(route)) {
				m_serverRoute = route;
				MNetNetworkClient.this.onConnect();
			}
		}

		@Override
		public void handleDisconnect(final Route route, final String reason) {
			if (isFromServer(route)) {
				m_serverRoute = null;
				MNetNetworkClient.this.onDisconnect(reason);
			}
		}

		@Override
		public void handleError(final Exception error, final Object source) {
			MNetNetworkClient.this.onNetworkError(error, source);
		}

		@Override
		public void handleMessage(
				final se.culvertsoft.mnet.Message mnetMsg,
				final Connection connection,
				final Route route) {
			if (isFromServer(route) && mnetMsg instanceof DataMessage) {
				try {
					onMessage(m_serializer.read((DataMessage) mnetMsg));
				} catch (IOException e) {
					onNetworkError(e, this);
				}
			}
		}
	}

	private boolean isFromServer(final Route route) {
		return route != null && route.announcement().getHops() == 1 && route.tags().contains("mgen-battleship-server");
	}

	private Route m_serverRoute;
	private final String m_address;
	private final int m_port;
	private final MNetClient m_mnetClient;
	private final Serializer m_serializer = new Serializer();
}
