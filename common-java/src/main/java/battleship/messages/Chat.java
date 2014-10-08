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
/* custom_imports_begin *//* custom_imports_end */

public class Chat extends Connection /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_text;
	private battleship.state.Team m_team;
	private String m_from;

	public Chat() {
		super();
		m_text = null;
		m_team = null;
		m_from = null;
	}

	public Chat(final String text,
				final battleship.state.Team team,
				final String from) {
		m_text = text;
		m_team = team;
		m_from = from;
	}

	public String getText() {
		return m_text;
	}

	public battleship.state.Team getTeam() {
		return m_team;
	}

	public String getFrom() {
		return m_from;
	}

	public boolean hasText() {
		return _isTextSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasFrom() {
		return _isFromSet(FieldSetDepth.SHALLOW);
	}

	public Chat unsetText() {
		_setTextSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Chat unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Chat unsetFrom() {
		_setFromSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Chat setText(final String text) {
		m_text = text;
		return this;
	}

	public Chat setTeam(final battleship.state.Team team) {
		m_team = team;
		return this;
	}

	public Chat setFrom(final String from) {
		m_from = from;
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
		int result = 1860058464;
		result = _isTextSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getText(), _text_METADATA.typ())) : result;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		result = _isFromSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getFrom(), _from_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Chat.class != other.getClass()) return false;
		final Chat o = (Chat)other;
		return true
		  && (_isTextSet(FieldSetDepth.SHALLOW) == o._isTextSet(FieldSetDepth.SHALLOW))
		  && (_isTeamSet(FieldSetDepth.SHALLOW) == o._isTeamSet(FieldSetDepth.SHALLOW))
		  && (_isFromSet(FieldSetDepth.SHALLOW) == o._isFromSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getText(), o.getText(), _text_METADATA.typ())
		  && EqualityTester.areEqual(getTeam(), o.getTeam(), _team_METADATA.typ())
		  && EqualityTester.areEqual(getFrom(), o.getFrom(), _from_METADATA.typ());
	}

	@Override
	public Chat deepCopy() {
		final Chat out = new Chat();
		out.setText(DeepCopyer.deepCopy(getText(), _text_METADATA.typ()));
		out.setTeam(DeepCopyer.deepCopy(getTeam(), _team_METADATA.typ()));
		out.setFrom(DeepCopyer.deepCopy(getFrom(), _from_METADATA.typ()));
		out._setTextSet(_isTextSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setTeamSet(_isTeamSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setFromSet(_isFromSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getText(), _text_METADATA);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.visit(getFrom(), _from_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isTextSet(FieldSetDepth.SHALLOW))
					visitor.visit(getText(), _text_METADATA);
				if (_isTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getTeam(), _team_METADATA);
				if (_isFromSet(FieldSetDepth.SHALLOW))
					visitor.visit(getFrom(), _from_METADATA);
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
			case (_text_ID):
				setText((String)reader.readStringField(_text_METADATA, context));
				return true;
			case (_team_ID):
				setTeam((battleship.state.Team)reader.readEnumField(_team_METADATA, context));
				return true;
			case (_from_ID):
				setFrom((String)reader.readStringField(_from_METADATA, context));
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

	public boolean _isTextSet(final FieldSetDepth fieldSetDepth) {
		return m_text != null;
	}

	public boolean _isTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_team != null;
	}

	public boolean _isFromSet(final FieldSetDepth fieldSetDepth) {
		return m_from != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_text_ID):
				return _isTextSet(depth);
			case (_team_ID):
				return _isTeamSet(depth);
			case (_from_ID):
				return _isFromSet(depth);
			default:
				return false;
		}
	}

	public Chat _setTextSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_text = m_text != null ? m_text : "";
		else
			m_text = null;
		return this;
	}

	public Chat _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : battleship.state.Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public Chat _setFromSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_from = m_from != null ? m_from : "";
		else
			m_from = null;
		return this;
	}

	public Chat _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setTextSet(state, depth);
		_setTeamSet(state, depth);
		_setFromSet(state, depth);
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
		out += _isTextSet(depth) ? 1 : 0;
		out += _isTeamSet(depth) ? 1 : 0;
		out += _isFromSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_text_ID):
				return _text_METADATA;
			case (_team_ID):
				return _team_METADATA;
			case (_from_ID):
				return _from_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("text"):
				return _text_METADATA;
			case ("team"):
				return _team_METADATA;
			case ("from"):
				return _from_METADATA;
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
		  

	public static final long _TYPE_ID = 5570298698115942109L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.Connection._TYPE_ID, battleship.messages.Chat._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 17379;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.Connection._TYPE_ID_16BIT, battleship.messages.Chat._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "Q+M";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.Connection._TYPE_ID_16BIT_BASE64, battleship.messages.Chat._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.Connection._TYPE_ID_16BIT_BASE64 + battleship.messages.Chat._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.Chat";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.Connection._TYPE_NAME, battleship.messages.Chat._TYPE_NAME };

	public static final Field _text_METADATA = new Field("battleship.messages.Chat", "text", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-15556);
	public static final Field _team_METADATA = new Field("battleship.messages.Chat", "team", battleship.state.Team._TYPE, null, (short)-1585);
	public static final Field _from_METADATA = new Field("battleship.messages.Chat", "from", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-5380);

	public static final short _text_ID = (short)-15556;
	public static final short _team_ID = (short)-1585;
	public static final short _from_ID = (short)-5380;

	public static final Field[] _FIELDS = { _text_METADATA, _team_METADATA, _from_METADATA };

}
