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
/*custom_imports_begin*//*custom_imports_end*/

public class Player extends se.culvertsoft.mgen.javapack.classes.MGenBase /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private Team m_team;
	private String m_name;
	private boolean m_ready;
	private boolean _m_ready_isSet;

	public Player() {
		super();
		m_team = null;
		m_name = null;
		m_ready = false;
		_m_ready_isSet = false;
	}

	public Player(final Team team,
				final String name,
				final boolean ready) {
		m_team = team;
		m_name = name;
		m_ready = ready;
		_m_ready_isSet = true;
	}

	public Team getTeam() {
		return m_team;
	}

	public String getName() {
		return m_name;
	}

	public boolean getReady() {
		return m_ready;
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasName() {
		return _isNameSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasReady() {
		return _isReadySet(FieldSetDepth.SHALLOW);
	}

	public Player unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player unsetName() {
		_setNameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player unsetReady() {
		_setReadySet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player setTeam(final Team team) {
		m_team = team;
		return this;
	}

	public Player setName(final String name) {
		m_name = name;
		return this;
	}

	public Player setReady(final boolean ready) {
		m_ready = ready;
		_m_ready_isSet = true;
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
		int result = 2046581688;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		result = _isNameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getName(), _name_METADATA.typ())) : result;
		result = _isReadySet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getReady(), _ready_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Player.class != other.getClass()) return false;
		final Player o = (Player)other;
		return true
		  && (_isTeamSet(FieldSetDepth.SHALLOW) == o._isTeamSet(FieldSetDepth.SHALLOW))
		  && (_isNameSet(FieldSetDepth.SHALLOW) == o._isNameSet(FieldSetDepth.SHALLOW))
		  && (_isReadySet(FieldSetDepth.SHALLOW) == o._isReadySet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getTeam(), o.getTeam(), _team_METADATA.typ())
		  && EqualityTester.areEqual(getName(), o.getName(), _name_METADATA.typ())
		  && EqualityTester.areEqual(getReady(), o.getReady(), _ready_METADATA.typ());
	}

	@Override
	public Player deepCopy() {
		final Player out = new Player();
		out.setTeam(DeepCopyer.deepCopy(getTeam(), _team_METADATA.typ()));
		out.setName(DeepCopyer.deepCopy(getName(), _name_METADATA.typ()));
		out.setReady(DeepCopyer.deepCopy(getReady(), _ready_METADATA.typ()));
		out._setTeamSet(_isTeamSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setNameSet(_isNameSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setReadySet(_isReadySet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.beginVisit(this, 3);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.visit(getName(), _name_METADATA);
				visitor.visit(getReady(), _ready_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getTeam(), _team_METADATA);
				if (_isNameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getName(), _name_METADATA);
				if (_isReadySet(FieldSetDepth.SHALLOW))
					visitor.visit(getReady(), _ready_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_team_ID):
				setTeam((Team)reader.readEnumField(_team_METADATA, context));
				return true;
			case (_name_ID):
				setName((String)reader.readStringField(_name_METADATA, context));
				return true;
			case (_ready_ID):
				setReady((boolean)reader.readBooleanField(_ready_METADATA, context));
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

	public boolean _isTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_team != null;
	}

	public boolean _isNameSet(final FieldSetDepth fieldSetDepth) {
		return m_name != null;
	}

	public boolean _isReadySet(final FieldSetDepth fieldSetDepth) {
		return _m_ready_isSet;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_team_ID):
				return _isTeamSet(depth);
			case (_name_ID):
				return _isNameSet(depth);
			case (_ready_ID):
				return _isReadySet(depth);
			default:
				return false;
		}
	}

	public Player _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public Player _setNameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_name = m_name != null ? m_name : "";
		else
			m_name = null;
		return this;
	}

	public Player _setReadySet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_ready = false;
		_m_ready_isSet = state;
		return this;
	}

	public Player _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setTeamSet(state, depth);
		_setNameSet(state, depth);
		_setReadySet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true;
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isTeamSet(depth) ? 1 : 0;
		out += _isNameSet(depth) ? 1 : 0;
		out += _isReadySet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_team_ID):
				return _team_METADATA;
			case (_name_ID):
				return _name_METADATA;
			case (_ready_ID):
				return _ready_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("team"):
				return _team_METADATA;
			case ("name"):
				return _name_METADATA;
			case ("ready"):
				return _ready_METADATA;
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
		  

	public static final long _TYPE_ID = 8473431594631525139L;

	public static final long[] _TYPE_IDS = { battleship.state.Player._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -18915;

	public static final short[] _TYPE_IDS_16BIT = { battleship.state.Player._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "th0";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.state.Player._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.state.Player._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.state.Player";

	public static final String[] _TYPE_NAMES = { battleship.state.Player._TYPE_NAME };

	public static final Field _team_METADATA = new Field("battleship.state.Player", "team", battleship.state.Team._TYPE, null, (short)-1585);
	public static final Field _name_METADATA = new Field("battleship.state.Player", "name", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-28058);
	public static final Field _ready_METADATA = new Field("battleship.state.Player", "ready", se.culvertsoft.mgen.api.model.BoolType.INSTANCE, null, (short)10645);

	public static final short _team_ID = (short)-1585;
	public static final short _name_ID = (short)-28058;
	public static final short _ready_ID = (short)10645;

	public static final Field[] _FIELDS = { _team_METADATA, _name_METADATA, _ready_METADATA };

}
