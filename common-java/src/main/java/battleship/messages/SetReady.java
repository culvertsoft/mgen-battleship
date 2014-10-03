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

public class SetReady extends Connection /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private boolean m_isReady;
	private boolean _m_isReady_isSet;

	public SetReady() {
		super();
		m_isReady = false;
		_m_isReady_isSet = false;
	}

	public SetReady(final boolean isReady) {
		m_isReady = isReady;
		_m_isReady_isSet = true;
	}

	public boolean getIsReady() {
		return m_isReady;
	}

	public boolean hasIsReady() {
		return _isIsReadySet(FieldSetDepth.SHALLOW);
	}

	public SetReady unsetIsReady() {
		_setIsReadySet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public SetReady setIsReady(final boolean isReady) {
		m_isReady = isReady;
		_m_isReady_isSet = true;
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
		int result = 786235497;
		result = _isIsReadySet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getIsReady(), _isReady_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (SetReady.class != other.getClass()) return false;
		final SetReady o = (SetReady)other;
		return true
		  && (_isIsReadySet(FieldSetDepth.SHALLOW) == o._isIsReadySet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getIsReady(), o.getIsReady(), _isReady_METADATA.typ());
	}

	@Override
	public SetReady deepCopy() {
		final SetReady out = new SetReady();
		out.setIsReady(DeepCopyer.deepCopy(getIsReady(), _isReady_METADATA.typ()));
		out._setIsReadySet(_isIsReadySet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getIsReady(), _isReady_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isIsReadySet(FieldSetDepth.SHALLOW))
					visitor.visit(getIsReady(), _isReady_METADATA);
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
			case (_isReady_ID):
				setIsReady((boolean)reader.readBooleanField(_isReady_METADATA, context));
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

	public boolean _isIsReadySet(final FieldSetDepth fieldSetDepth) {
		return _m_isReady_isSet;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_isReady_ID):
				return _isIsReadySet(depth);
			default:
				return false;
		}
	}

	public SetReady _setIsReadySet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_isReady = false;
		_m_isReady_isSet = state;
		return this;
	}

	public SetReady _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setIsReadySet(state, depth);
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
		out += _isIsReadySet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_isReady_ID):
				return _isReady_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("isReady"):
				return _isReady_METADATA;
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
		  

	public static final long _TYPE_ID = 1279998461071668545L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.Connection._TYPE_ID, battleship.messages.SetReady._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 9911;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.Connection._TYPE_ID_16BIT, battleship.messages.SetReady._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "Jrc";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.Connection._TYPE_ID_16BIT_BASE64, battleship.messages.SetReady._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.Connection._TYPE_ID_16BIT_BASE64 + battleship.messages.SetReady._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.SetReady";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.Connection._TYPE_NAME, battleship.messages.SetReady._TYPE_NAME };

	public static final Field _isReady_METADATA = new Field("battleship.messages.SetReady", "isReady", se.culvertsoft.mgen.api.model.BoolType.INSTANCE, null, (short)-11703);

	public static final short _isReady_ID = (short)-11703;

	public static final Field[] _FIELDS = { _isReady_METADATA };

}
