package battleship;

import battleship.messages.Chat;
import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.IncorrectUsage;
import battleship.messages.LoginReply;
import battleship.messages.NextTurn;
import battleship.messages.PhaseChange;
import battleship.messages.ShipSunk;
import battleship.messages.Snapshot;
import battleship.messages.TeamSelectReply;
import battleship.network.GameClient;
import battleship.network.GameClientListener;
import battleship.network.MNetNetworkClient;
import battleship.state.Game;
import battleship.state.Phase;
import battleship.state.Team;
import battleship.state.Vec2;

public class SimpleGameClient {

	public SimpleGameClient(final AI ai, final String address, final int port) {
		m_ai = ai;
		m_gameListener = new GameListener();
		m_networkClient = new MNetNetworkClient(address, port);
		m_gameClient = new GameClient(ai.selectName(), m_gameListener, m_networkClient);
	}

	public SimpleGameClient init() {
		m_gameClient.init();
		return this;
	}

	public SimpleGameClient close() {
		m_gameClient.close();
		return this;
	}

	/**
	 * Overload this to be notified of errors
	 * 
	 * @param error
	 *            The exception
	 * 
	 * @param source
	 *            The source of the exception
	 */
	public void onError(Exception error, Object source) {
		System.err.println("Error occurred on: " + source);
		error.printStackTrace();
	}

	/**
	 * Overload this to handle chat messages
	 * 
	 * @param msg
	 *            The chat message received
	 */
	public void onChat(final Chat msg) {
		final String teamString = msg.hasTeam() ? msg.getTeam().toString() : "ALL";
		System.out.println(msg.getFrom() + " (" + teamString + "): " + msg.getText());
	}

	/**
	 * Convenience method to send a chat message
	 * 
	 * @param message
	 *            The text message to send
	 * 
	 * @param team
	 *            The team to send to, or null if to all
	 */
	public void chat(final String message, final Team team) {
		m_gameClient.chat(message, team);
	}

	/**
	 * Overload this to handle incorrect usage notifications
	 * 
	 * @param iu
	 *            The incorrect usage notification message
	 */
	public void onIncorrectUsage(final IncorrectUsage iu) {
		System.err.println("Incorrect usage: " + iu.getReason());
	}

	private class GameListener extends GameClientListener {

		@Override
		public void onNetworkError(Exception error, Object source) {
			SimpleGameClient.this.onError(error, source);
		}

		@Override
		public void handle(LoginReply o) {
			if (o.getResult()) {
				m_id = o.getUuid();
				m_team = o.getTeam();
				m_ai.assignedTeam(m_team);
				selectTeamAndShips();
			} else {
				SimpleGameClient.this.onError(
						new RuntimeException("Login failed: " + o.getFailReason()),
						this);
			}
		}

		@Override
		public void handle(IncorrectUsage o) {
			SimpleGameClient.this.onIncorrectUsage(o);
		}

		@Override
		public void handle(TeamSelectReply o) {
			if (o.getResult()) {
				m_team = o.getTeam();
				m_ai.assignedTeam(o.getTeam());
			}
		}

		@Override
		public void handle(ShipSunk o) {
			m_ai.shipSunk(o);
		}

		@Override
		public void handle(Chat o) {
			SimpleGameClient.this.onChat(o);
		}

		@Override
		public void handle(FireResult o) {
			m_ai.shotFired(o);
		}

		@Override
		public void handle(PhaseChange o) {
			m_ai.gamePhaseChanged(o.getPhase());
			if (o.getPhase() == Phase.LOBBY) {
				selectTeamAndShips();
			}
		}

		@Override
		public void handle(Snapshot o) {
			m_state = o.getState();
			m_team = m_state.getPlayer(m_id).getTeam();
		}

		@Override
		public void handle(NextTurn o) {
			if (o.getTeam() == m_team) {
				final Vec2 shot = m_ai.makeShot(m_state);
				if (shot != null) {
					m_gameClient.fire(shot);
				} else {
					m_gameClient.resign();
				}
			}
		}

		@Override
		public void handle(GameOver o) {
			m_ai.gameOver(o);
		}

	}

	private void selectTeamAndShips() {
		m_gameClient.selectTeam(m_ai.selectTeam());
		m_gameClient.placeShips(m_ai.placeShips());
	}

	private Game m_state;
	private String m_id;
	private Team m_team;
	private final AI m_ai;
	private final GameClientListener m_gameListener;
	private final MNetNetworkClient m_networkClient;
	private final GameClient m_gameClient;

}
