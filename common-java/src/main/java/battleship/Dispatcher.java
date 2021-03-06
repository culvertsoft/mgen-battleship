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

public class Dispatcher  {

	public static void dispatch(MGenBase o, Handler handler) {

		if (o==null) {
			handler.handleNull(o);
			return;
		}

		final short[] ids = o._typeIds16Bit();
		int i = 0;
		switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
			case battleship.messages.Message._TYPE_ID_16BIT:
				switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
					case battleship.messages.Connection._TYPE_ID_16BIT:
						switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
							case battleship.messages.Chat._TYPE_ID_16BIT:
								handler.handle((battleship.messages.Chat)o);
								break;
							case battleship.messages.Login._TYPE_ID_16BIT:
								handler.handle((battleship.messages.Login)o);
								break;
							case battleship.messages.LoginReply._TYPE_ID_16BIT:
								handler.handle((battleship.messages.LoginReply)o);
								break;
							case battleship.messages.TeamSelect._TYPE_ID_16BIT:
								handler.handle((battleship.messages.TeamSelect)o);
								break;
							case battleship.messages.TeamSelectReply._TYPE_ID_16BIT:
								handler.handle((battleship.messages.TeamSelectReply)o);
								break;
							case battleship.messages.PlayerJoined._TYPE_ID_16BIT:
								handler.handle((battleship.messages.PlayerJoined)o);
								break;
							case battleship.messages.PlayerChangedTeam._TYPE_ID_16BIT:
								handler.handle((battleship.messages.PlayerChangedTeam)o);
								break;
							default:
								handler.handle((battleship.messages.Connection)o);
								break;
						}
						break;
					case battleship.messages.GameInput._TYPE_ID_16BIT:
						switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
							case battleship.messages.Fire._TYPE_ID_16BIT:
								handler.handle((battleship.messages.Fire)o);
								break;
							case battleship.messages.Resign._TYPE_ID_16BIT:
								handler.handle((battleship.messages.Resign)o);
								break;
							case battleship.messages.ShipPlacement._TYPE_ID_16BIT:
								handler.handle((battleship.messages.ShipPlacement)o);
								break;
							default:
								handler.handle((battleship.messages.GameInput)o);
								break;
						}
						break;
					case battleship.messages.GameInfo._TYPE_ID_16BIT:
						switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
							case battleship.messages.FireResult._TYPE_ID_16BIT:
								handler.handle((battleship.messages.FireResult)o);
								break;
							case battleship.messages.PhaseChange._TYPE_ID_16BIT:
								handler.handle((battleship.messages.PhaseChange)o);
								break;
							case battleship.messages.Snapshot._TYPE_ID_16BIT:
								handler.handle((battleship.messages.Snapshot)o);
								break;
							case battleship.messages.NextTurn._TYPE_ID_16BIT:
								handler.handle((battleship.messages.NextTurn)o);
								break;
							case battleship.messages.GameOver._TYPE_ID_16BIT:
								handler.handle((battleship.messages.GameOver)o);
								break;
							case battleship.messages.ShipPlacementReply._TYPE_ID_16BIT:
								handler.handle((battleship.messages.ShipPlacementReply)o);
								break;
							case battleship.messages.ShipSunk._TYPE_ID_16BIT:
								handler.handle((battleship.messages.ShipSunk)o);
								break;
							case battleship.messages.IncorrectUsage._TYPE_ID_16BIT:
								handler.handle((battleship.messages.IncorrectUsage)o);
								break;
							default:
								handler.handle((battleship.messages.GameInfo)o);
								break;
						}
						break;
					default:
						handler.handle((battleship.messages.Message)o);
						break;
				}
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
