/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
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

public class Chat extends se.culvertsoft.mgen.javapack.classes.MGenBase /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private String m_text;

	public Chat() {
		super();
		m_text = null;
	}

	public Chat(final String text) {
		m_text = text;
	}

	public String getText() {
		return m_text;
	}

	public boolean hasText() {
		return _isTextSet(FieldSetDepth.SHALLOW);
	}

	public Chat unsetText() {
		_setTextSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Chat setText(final String text) {
		m_text = text;
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
		int result = 1860058464;
		result = _isTextSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getText(), _text_METADATA.typ())) : result;
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
		  && EqualityTester.areEqual(getText(), o.getText(), _text_METADATA.typ());
	}

	@Override
	public Chat deepCopy() {
		final Chat out = new Chat();
		out.setText(DeepCopyer.deepCopy(getText(), _text_METADATA.typ()));
		out._setTextSet(_isTextSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getText(), _text_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isTextSet(FieldSetDepth.SHALLOW))
					visitor.visit(getText(), _text_METADATA);
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

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_text_ID):
				return _isTextSet(depth);
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

	public Chat _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setTextSet(state, depth);
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
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_text_ID):
				return _text_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("text"):
				return _text_METADATA;
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

	public static final long[] _TYPE_IDS = { battleship.messages.Chat._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 17379;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Chat._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "Q+M";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Chat._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Chat._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.Chat";

	public static final String[] _TYPE_NAMES = { battleship.messages.Chat._TYPE_NAME };

	public static final Field _text_METADATA = new Field("battleship.messages.Chat", "text", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-15556);

	public static final short _text_ID = (short)-15556;

	public static final Field[] _FIELDS = { _text_METADATA };

}