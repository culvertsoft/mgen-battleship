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

public class Login extends Connection /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private String m_name;

	public Login() {
		super();
		m_name = null;
	}

	public Login(final String name) {
		m_name = name;
	}

	public String getName() {
		return m_name;
	}

	public boolean hasName() {
		return _isNameSet(FieldSetDepth.SHALLOW);
	}

	public Login unsetName() {
		_setNameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Login setName(final String name) {
		m_name = name;
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
		int result = 1835763297;
		result = _isNameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getName(), _name_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Login.class != other.getClass()) return false;
		final Login o = (Login)other;
		return true
		  && (_isNameSet(FieldSetDepth.SHALLOW) == o._isNameSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getName(), o.getName(), _name_METADATA.typ());
	}

	@Override
	public Login deepCopy() {
		final Login out = new Login();
		out.setName(DeepCopyer.deepCopy(getName(), _name_METADATA.typ()));
		out._setNameSet(_isNameSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getName(), _name_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isNameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getName(), _name_METADATA);
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
			case (_name_ID):
				setName((String)reader.readStringField(_name_METADATA, context));
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

	public boolean _isNameSet(final FieldSetDepth fieldSetDepth) {
		return m_name != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_name_ID):
				return _isNameSet(depth);
			default:
				return false;
		}
	}

	public Login _setNameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_name = m_name != null ? m_name : "";
		else
			m_name = null;
		return this;
	}

	public Login _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setNameSet(state, depth);
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
		out += _isNameSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_name_ID):
				return _name_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("name"):
				return _name_METADATA;
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
		  

	public static final long _TYPE_ID = 6201271849124169878L;

	public static final long[] _TYPE_IDS = { battleship.messages.Connection._TYPE_ID, battleship.messages.Login._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -6764;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Connection._TYPE_ID_16BIT, battleship.messages.Login._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "5ZQ";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Connection._TYPE_ID_16BIT_BASE64, battleship.messages.Login._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Connection._TYPE_ID_16BIT_BASE64 + battleship.messages.Login._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.Login";

	public static final String[] _TYPE_NAMES = { battleship.messages.Connection._TYPE_NAME, battleship.messages.Login._TYPE_NAME };

	public static final Field _name_METADATA = new Field("battleship.messages.Login", "name", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-28058);

	public static final short _name_ID = (short)-28058;

	public static final Field[] _FIELDS = { _name_METADATA };

}
