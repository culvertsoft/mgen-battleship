/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package battleship;

import se.culvertsoft.mgen.javapack.classes.MGenBase;

public class Handler  {

	protected void handleDiscard(MGenBase o) {}

	protected void handleNull(MGenBase o) { handleDiscard(o); }

	protected void handleUnknown(MGenBase o) { handleDiscard(o); }

	protected void handle(battleship.messages.Chat o) {
		handleDiscard(o);
	}

	protected void handle(battleship.messages.Fire o) {
		handleDiscard(o);
	}

	protected void handle(battleship.messages.PhaseChange o) {
		handleDiscard(o);
	}

	protected void handle(battleship.messages.Snapshot o) {
		handleDiscard(o);
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
