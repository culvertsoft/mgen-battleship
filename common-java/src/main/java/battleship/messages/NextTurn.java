/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package battleship.messages;

import se.culvertsoft.mgen.api.model.Field;
import se.culvertsoft.mgen.javapack.metadata.FieldSetDepth;
import se.culvertsoft.mgen.javapack.metadata.FieldVisitSelection;
import se.culvertsoft.mgen.javapack.serialization.FieldVisitor;
import se.culvertsoft.mgen.javapack.serialization.Reader;
import se.culvertsoft.mgen.javapack.util.FieldHasher;
/* custom_imports_begin *//* custom_imports_end */

public class NextTurn extends GameInfo /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private battleship.state.Team m_team;
	private double m_maxTime;
	private boolean _m_maxTime_isSet;

	public NextTurn() {
		super();
		m_team = null;
		m_maxTime = 0.0;
		_m_maxTime_isSet = false;
	}

	public NextTurn(final battleship.state.Team team,
				final double maxTime) {
		m_team = team;
		m_maxTime = maxTime;
		_m_maxTime_isSet = true;
	}

	public battleship.state.Team getTeam() {
		return m_team;
	}

	public double getMaxTime() {
		return m_maxTime;
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasMaxTime() {
		return _isMaxTimeSet(FieldSetDepth.SHALLOW);
	}

	public NextTurn unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public NextTurn unsetMaxTime() {
		_setMaxTimeSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public NextTurn setTeam(final battleship.state.Team team) {
		m_team = team;
		return this;
	}

	public NextTurn setMaxTime(final double maxTime) {
		m_maxTime = maxTime;
		_m_maxTime_isSet = true;
		return this;
	}

	/* custom_methods_begin *//* custom_methods_end */

	@Override
	public String toString() {
		return se.culvertsoft.mgen.javapack.util.Stringifyer.toString(this);
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 807547928;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		result = _isMaxTimeSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getMaxTime(), _maxTime_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (NextTurn.class != other.getClass()) return false;
		final NextTurn o = (NextTurn)other;
		return true
		  && hasTeam() == o.hasTeam()
		  && hasMaxTime() == o.hasMaxTime()
		  && getTeam() == o.getTeam()
		  && getMaxTime() == o.getMaxTime();
	}

	@Override
	public NextTurn deepCopy() {
		final NextTurn out = new NextTurn(
			getTeam(),
			getMaxTime());
		if (!hasMaxTime()) out.unsetMaxTime();
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
				visitor.beginVisit(this, 2);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.visit(getMaxTime(), _maxTime_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getTeam(), _team_METADATA);
				if (_isMaxTimeSet(FieldSetDepth.SHALLOW))
					visitor.visit(getMaxTime(), _maxTime_METADATA);
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
				setTeam((battleship.state.Team)reader.readEnumField(_team_METADATA, context));
				return true;
			case (_maxTime_ID):
				setMaxTime((double)reader.readFloat64Field(_maxTime_METADATA, context));
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

	public boolean _isMaxTimeSet(final FieldSetDepth fieldSetDepth) {
		return _m_maxTime_isSet;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_team_ID):
				return _isTeamSet(depth);
			case (_maxTime_ID):
				return _isMaxTimeSet(depth);
			default:
				return false;
		}
	}

	public NextTurn _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : battleship.state.Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public NextTurn _setMaxTimeSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_maxTime = 0.0;
		_m_maxTime_isSet = state;
		return this;
	}

	public NextTurn _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setTeamSet(state, depth);
		_setMaxTimeSet(state, depth);
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
		out += _isMaxTimeSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_team_ID):
				return _team_METADATA;
			case (_maxTime_ID):
				return _maxTime_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("team"):
				return _team_METADATA;
			case ("maxTime"):
				return _maxTime_METADATA;
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
		  

	public static final long _TYPE_ID = 4079438618512772748L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.GameInfo._TYPE_ID, battleship.messages.NextTurn._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -29368;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.GameInfo._TYPE_ID_16BIT, battleship.messages.NextTurn._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "jUg";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64, battleship.messages.NextTurn._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64 + battleship.messages.NextTurn._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.NextTurn";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.GameInfo._TYPE_NAME, battleship.messages.NextTurn._TYPE_NAME };

	public static final Field _team_METADATA = new Field("battleship.messages.NextTurn", "team", battleship.state.Team._TYPE, null, (short)-1585);
	public static final Field _maxTime_METADATA = new Field("battleship.messages.NextTurn", "maxTime", se.culvertsoft.mgen.api.model.Float64Type.INSTANCE, null, (short)22152);

	public static final short _team_ID = (short)-1585;
	public static final short _maxTime_ID = (short)22152;

	public static final Field[] _FIELDS = { _team_METADATA, _maxTime_METADATA };

}
