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

public class TeamSelect extends Connection /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private battleship.state.Team m_team;

	public TeamSelect() {
		super();
		m_team = null;
	}

	public TeamSelect(final battleship.state.Team team) {
		m_team = team;
	}

	public battleship.state.Team getTeam() {
		return m_team;
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public TeamSelect unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public TeamSelect setTeam(final battleship.state.Team team) {
		m_team = team;
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
		int result = -1610715711;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (TeamSelect.class != other.getClass()) return false;
		final TeamSelect o = (TeamSelect)other;
		return true
		  && hasTeam() == o.hasTeam()
		  && getTeam() == o.getTeam();
	}

	@Override
	public TeamSelect deepCopy() {
		final TeamSelect out = new TeamSelect(
			getTeam());
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
				visitor.beginVisit(this, 1);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getTeam(), _team_METADATA);
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

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_team_ID):
				return _isTeamSet(depth);
			default:
				return false;
		}
	}

	public TeamSelect _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : battleship.state.Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public TeamSelect _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setTeamSet(state, depth);
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
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_team_ID):
				return _team_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("team"):
				return _team_METADATA;
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
		  

	public static final long _TYPE_ID = 7168550251128746873L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.Connection._TYPE_ID, battleship.messages.TeamSelect._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 14632;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.Connection._TYPE_ID_16BIT, battleship.messages.TeamSelect._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "OSg";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.Connection._TYPE_ID_16BIT_BASE64, battleship.messages.TeamSelect._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.Connection._TYPE_ID_16BIT_BASE64 + battleship.messages.TeamSelect._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.TeamSelect";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.Connection._TYPE_NAME, battleship.messages.TeamSelect._TYPE_NAME };

	public static final Field _team_METADATA = new Field("battleship.messages.TeamSelect", "team", battleship.state.Team._TYPE, null, (short)-1585);

	public static final short _team_ID = (short)-1585;

	public static final Field[] _FIELDS = { _team_METADATA };

}
