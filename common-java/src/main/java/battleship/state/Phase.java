/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package battleship.state;

import se.culvertsoft.mgen.api.model.RuntimeEnumType;
import se.culvertsoft.mgen.javapack.classes.MGenEnum;

public enum Phase implements MGenEnum {
	LOBBY_PREGAME(0, "LOBBY_PREGAME"),
	PLAYING(1, "PLAYING"),
	LOBBY_POSTGAME(2, "LOBBY_POSTGAME"),
	UNKNOWN(3, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	Phase(final int intValue, final String stringValue) {
		m_intValue = intValue;
		m_stringValue = stringValue;
	}

	@Override
	public int getIntValue() {
		return m_intValue;
	}

	@Override
	public String getStringValue() {
		return m_stringValue;
	}

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("Phase", "battleship.state.Phase") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "LOBBY_PREGAME":
					return LOBBY_PREGAME;
				case "PLAYING":
					return PLAYING;
				case "LOBBY_POSTGAME":
					return LOBBY_POSTGAME;
				case "UNKNOWN":
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

		@Override
		public Enum<?> get(final int entryIntValue) {
			switch(entryIntValue) {
				case 0:
					return LOBBY_PREGAME;
				case 1:
					return PLAYING;
				case 2:
					return LOBBY_POSTGAME;
				case 3:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
