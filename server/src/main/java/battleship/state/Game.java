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
	private Map m_redMap;
	private Map m_blueMap;
	private Phase m_phase;
	private Team m_currentTeam;
	private double m_timeLastMove;
	private boolean _m_timeLastMove_isSet;

	public Game() {
		super();
		m_players = null;
		m_redMap = null;
		m_blueMap = null;
		m_phase = null;
		m_currentTeam = null;
		m_timeLastMove = 0.0;
		_m_timeLastMove_isSet = false;
	}

	public Game(final java.util.ArrayList<Player> players,
				final Map redMap,
				final Map blueMap,
				final Phase phase,
				final Team currentTeam,
				final double timeLastMove) {
		m_players = players;
		m_redMap = redMap;
		m_blueMap = blueMap;
		m_phase = phase;
		m_currentTeam = currentTeam;
		m_timeLastMove = timeLastMove;
		_m_timeLastMove_isSet = true;
	}

	public java.util.ArrayList<Player> getPlayers() {
		return m_players;
	}

	public Map getRedMap() {
		return m_redMap;
	}

	public Map getBlueMap() {
		return m_blueMap;
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

	public boolean hasRedMap() {
		return _isRedMapSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasBlueMap() {
		return _isBlueMapSet(FieldSetDepth.SHALLOW);
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

	public Game unsetRedMap() {
		_setRedMapSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Game unsetBlueMap() {
		_setBlueMapSet(false, FieldSetDepth.SHALLOW);
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

	public Game setRedMap(final Map redMap) {
		m_redMap = redMap;
		return this;
	}

	public Game setBlueMap(final Map blueMap) {
		m_blueMap = blueMap;
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
		result = _isRedMapSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getRedMap(), _redMap_METADATA.typ())) : result;
		result = _isBlueMapSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getBlueMap(), _blueMap_METADATA.typ())) : result;
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
		  && (_isRedMapSet(FieldSetDepth.SHALLOW) == o._isRedMapSet(FieldSetDepth.SHALLOW))
		  && (_isBlueMapSet(FieldSetDepth.SHALLOW) == o._isBlueMapSet(FieldSetDepth.SHALLOW))
		  && (_isPhaseSet(FieldSetDepth.SHALLOW) == o._isPhaseSet(FieldSetDepth.SHALLOW))
		  && (_isCurrentTeamSet(FieldSetDepth.SHALLOW) == o._isCurrentTeamSet(FieldSetDepth.SHALLOW))
		  && (_isTimeLastMoveSet(FieldSetDepth.SHALLOW) == o._isTimeLastMoveSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getPlayers(), o.getPlayers(), _players_METADATA.typ())
		  && EqualityTester.areEqual(getRedMap(), o.getRedMap(), _redMap_METADATA.typ())
		  && EqualityTester.areEqual(getBlueMap(), o.getBlueMap(), _blueMap_METADATA.typ())
		  && EqualityTester.areEqual(getPhase(), o.getPhase(), _phase_METADATA.typ())
		  && EqualityTester.areEqual(getCurrentTeam(), o.getCurrentTeam(), _currentTeam_METADATA.typ())
		  && EqualityTester.areEqual(getTimeLastMove(), o.getTimeLastMove(), _timeLastMove_METADATA.typ());
	}

	@Override
	public Game deepCopy() {
		final Game out = new Game();
		out.setPlayers(DeepCopyer.deepCopy(getPlayers(), _players_METADATA.typ()));
		out.setRedMap(DeepCopyer.deepCopy(getRedMap(), _redMap_METADATA.typ()));
		out.setBlueMap(DeepCopyer.deepCopy(getBlueMap(), _blueMap_METADATA.typ()));
		out.setPhase(DeepCopyer.deepCopy(getPhase(), _phase_METADATA.typ()));
		out.setCurrentTeam(DeepCopyer.deepCopy(getCurrentTeam(), _currentTeam_METADATA.typ()));
		out.setTimeLastMove(DeepCopyer.deepCopy(getTimeLastMove(), _timeLastMove_METADATA.typ()));
		out._setPlayersSet(_isPlayersSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setRedMapSet(_isRedMapSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setBlueMapSet(_isBlueMapSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.beginVisit(this, 6);
				visitor.visit(getPlayers(), _players_METADATA);
				visitor.visit(getRedMap(), _redMap_METADATA);
				visitor.visit(getBlueMap(), _blueMap_METADATA);
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
				if (_isRedMapSet(FieldSetDepth.SHALLOW))
					visitor.visit(getRedMap(), _redMap_METADATA);
				if (_isBlueMapSet(FieldSetDepth.SHALLOW))
					visitor.visit(getBlueMap(), _blueMap_METADATA);
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
			case (_redMap_ID):
				setRedMap((Map)reader.readMgenObjectField(_redMap_METADATA, context));
				return true;
			case (_blueMap_ID):
				setBlueMap((Map)reader.readMgenObjectField(_blueMap_METADATA, context));
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

	public boolean _isRedMapSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_redMap != null;
		} else {
			return m_redMap != null && Validator.validateFieldDeep(getRedMap(), _redMap_METADATA.typ());
		}
	}

	public boolean _isBlueMapSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_blueMap != null;
		} else {
			return m_blueMap != null && Validator.validateFieldDeep(getBlueMap(), _blueMap_METADATA.typ());
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
			case (_redMap_ID):
				return _isRedMapSet(depth);
			case (_blueMap_ID):
				return _isBlueMapSet(depth);
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

	public Game _setRedMapSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_redMap = m_redMap != null ? m_redMap : new Map();
		else
			m_redMap = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getRedMap(), _redMap_METADATA.typ());
		return this;
	}

	public Game _setBlueMapSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_blueMap = m_blueMap != null ? m_blueMap : new Map();
		else
			m_blueMap = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getBlueMap(), _blueMap_METADATA.typ());
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
		_setRedMapSet(state, depth);
		_setBlueMapSet(state, depth);
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
				&& (!_isRedMapSet(FieldSetDepth.SHALLOW) || _isRedMapSet(FieldSetDepth.DEEP))
				&& (!_isBlueMapSet(FieldSetDepth.SHALLOW) || _isBlueMapSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isPlayersSet(depth) ? 1 : 0;
		out += _isRedMapSet(depth) ? 1 : 0;
		out += _isBlueMapSet(depth) ? 1 : 0;
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
			case (_redMap_ID):
				return _redMap_METADATA;
			case (_blueMap_ID):
				return _blueMap_METADATA;
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
			case ("redMap"):
				return _redMap_METADATA;
			case ("blueMap"):
				return _blueMap_METADATA;
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
	public static final Field _redMap_METADATA = new Field("battleship.state.Game", "redMap", new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Map", 9078412533289593707L), null, (short)21290);
	public static final Field _blueMap_METADATA = new Field("battleship.state.Game", "blueMap", new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Map", 9078412533289593707L), null, (short)-19206);
	public static final Field _phase_METADATA = new Field("battleship.state.Game", "phase", battleship.state.Phase._TYPE, null, (short)7625);
	public static final Field _currentTeam_METADATA = new Field("battleship.state.Game", "currentTeam", battleship.state.Team._TYPE, null, (short)-14726);
	public static final Field _timeLastMove_METADATA = new Field("battleship.state.Game", "timeLastMove", se.culvertsoft.mgen.api.model.Float64Type.INSTANCE, null, (short)22636);

	public static final short _players_ID = (short)29583;
	public static final short _redMap_ID = (short)21290;
	public static final short _blueMap_ID = (short)-19206;
	public static final short _phase_ID = (short)7625;
	public static final short _currentTeam_ID = (short)-14726;
	public static final short _timeLastMove_ID = (short)22636;

	public static final Field[] _FIELDS = { _players_METADATA, _redMap_METADATA, _blueMap_METADATA, _phase_METADATA, _currentTeam_METADATA, _timeLastMove_METADATA };

}
