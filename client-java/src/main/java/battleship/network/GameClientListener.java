package battleship.network;

import battleship.Handler;
import battleship.messages.Chat;
import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.IncorrectUsage;
import battleship.messages.LoginReply;
import battleship.messages.Message;
import battleship.messages.NextTurn;
import battleship.messages.PhaseChange;
import battleship.messages.ShipPlacementReply;
import battleship.messages.ShipSunk;
import battleship.messages.Snapshot;
import battleship.messages.TeamSelectReply;

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
	public void onDisconnect(String reason) {
	}

	public void onNetworkError(Exception error, Object source) {
	}

	@Override
	protected void handle(IncorrectUsage o) {
		// TODO Auto-generated method stub
		super.handle(o);
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

	// /////////////////////////////////////////////////////// //
	// ////////////////////// PRIVATE /////////////////////// //
	// ////////////////////////////////////////////////////// //

	void dispatch(Message o) {
		super.handle(o);
	}

}
