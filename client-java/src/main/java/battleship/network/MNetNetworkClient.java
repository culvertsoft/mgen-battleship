package battleship.network;

import se.culvertsoft.mnet.NodeSettings;
import se.culvertsoft.mnet.api.Connection;
import se.culvertsoft.mnet.api.Route;
import se.culvertsoft.mnet.backend.WebsockBackendSettings;
import se.culvertsoft.mnet.client.MNetClient;
import battleship.messages.Message;

public class MNetNetworkClient extends NetworkClient {

	public MNetNetworkClient(final String address, final int port) {
		m_address = address;
		m_port = port;

		m_mnetClient = new MNetClient(new WebsockBackendSettings(), new NodeSettings()) {

			@Override
			public void handleConnect(final Route route) {
				if (isFromServer(route)) {
					MNetNetworkClient.this.onConnect();
				}
			}

			@Override
			public void handleDisconnect(final Route route, final String reason) {
				if (isFromServer(route)) {
					MNetNetworkClient.this.onDisconnect(reason);
				}
			}

			@Override
			public void handleError(final Exception error, final Object source) {
				MNetNetworkClient.this.onNetworkError(error, source);
			}

			@Override
			public void handleMessage(final se.culvertsoft.mnet.Message mnetMsg, final Connection connection, final Route route) {
				if (isFromServer(route)) {
					super.handleMessage(mnetMsg, connection, route);
				}
			}

		};
	}


	@Override
	public void init() {
		// TODO Auto-generated method stub

	}

	@Override
	public void sendMessage(Message Message) {
		// TODO Auto-generated method stub

	}
	
	private boolean isFromServer(final Route route) {
		return route != null && route.announcement().getHops() == 1 && route.tags().contains("mgen-battleship-server");
	}

	private final String m_address;
	private final int m_port;
	private final MNetClient m_mnetClient;
}
