package battleship;

import battleship.messages.Chat;
import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.LoginReply;
import battleship.messages.NextTurn;
import battleship.messages.PhaseChange;
import battleship.messages.ShipPlacementReply;
import battleship.messages.ShipSunk;
import battleship.messages.Snapshot;
import battleship.messages.TeamSelectReply;
import battleship.network.GameClient;
import battleship.network.GameClientListener;
import battleship.network.MNetNetworkClient;

public class SimpleGameClient {

	public SimpleGameClient(final AI ai, final String address, final int port) {
		m_gameListener = new GameListener();
		m_networkClient = new MNetNetworkClient(address, port);
		m_gameClient = new GameClient(ai.selectName(), m_gameListener, m_networkClient);
	}

	public void init() {
		m_gameClient.init();
	}

	public void close() {
		m_gameClient.close();
	}

	private class GameListener extends GameClientListener {

		@Override
		public void onConnect() {
		}

		@Override
		public void onDisconnect(String reason) {
		}

		@Override
		public void onNetworkError(Exception error, Object source) {
		}

		@Override
		public void handle(LoginReply o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(TeamSelectReply o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(ShipPlacementReply o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(ShipSunk o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(Chat o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(FireResult o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(PhaseChange o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(Snapshot o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(NextTurn o) {
			super.handle(o); // Default impl just forwards to super
		}

		@Override
		public void handle(GameOver o) {
			super.handle(o); // Default impl just forwards to super
		}

	}

	private final GameClientListener m_gameListener;
	private final MNetNetworkClient m_networkClient;
	private final GameClient m_gameClient;

}
