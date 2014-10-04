package battleship.server;

import battleship.Handler;
import battleship.messages.Chat;
import battleship.messages.Fire;
import battleship.messages.Login;
import battleship.messages.Resign;
import battleship.messages.ShipPlacement;
import battleship.messages.TeamSelect;
import battleship.state.Player;

public abstract class GameServerListener extends Handler {

	public abstract void onJoin(final Player player);

	public abstract void onLeft(final Player player, final String reason);

	@Override
	protected void handle(Chat o) {
		// TODO Auto-generated method stub
		super.handle(o);
	}

	@Override
	protected void handle(Fire o) {
		// TODO Auto-generated method stub
		super.handle(o);
	}

	@Override
	protected void handle(Login o) {
		// TODO Auto-generated method stub
		super.handle(o);
	}

	@Override
	protected void handle(Resign o) {
		// TODO Auto-generated method stub
		super.handle(o);
	}

	@Override
	protected void handle(TeamSelect o) {
		// TODO Auto-generated method stub
		super.handle(o);
	}

	@Override
	protected void handle(ShipPlacement o) {
		// TODO Auto-generated method stub
		super.handle(o);
	}

}
