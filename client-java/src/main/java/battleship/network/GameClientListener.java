package battleship.network;

import battleship.Handler;
import battleship.messages.Chat;
import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.LoginReply;
import battleship.messages.Message;
import battleship.messages.NextTurn;
import battleship.messages.PhaseChange;
import battleship.messages.Resign;
import battleship.messages.Snapshot;
import battleship.messages.TeamSelectReply;
import battleship.state.Shot;

/**
 * Implement these methods to receive messages from the server
 * 
 * @author GiGurra
 */
public abstract class GameClientListener extends Handler {

	/**
	 * Override this to see when you connect
	 */
	public void onConnect() {
	}

	/**
	 * Override this to see when you disconnect
	 */
	public void onDisconnect() {
	}

	@Override
	public void handle(Chat o) {
	}

	@Override
	public void handle(FireResult o) {
	}

	@Override
	public void handle(PhaseChange o) {
	}

	@Override
	public void handle(Snapshot o) {
	}

	@Override
	public void handle(LoginReply o) {
	}

	@Override
	public void handle(NextTurn o) {
	}

	@Override
	public void handle(Resign o) {
	}

	@Override
	public void handle(GameOver o) {
	}

	@Override
	public void handle(TeamSelectReply o) {
	}

	@Override
	public void handle(Shot o) {
	}

	// /////////////////////////////////////////////////////// //
	// ////////////////////// PRIVATE /////////////////////// //
	// ////////////////////////////////////////////////////// //

	void dispatch(Message o) {
		super.handle(o);
	}

}
