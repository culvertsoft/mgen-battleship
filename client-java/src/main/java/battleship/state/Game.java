/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package battleship.state;

import se.culvertsoft.mgen.api.model.Field;
import se.culvertsoft.mgen.javapack.metadata.FieldSetDepth;
import se.culvertsoft.mgen.javapack.metadata.FieldVisitSelection;
import se.culvertsoft.mgen.javapack.serialization.FieldVisitor;
import se.culvertsoft.mgen.javapack.serialization.Reader;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
import se.culvertsoft.mgen.javapack.util.DeepCopyer;
import se.culvertsoft.mgen.javapack.util.FieldHasher;
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/*custom_imports_begin*//*custom_imports_end*/

public class Game extends se.culvertsoft.mgen.javapack.classes.MGenBase /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private java.util.ArrayList<Player> m_players;
	private Map m_map;
	private Phase m_phase;
	private Team m_currentTeam;
	private double m_timeLastMove;
	private boolean _m_timeLastMove_isSet;

	public Game() {
		super();
		m_players = null;
		m_map = null;
		m_phase = null;
		m_currentTeam = null;
		m_timeLastMove = 0.0;
		_m_timeLastMove_isSet = false;
	}

	public Game(final java.util.ArrayList<Player> players,
				final Map map,
				final Phase phase,
				final Team currentTeam,
				final double timeLastMove) {
		m_players = players;
		m_map = map;
		m_phase = phase;
		m_currentTeam = currentTeam;
		m_timeLastMove = timeLastMove;
		_m_timeLastMove_isSet = true;
	}

	public java.util.ArrayList<Player> getPlayers() {
		return m_players;
	}

	public Map getMap() {
		return m_map;
	}

	public Phase getPhase() {
		return m_phase;
	}

	public Team getCurrentTeam() {
		return m_currentTeam;
	}

	public double getTimeLastMove() {
		return m_timeLastMove;
	}

	public boolean hasPlayers() {
		return _isPlayersSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasMap() {
		return _isMapSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPhase() {
		return _isPhaseSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasCurrentTeam() {
		return _isCurrentTeamSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasTimeLastMove() {
		return _isTimeLastMoveSet(FieldSetDepth.SHALLOW);
	}

	public Game unsetPlayers() {
		_setPlayersSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Game unsetMap() {
		_setMapSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Game unsetPhase() {
		_setPhaseSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Game unsetCurrentTeam() {
		_setCurrentTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Game unsetTimeLastMove() {
		_setTimeLastMoveSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Game setPlayers(final java.util.ArrayList<Player> players) {
		m_players = players;
		return this;
	}

	public Game setMap(final Map map) {
		m_map = map;
		return this;
	}

	public Game setPhase(final Phase phase) {
		m_phase = phase;
		return this;
	}

	public Game setCurrentTeam(final Team currentTeam) {
		m_currentTeam = currentTeam;
		return this;
	}

	public Game setTimeLastMove(final double timeLastMove) {
		m_timeLastMove = timeLastMove;
		_m_timeLastMove_isSet = true;
		return this;
	}

	/*custom_methods_begin*//*custom_methods_end*/

	@Override
	public String toString() {
		return se.culvertsoft.mgen.javapack.util.Stringifyer.toString(this);
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = -498706807;
		result = _isPlayersSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPlayers(), _players_METADATA.typ())) : result;
		result = _isMapSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getMap(), _map_METADATA.typ())) : result;
		result = _isPhaseSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPhase(), _phase_METADATA.typ())) : result;
		result = _isCurrentTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getCurrentTeam(), _currentTeam_METADATA.typ())) : result;
		result = _isTimeLastMoveSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTimeLastMove(), _timeLastMove_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Game.class != other.getClass()) return false;
		final Game o = (Game)other;
		return true
		  && (_isPlayersSet(FieldSetDepth.SHALLOW) == o._isPlayersSet(FieldSetDepth.SHALLOW))
		  && (_isMapSet(FieldSetDepth.SHALLOW) == o._isMapSet(FieldSetDepth.SHALLOW))
		  && (_isPhaseSet(FieldSetDepth.SHALLOW) == o._isPhaseSet(FieldSetDepth.SHALLOW))
		  && (_isCurrentTeamSet(FieldSetDepth.SHALLOW) == o._isCurrentTeamSet(FieldSetDepth.SHALLOW))
		  && (_isTimeLastMoveSet(FieldSetDepth.SHALLOW) == o._isTimeLastMoveSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getPlayers(), o.getPlayers(), _players_METADATA.typ())
		  && EqualityTester.areEqual(getMap(), o.getMap(), _map_METADATA.typ())
		  && EqualityTester.areEqual(getPhase(), o.getPhase(), _phase_METADATA.typ())
		  && EqualityTester.areEqual(getCurrentTeam(), o.getCurrentTeam(), _currentTeam_METADATA.typ())
		  && EqualityTester.areEqual(getTimeLastMove(), o.getTimeLastMove(), _timeLastMove_METADATA.typ());
	}

	@Override
	public Game deepCopy() {
		final Game out = new Game();
		out.setPlayers(DeepCopyer.deepCopy(getPlayers(), _players_METADATA.typ()));
		out.setMap(DeepCopyer.deepCopy(getMap(), _map_METADATA.typ()));
		out.setPhase(DeepCopyer.deepCopy(getPhase(), _phase_METADATA.typ()));
		out.setCurrentTeam(DeepCopyer.deepCopy(getCurrentTeam(), _currentTeam_METADATA.typ()));
		out.setTimeLastMove(DeepCopyer.deepCopy(getTimeLastMove(), _timeLastMove_METADATA.typ()));
		out._setPlayersSet(_isPlayersSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setMapSet(_isMapSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setPhaseSet(_isPhaseSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setCurrentTeamSet(_isCurrentTeamSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setTimeLastMoveSet(_isTimeLastMoveSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		return out;
	}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  

	@Override
	public long _typeId() {
		return _TYPE_ID;
	}

	@Override
	public short _typeId16Bit() {
		return _TYPE_ID_16BIT;
	}

	@Override
	public String _typeId16BitBase64() {
		return _TYPE_ID_16BIT_BASE64;
	}

	@Override
	public String _typeName() {
		return _TYPE_NAME;
	}

	@Override
	public long[] _typeIds() {
		return _TYPE_IDS;
	}

	@Override
	public short[] _typeIds16Bit() {
		return _TYPE_IDS_16BIT;
	}

	@Override
	public String[] _typeIds16BitBase64() {
		return _TYPE_IDS_16BIT_BASE64;
	}

	@Override
	public String _typeIds16BitBase64String() {
		return _TYPE_IDS_16BIT_BASE64_STRING;
	}

	@Override
	public String[] _typeNames() {
		return _TYPE_NAMES;
	}

	@Override
	public void _accept(final FieldVisitor visitor, final FieldVisitSelection selection) throws java.io.IOException {
		switch(selection) {
			case ALL: {
				visitor.beginVisit(this, 5);
				visitor.visit(getPlayers(), _players_METADATA);
				visitor.visit(getMap(), _map_METADATA);
				visitor.visit(getPhase(), _phase_METADATA);
				visitor.visit(getCurrentTeam(), _currentTeam_METADATA);
				visitor.visit(getTimeLastMove(), _timeLastMove_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPlayersSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPlayers(), _players_METADATA);
				if (_isMapSet(FieldSetDepth.SHALLOW))
					visitor.visit(getMap(), _map_METADATA);
				if (_isPhaseSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPhase(), _phase_METADATA);
				if (_isCurrentTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getCurrentTeam(), _currentTeam_METADATA);
				if (_isTimeLastMoveSet(FieldSetDepth.SHALLOW))
					visitor.visit(getTimeLastMove(), _timeLastMove_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@SuppressWarnings("unchecked")
	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_players_ID):
				setPlayers((java.util.ArrayList<Player>)reader.readListField(_players_METADATA, context));
				return true;
			case (_map_ID):
				setMap((Map)reader.readMgenObjectField(_map_METADATA, context));
				return true;
			case (_phase_ID):
				setPhase((Phase)reader.readEnumField(_phase_METADATA, context));
				return true;
			case (_currentTeam_ID):
				setCurrentTeam((Team)reader.readEnumField(_currentTeam_METADATA, context));
				return true;
			case (_timeLastMove_ID):
				setTimeLastMove((double)reader.readFloat64Field(_timeLastMove_METADATA, context));
				return true;
			default:
				reader.handleUnknownField(null, context);
				return false;
		}
	}

	@Override
	public Field[] _fields() {
		return _FIELDS;
	}

	public boolean _isPlayersSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_players != null;
		} else {
			return m_players != null && Validator.validateFieldDeep(getPlayers(), _players_METADATA.typ());
		}
	}

	public boolean _isMapSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_map != null;
		} else {
			return m_map != null && Validator.validateFieldDeep(getMap(), _map_METADATA.typ());
		}
	}

	public boolean _isPhaseSet(final FieldSetDepth fieldSetDepth) {
		return m_phase != null;
	}

	public boolean _isCurrentTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_currentTeam != null;
	}

	public boolean _isTimeLastMoveSet(final FieldSetDepth fieldSetDepth) {
		return _m_timeLastMove_isSet;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_players_ID):
				return _isPlayersSet(depth);
			case (_map_ID):
				return _isMapSet(depth);
			case (_phase_ID):
				return _isPhaseSet(depth);
			case (_currentTeam_ID):
				return _isCurrentTeamSet(depth);
			case (_timeLastMove_ID):
				return _isTimeLastMoveSet(depth);
			default:
				return false;
		}
	}

	public Game _setPlayersSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_players = m_players != null ? m_players : new java.util.ArrayList<Player>();
		else
			m_players = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPlayers(), _players_METADATA.typ());
		return this;
	}

	public Game _setMapSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_map = m_map != null ? m_map : new Map();
		else
			m_map = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getMap(), _map_METADATA.typ());
		return this;
	}

	public Game _setPhaseSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_phase = m_phase != null ? m_phase : Phase.UNKNOWN;
		else
			m_phase = null;
		return this;
	}

	public Game _setCurrentTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_currentTeam = m_currentTeam != null ? m_currentTeam : Team.UNKNOWN;
		else
			m_currentTeam = null;
		return this;
	}

	public Game _setTimeLastMoveSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_timeLastMove = 0.0;
		_m_timeLastMove_isSet = state;
		return this;
	}

	public Game _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPlayersSet(state, depth);
		_setMapSet(state, depth);
		_setPhaseSet(state, depth);
		_setCurrentTeamSet(state, depth);
		_setTimeLastMoveSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPlayersSet(FieldSetDepth.SHALLOW) || _isPlayersSet(FieldSetDepth.DEEP))
				&& (!_isMapSet(FieldSetDepth.SHALLOW) || _isMapSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isPlayersSet(depth) ? 1 : 0;
		out += _isMapSet(depth) ? 1 : 0;
		out += _isPhaseSet(depth) ? 1 : 0;
		out += _isCurrentTeamSet(depth) ? 1 : 0;
		out += _isTimeLastMoveSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_players_ID):
				return _players_METADATA;
			case (_map_ID):
				return _map_METADATA;
			case (_phase_ID):
				return _phase_METADATA;
			case (_currentTeam_ID):
				return _currentTeam_METADATA;
			case (_timeLastMove_ID):
				return _timeLastMove_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("players"):
				return _players_METADATA;
			case ("map"):
				return _map_METADATA;
			case ("phase"):
				return _phase_METADATA;
			case ("currentTeam"):
				return _currentTeam_METADATA;
			case ("timeLastMove"):
				return _timeLastMove_METADATA;
			default:
				return null;
		}
	}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  

	public static final long _TYPE_ID = 1644051945579161717L;

	public static final long[] _TYPE_IDS = { battleship.state.Game._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -20523;

	public static final short[] _TYPE_IDS_16BIT = { battleship.state.Game._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "r9U";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.state.Game._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.state.Game._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.state.Game";

	public static final String[] _TYPE_NAMES = { battleship.state.Game._TYPE_NAME };

	public static final Field _players_METADATA = new Field("battleship.state.Game", "players", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Player", 8473431594631525139L)), null, (short)29583);
	public static final Field _map_METADATA = new Field("battleship.state.Game", "map", new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Map", 9078412533289593707L), null, (short)21290);
	public static final Field _phase_METADATA = new Field("battleship.state.Game", "phase", battleship.state.Phase._TYPE, null, (short)7625);
	public static final Field _currentTeam_METADATA = new Field("battleship.state.Game", "currentTeam", battleship.state.Team._TYPE, null, (short)-14726);
	public static final Field _timeLastMove_METADATA = new Field("battleship.state.Game", "timeLastMove", se.culvertsoft.mgen.api.model.Float64Type.INSTANCE, null, (short)22636);

	public static final short _players_ID = (short)29583;
	public static final short _map_ID = (short)21290;
	public static final short _phase_ID = (short)7625;
	public static final short _currentTeam_ID = (short)-14726;
	public static final short _timeLastMove_ID = (short)22636;

	public static final Field[] _FIELDS = { _players_METADATA, _map_METADATA, _phase_METADATA, _currentTeam_METADATA, _timeLastMove_METADATA };

}
