/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package battleship.messages;

import se.culvertsoft.mgen.api.model.Field;
import se.culvertsoft.mgen.javapack.metadata.FieldSetDepth;
import se.culvertsoft.mgen.javapack.metadata.FieldVisitSelection;
import se.culvertsoft.mgen.javapack.serialization.FieldVisitor;
import se.culvertsoft.mgen.javapack.serialization.Reader;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
import se.culvertsoft.mgen.javapack.util.DeepCopyer;
import se.culvertsoft.mgen.javapack.util.FieldHasher;
/*custom_imports_begin*//*custom_imports_end*/

public class TeamSelectReply extends Connection /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private boolean m_result;
	private String m_failReason;
	private battleship.state.Team m_team;
	private boolean _m_result_isSet;

	public TeamSelectReply() {
		super();
		m_result = false;
		m_failReason = null;
		m_team = null;
		_m_result_isSet = false;
	}

	public TeamSelectReply(final boolean result,
				final String failReason,
				final battleship.state.Team team) {
		m_result = result;
		m_failReason = failReason;
		m_team = team;
		_m_result_isSet = true;
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

	public boolean hasResult() {
		return _isResultSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasFailReason() {
		return _isFailReasonSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public TeamSelectReply unsetResult() {
		_setResultSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public TeamSelectReply unsetFailReason() {
		_setFailReasonSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public TeamSelectReply unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public TeamSelectReply setResult(final boolean result) {
		m_result = result;
		_m_result_isSet = true;
		return this;
	}

	public TeamSelectReply setFailReason(final String failReason) {
		m_failReason = failReason;
		return this;
	}

	public TeamSelectReply setTeam(final battleship.state.Team team) {
		m_team = team;
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
		int result = -49797719;
		result = _isResultSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getResult(), _result_METADATA.typ())) : result;
		result = _isFailReasonSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getFailReason(), _failReason_METADATA.typ())) : result;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (TeamSelectReply.class != other.getClass()) return false;
		final TeamSelectReply o = (TeamSelectReply)other;
		return true
		  && (_isResultSet(FieldSetDepth.SHALLOW) == o._isResultSet(FieldSetDepth.SHALLOW))
		  && (_isFailReasonSet(FieldSetDepth.SHALLOW) == o._isFailReasonSet(FieldSetDepth.SHALLOW))
		  && (_isTeamSet(FieldSetDepth.SHALLOW) == o._isTeamSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getResult(), o.getResult(), _result_METADATA.typ())
		  && EqualityTester.areEqual(getFailReason(), o.getFailReason(), _failReason_METADATA.typ())
		  && EqualityTester.areEqual(getTeam(), o.getTeam(), _team_METADATA.typ());
	}

	@Override
	public TeamSelectReply deepCopy() {
		final TeamSelectReply out = new TeamSelectReply();
		out.setResult(DeepCopyer.deepCopy(getResult(), _result_METADATA.typ()));
		out.setFailReason(DeepCopyer.deepCopy(getFailReason(), _failReason_METADATA.typ()));
		out.setTeam(DeepCopyer.deepCopy(getTeam(), _team_METADATA.typ()));
		out._setResultSet(_isResultSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setFailReasonSet(_isFailReasonSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setTeamSet(_isTeamSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getResult(), _result_METADATA);
				visitor.visit(getFailReason(), _failReason_METADATA);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
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

	public TeamSelectReply _setResultSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_result = false;
		_m_result_isSet = state;
		return this;
	}

	public TeamSelectReply _setFailReasonSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_failReason = m_failReason != null ? m_failReason : "";
		else
			m_failReason = null;
		return this;
	}

	public TeamSelectReply _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : battleship.state.Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public TeamSelectReply _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
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
		out += _isResultSet(depth) ? 1 : 0;
		out += _isFailReasonSet(depth) ? 1 : 0;
		out += _isTeamSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
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
		  

	public static final long _TYPE_ID = 7126685645384091317L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.Connection._TYPE_ID, battleship.messages.TeamSelectReply._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -9272;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.Connection._TYPE_ID_16BIT, battleship.messages.TeamSelectReply._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "28g";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.Connection._TYPE_ID_16BIT_BASE64, battleship.messages.TeamSelectReply._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.Connection._TYPE_ID_16BIT_BASE64 + battleship.messages.TeamSelectReply._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.TeamSelectReply";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.Connection._TYPE_NAME, battleship.messages.TeamSelectReply._TYPE_NAME };

	public static final Field _result_METADATA = new Field("battleship.messages.TeamSelectReply", "result", se.culvertsoft.mgen.api.model.BoolType.INSTANCE, null, (short)24642);
	public static final Field _failReason_METADATA = new Field("battleship.messages.TeamSelectReply", "failReason", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)1610);
	public static final Field _team_METADATA = new Field("battleship.messages.TeamSelectReply", "team", battleship.state.Team._TYPE, null, (short)-1585);

	public static final short _result_ID = (short)24642;
	public static final short _failReason_ID = (short)1610;
	public static final short _team_ID = (short)-1585;

	public static final Field[] _FIELDS = { _result_METADATA, _failReason_METADATA, _team_METADATA };

}
