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
import se.culvertsoft.mgen.javapack.util.EqualityTester;
/* custom_imports_begin *//* custom_imports_end */

public class LoginReply extends Connection /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_uuid;
	private boolean m_result;
	private String m_failReason;
	private battleship.state.Team m_team;
	private boolean _m_result_isSet;

	public LoginReply() {
		super();
		m_uuid = null;
		m_result = false;
		m_failReason = null;
		m_team = null;
		_m_result_isSet = false;
	}

	public LoginReply(final String uuid,
				final boolean result,
				final String failReason,
				final battleship.state.Team team) {
		m_uuid = uuid;
		m_result = result;
		m_failReason = failReason;
		m_team = team;
		_m_result_isSet = true;
	}

	public String getUuid() {
		return m_uuid;
	}

	public boolean getResult() {
		return m_result;
	}

	public String getFailReason() {
		return m_failReason;
	}

	public battleship.state.Team getTeam() {
		return m_team;
	}

	public boolean hasUuid() {
		return _isUuidSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasResult() {
		return _isResultSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasFailReason() {
		return _isFailReasonSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public LoginReply unsetUuid() {
		_setUuidSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public LoginReply unsetResult() {
		_setResultSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public LoginReply unsetFailReason() {
		_setFailReasonSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public LoginReply unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public LoginReply setUuid(final String uuid) {
		m_uuid = uuid;
		return this;
	}

	public LoginReply setResult(final boolean result) {
		m_result = result;
		_m_result_isSet = true;
		return this;
	}

	public LoginReply setFailReason(final String failReason) {
		m_failReason = failReason;
		return this;
	}

	public LoginReply setTeam(final battleship.state.Team team) {
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
		int result = -1861127927;
		result = _isUuidSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getUuid(), _uuid_METADATA.typ())) : result;
		result = _isResultSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getResult(), _result_METADATA.typ())) : result;
		result = _isFailReasonSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getFailReason(), _failReason_METADATA.typ())) : result;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (LoginReply.class != other.getClass()) return false;
		final LoginReply o = (LoginReply)other;
		return true
		  && hasUuid() == o.hasUuid()
		  && hasResult() == o.hasResult()
		  && hasFailReason() == o.hasFailReason()
		  && hasTeam() == o.hasTeam()
		  && EqualityTester.areEqual(getUuid(), o.getUuid(), _uuid_METADATA.typ())
		  && getResult() == o.getResult()
		  && EqualityTester.areEqual(getFailReason(), o.getFailReason(), _failReason_METADATA.typ())
		  && getTeam() == o.getTeam();
	}

	@Override
	public LoginReply deepCopy() {
		final LoginReply out = new LoginReply(
			getUuid(),
			getResult(),
			getFailReason(),
			getTeam());
		if (!hasResult()) out.unsetResult();
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
				visitor.beginVisit(this, 4);
				visitor.visit(getUuid(), _uuid_METADATA);
				visitor.visit(getResult(), _result_METADATA);
				visitor.visit(getFailReason(), _failReason_METADATA);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isUuidSet(FieldSetDepth.SHALLOW))
					visitor.visit(getUuid(), _uuid_METADATA);
				if (_isResultSet(FieldSetDepth.SHALLOW))
					visitor.visit(getResult(), _result_METADATA);
				if (_isFailReasonSet(FieldSetDepth.SHALLOW))
					visitor.visit(getFailReason(), _failReason_METADATA);
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
			case (_uuid_ID):
				setUuid((String)reader.readStringField(_uuid_METADATA, context));
				return true;
			case (_result_ID):
				setResult((boolean)reader.readBooleanField(_result_METADATA, context));
				return true;
			case (_failReason_ID):
				setFailReason((String)reader.readStringField(_failReason_METADATA, context));
				return true;
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

	public boolean _isUuidSet(final FieldSetDepth fieldSetDepth) {
		return m_uuid != null;
	}

	public boolean _isResultSet(final FieldSetDepth fieldSetDepth) {
		return _m_result_isSet;
	}

	public boolean _isFailReasonSet(final FieldSetDepth fieldSetDepth) {
		return m_failReason != null;
	}

	public boolean _isTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_team != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_uuid_ID):
				return _isUuidSet(depth);
			case (_result_ID):
				return _isResultSet(depth);
			case (_failReason_ID):
				return _isFailReasonSet(depth);
			case (_team_ID):
				return _isTeamSet(depth);
			default:
				return false;
		}
	}

	public LoginReply _setUuidSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_uuid = m_uuid != null ? m_uuid : "";
		else
			m_uuid = null;
		return this;
	}

	public LoginReply _setResultSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_result = false;
		_m_result_isSet = state;
		return this;
	}

	public LoginReply _setFailReasonSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_failReason = m_failReason != null ? m_failReason : "";
		else
			m_failReason = null;
		return this;
	}

	public LoginReply _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : battleship.state.Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public LoginReply _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setUuidSet(state, depth);
		_setResultSet(state, depth);
		_setFailReasonSet(state, depth);
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
		out += _isUuidSet(depth) ? 1 : 0;
		out += _isResultSet(depth) ? 1 : 0;
		out += _isFailReasonSet(depth) ? 1 : 0;
		out += _isTeamSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_uuid_ID):
				return _uuid_METADATA;
			case (_result_ID):
				return _result_METADATA;
			case (_failReason_ID):
				return _failReason_METADATA;
			case (_team_ID):
				return _team_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("uuid"):
				return _uuid_METADATA;
			case ("result"):
				return _result_METADATA;
			case ("failReason"):
				return _failReason_METADATA;
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
		  

	public static final long _TYPE_ID = 1638563683387667720L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.Connection._TYPE_ID, battleship.messages.LoginReply._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -9758;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.Connection._TYPE_ID_16BIT, battleship.messages.LoginReply._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "2eI";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.Connection._TYPE_ID_16BIT_BASE64, battleship.messages.LoginReply._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.Connection._TYPE_ID_16BIT_BASE64 + battleship.messages.LoginReply._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.LoginReply";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.Connection._TYPE_NAME, battleship.messages.LoginReply._TYPE_NAME };

	public static final Field _uuid_METADATA = new Field("battleship.messages.LoginReply", "uuid", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-11112);
	public static final Field _result_METADATA = new Field("battleship.messages.LoginReply", "result", se.culvertsoft.mgen.api.model.BoolType.INSTANCE, null, (short)24642);
	public static final Field _failReason_METADATA = new Field("battleship.messages.LoginReply", "failReason", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)1610);
	public static final Field _team_METADATA = new Field("battleship.messages.LoginReply", "team", battleship.state.Team._TYPE, null, (short)-1585);

	public static final short _uuid_ID = (short)-11112;
	public static final short _result_ID = (short)24642;
	public static final short _failReason_ID = (short)1610;
	public static final short _team_ID = (short)-1585;

	public static final Field[] _FIELDS = { _uuid_METADATA, _result_METADATA, _failReason_METADATA, _team_METADATA };

}
