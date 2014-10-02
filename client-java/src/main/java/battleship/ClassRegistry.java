/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package battleship;

import se.culvertsoft.mgen.javapack.classes.ClassRegistryEntry;
import se.culvertsoft.mgen.javapack.classes.Ctor;
import se.culvertsoft.mgen.javapack.classes.MGenBase;

public class ClassRegistry extends se.culvertsoft.mgen.javapack.classes.ClassRegistryBase  {

	public static ClassRegistryEntry battleship_messages_Chat = new ClassRegistryEntry(5570298698115942109L, battleship.messages.Chat._TYPE_IDS, "battleship.messages.Chat", new Ctor() { public MGenBase create() { return new battleship.messages.Chat(); } });
	public static ClassRegistryEntry battleship_messages_Fire = new ClassRegistryEntry(6880290600081744688L, battleship.messages.Fire._TYPE_IDS, "battleship.messages.Fire", new Ctor() { public MGenBase create() { return new battleship.messages.Fire(); } });
	public static ClassRegistryEntry battleship_messages_PhaseChange = new ClassRegistryEntry(6310518169450536016L, battleship.messages.PhaseChange._TYPE_IDS, "battleship.messages.PhaseChange", new Ctor() { public MGenBase create() { return new battleship.messages.PhaseChange(); } });
	public static ClassRegistryEntry battleship_messages_Snapshot = new ClassRegistryEntry(7637425245762246339L, battleship.messages.Snapshot._TYPE_IDS, "battleship.messages.Snapshot", new Ctor() { public MGenBase create() { return new battleship.messages.Snapshot(); } });
	public static ClassRegistryEntry battleship_state_Ship = new ClassRegistryEntry(5434834621073515272L, battleship.state.Ship._TYPE_IDS, "battleship.state.Ship", new Ctor() { public MGenBase create() { return new battleship.state.Ship(); } });
	public static ClassRegistryEntry battleship_state_Segment = new ClassRegistryEntry(3947935130376690974L, battleship.state.Segment._TYPE_IDS, "battleship.state.Segment", new Ctor() { public MGenBase create() { return new battleship.state.Segment(); } });
	public static ClassRegistryEntry battleship_state_Map = new ClassRegistryEntry(9078412533289593707L, battleship.state.Map._TYPE_IDS, "battleship.state.Map", new Ctor() { public MGenBase create() { return new battleship.state.Map(); } });
	public static ClassRegistryEntry battleship_state_Player = new ClassRegistryEntry(8473431594631525139L, battleship.state.Player._TYPE_IDS, "battleship.state.Player", new Ctor() { public MGenBase create() { return new battleship.state.Player(); } });
	public static ClassRegistryEntry battleship_state_Game = new ClassRegistryEntry(1644051945579161717L, battleship.state.Game._TYPE_IDS, "battleship.state.Game", new Ctor() { public MGenBase create() { return new battleship.state.Game(); } });
	public static ClassRegistryEntry battleship_state_Vec2 = new ClassRegistryEntry(6453467209109281982L, battleship.state.Vec2._TYPE_IDS, "battleship.state.Vec2", new Ctor() { public MGenBase create() { return new battleship.state.Vec2(); } });

	public ClassRegistry() {
		add(battleship_messages_Chat);
		add(battleship_messages_Fire);
		add(battleship_messages_PhaseChange);
		add(battleship_messages_Snapshot);
		add(battleship_state_Ship);
		add(battleship_state_Segment);
		add(battleship_state_Map);
		add(battleship_state_Player);
		add(battleship_state_Game);
		add(battleship_state_Vec2);
	}

	@Override
	public ClassRegistryEntry getByTypeIds16Bit(final short[] ids) {
		int i = 0;
		switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
			case battleship.messages.Chat._TYPE_ID_16BIT:
				return battleship_messages_Chat;
			case battleship.messages.Fire._TYPE_ID_16BIT:
				return battleship_messages_Fire;
			case battleship.messages.PhaseChange._TYPE_ID_16BIT:
				return battleship_messages_PhaseChange;
			case battleship.messages.Snapshot._TYPE_ID_16BIT:
				return battleship_messages_Snapshot;
			case battleship.state.Ship._TYPE_ID_16BIT:
				return battleship_state_Ship;
			case battleship.state.Segment._TYPE_ID_16BIT:
				return battleship_state_Segment;
			case battleship.state.Map._TYPE_ID_16BIT:
				return battleship_state_Map;
			case battleship.state.Player._TYPE_ID_16BIT:
				return battleship_state_Player;
			case battleship.state.Game._TYPE_ID_16BIT:
				return battleship_state_Game;
			case battleship.state.Vec2._TYPE_ID_16BIT:
				return battleship_state_Vec2;
			default:
				return null;
		}
	}

	@Override
	public ClassRegistryEntry getByTypeIds16BitBase64(final String[] ids) {
		int i = 0;
		switch((i < ids.length ? ids[i++] : "0xFFFFFFFF")) {
			case battleship.messages.Chat._TYPE_ID_16BIT_BASE64:
				return battleship_messages_Chat;
			case battleship.messages.Fire._TYPE_ID_16BIT_BASE64:
				return battleship_messages_Fire;
			case battleship.messages.PhaseChange._TYPE_ID_16BIT_BASE64:
				return battleship_messages_PhaseChange;
			case battleship.messages.Snapshot._TYPE_ID_16BIT_BASE64:
				return battleship_messages_Snapshot;
			case battleship.state.Ship._TYPE_ID_16BIT_BASE64:
				return battleship_state_Ship;
			case battleship.state.Segment._TYPE_ID_16BIT_BASE64:
				return battleship_state_Segment;
			case battleship.state.Map._TYPE_ID_16BIT_BASE64:
				return battleship_state_Map;
			case battleship.state.Player._TYPE_ID_16BIT_BASE64:
				return battleship_state_Player;
			case battleship.state.Game._TYPE_ID_16BIT_BASE64:
				return battleship_state_Game;
			case battleship.state.Vec2._TYPE_ID_16BIT_BASE64:
				return battleship_state_Vec2;
			default:
				return null;
		}
	}

}
