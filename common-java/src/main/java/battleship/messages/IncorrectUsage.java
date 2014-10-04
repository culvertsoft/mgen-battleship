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

public class IncorrectUsage extends GameInfo /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private String m_reason;

	public IncorrectUsage() {
		super();
		m_reason = null;
	}

	public IncorrectUsage(final String reason) {
		m_reason = reason;
	}

	public String getReason() {
		return m_reason;
	}

	public boolean hasReason() {
		return _isReasonSet(FieldSetDepth.SHALLOW);
	}

	public IncorrectUsage unsetReason() {
		_setReasonSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public IncorrectUsage setReason(final String reason) {
		m_reason = reason;
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
		int result = 1506596100;
		result = _isReasonSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getReason(), _reason_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (IncorrectUsage.class != other.getClass()) return false;
		final IncorrectUsage o = (IncorrectUsage)other;
		return true
		  && (_isReasonSet(FieldSetDepth.SHALLOW) == o._isReasonSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getReason(), o.getReason(), _reason_METADATA.typ());
	}

	@Override
	public IncorrectUsage deepCopy() {
		final IncorrectUsage out = new IncorrectUsage();
		out.setReason(DeepCopyer.deepCopy(getReason(), _reason_METADATA.typ()));
		out._setReasonSet(_isReasonSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getReason(), _reason_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isReasonSet(FieldSetDepth.SHALLOW))
					visitor.visit(getReason(), _reason_METADATA);
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
			case (_reason_ID):
				setReason((String)reader.readStringField(_reason_METADATA, context));
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

	public boolean _isReasonSet(final FieldSetDepth fieldSetDepth) {
		return m_reason != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_reason_ID):
				return _isReasonSet(depth);
			default:
				return false;
		}
	}

	public IncorrectUsage _setReasonSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_reason = m_reason != null ? m_reason : "";
		else
			m_reason = null;
		return this;
	}

	public IncorrectUsage _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setReasonSet(state, depth);
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
		out += _isReasonSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_reason_ID):
				return _reason_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("reason"):
				return _reason_METADATA;
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
		  

	public static final long _TYPE_ID = 3733949225402703826L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.GameInfo._TYPE_ID, battleship.messages.IncorrectUsage._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -8614;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.GameInfo._TYPE_ID_16BIT, battleship.messages.IncorrectUsage._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "3lo";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64, battleship.messages.IncorrectUsage._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64 + battleship.messages.IncorrectUsage._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.IncorrectUsage";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.GameInfo._TYPE_NAME, battleship.messages.IncorrectUsage._TYPE_NAME };

	public static final Field _reason_METADATA = new Field("battleship.messages.IncorrectUsage", "reason", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-15867);

	public static final short _reason_ID = (short)-15867;

	public static final Field[] _FIELDS = { _reason_METADATA };

}
