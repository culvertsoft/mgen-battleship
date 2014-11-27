/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package battleship;

import se.culvertsoft.mgen.javapack.classes.MGenBase;

public class Handler  {

	protected void handleDiscard(MGenBase o) {}

	protected void handleNull(MGenBase o) { handleDiscard(o); }

	protected void handleUnknown(MGenBase o) { handleDiscard(o); }

	protected void handle(battleship.messages.Connection o) {
		handle((battleship.messages.Message)o);
	}

	protected void handle(battleship.messages.GameInput o) {
		handle((battleship.messages.Message)o);
	}

	protected void handle(battleship.messages.GameInfo o) {
		handle((battleship.messages.Message)o);
	}

	protected void handle(battleship.messages.Chat o) {
		handle((battleship.messages.Connection)o);
	}

	protected void handle(battleship.messages.Fire o) {
		handle((battleship.messages.GameInput)o);
	}

	protected void handle(battleship.messages.FireResult o) {
		handle((battleship.messages.GameInfo)o);
	}

	protected void handle(battleship.messages.PhaseChange o) {
		handle((battleship.messages.GameInfo)o);
	}

	protected void handle(battleship.messages.Snapshot o) {
		handle((battleship.messages.GameInfo)o);
	}

	protected void handle(battleship.messages.Login o) {
		handle((battleship.messages.Connection)o);
	}

	protected void handle(battleship.messages.LoginReply o) {
		handle((battleship.messages.Connection)o);
	}

	protected void handle(battleship.messages.NextTurn o) {
		handle((battleship.messages.GameInfo)o);
	}

	protected void handle(battleship.messages.Resign o) {
		handle((battleship.messages.GameInput)o);
	}

	protected void handle(battleship.messages.GameOver o) {
		handle((battleship.messages.GameInfo)o);
	}

	protected void handle(battleship.messages.TeamSelect o) {
		handle((battleship.messages.Connection)o);
	}

	protected void handle(battleship.messages.TeamSelectReply o) {
		handle((battleship.messages.Connection)o);
	}

	protected void handle(battleship.messages.Message o) {
		handleDiscard(o);
	}

	protected void handle(battleship.messages.ShipPlacement o) {
		handle((battleship.messages.GameInput)o);
	}

	protected void handle(battleship.messages.ShipPlacementReply o) {
		handle((battleship.messages.GameInfo)o);
	}

	protected void handle(battleship.messages.ShipSunk o) {
		handle((battleship.messages.GameInfo)o);
	}

	protected void handle(battleship.messages.PlayerJoined o) {
		handle((battleship.messages.Connection)o);
	}

	protected void handle(battleship.messages.PlayerChangedTeam o) {
		handle((battleship.messages.Connection)o);
	}

	protected void handle(battleship.messages.IncorrectUsage o) {
		handle((battleship.messages.GameInfo)o);
	}

	protected void handle(battleship.state.Ship o) {
		handleDiscard(o);
	}

	protected void handle(battleship.state.Segment o) {
		handleDiscard(o);
	}

	protected void handle(battleship.state.Map o) {
		handleDiscard(o);
	}

	protected void handle(battleship.state.Player o) {
		handleDiscard(o);
	}

	protected void handle(battleship.state.Game o) {
		handleDiscard(o);
	}

	protected void handle(battleship.state.Vec2 o) {
		handleDiscard(o);
	}

	protected void handle(battleship.state.Shot o) {
		handleDiscard(o);
	}

}
