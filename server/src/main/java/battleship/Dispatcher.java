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

public class Dispatcher  {

	public static void dispatch(MGenBase o, Handler handler) {

		if (o==null) {
			handler.handleNull(o);
			return;
		}

		final short[] ids = o._typeIds16Bit();
		int i = 0;
		switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
			case battleship.messages.Chat._TYPE_ID_16BIT:
				handler.handle((battleship.messages.Chat)o);
				break;
			case battleship.messages.Fire._TYPE_ID_16BIT:
				handler.handle((battleship.messages.Fire)o);
				break;
			case battleship.messages.PhaseChange._TYPE_ID_16BIT:
				handler.handle((battleship.messages.PhaseChange)o);
				break;
			case battleship.messages.Snapshot._TYPE_ID_16BIT:
				handler.handle((battleship.messages.Snapshot)o);
				break;
			case battleship.state.Ship._TYPE_ID_16BIT:
				handler.handle((battleship.state.Ship)o);
				break;
			case battleship.state.Segment._TYPE_ID_16BIT:
				handler.handle((battleship.state.Segment)o);
				break;
			case battleship.state.Map._TYPE_ID_16BIT:
				handler.handle((battleship.state.Map)o);
				break;
			case battleship.state.Player._TYPE_ID_16BIT:
				handler.handle((battleship.state.Player)o);
				break;
			case battleship.state.Game._TYPE_ID_16BIT:
				handler.handle((battleship.state.Game)o);
				break;
			case battleship.state.Vec2._TYPE_ID_16BIT:
				handler.handle((battleship.state.Vec2)o);
				break;
			case battleship.state.Shot._TYPE_ID_16BIT:
				handler.handle((battleship.state.Shot)o);
				break;
			default:
				handler.handleUnknown(o);
				break;
		}
	}

}
