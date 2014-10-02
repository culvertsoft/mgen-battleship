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

public class LoginReply extends Connection /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private String m_uuid;

	public LoginReply() {
		super();
		m_uuid = null;
	}

	public LoginReply(final String uuid) {
		m_uuid = uuid;
	}

	public String getUuid() {
		return m_uuid;
	}

	public boolean hasUuid() {
		return _isUuidSet(FieldSetDepth.SHALLOW);
	}

	public LoginReply unsetUuid() {
		_setUuidSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public LoginReply setUuid(final String uuid) {
		m_uuid = uuid;
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
		int result = -1861127927;
		result = _isUuidSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getUuid(), _uuid_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (LoginReply.class != other.getClass()) return false;
		final LoginReply o = (LoginReply)other;
		return true
		  && (_isUuidSet(FieldSetDepth.SHALLOW) == o._isUuidSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getUuid(), o.getUuid(), _uuid_METADATA.typ());
	}

	@Override
	public LoginReply deepCopy() {
		final LoginReply out = new LoginReply();
		out.setUuid(DeepCopyer.deepCopy(getUuid(), _uuid_METADATA.typ()));
		out._setUuidSet(_isUuidSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getUuid(), _uuid_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isUuidSet(FieldSetDepth.SHALLOW))
					visitor.visit(getUuid(), _uuid_METADATA);
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

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_uuid_ID):
				return _isUuidSet(depth);
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

	public LoginReply _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setUuidSet(state, depth);
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
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_uuid_ID):
				return _uuid_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("uuid"):
				return _uuid_METADATA;
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

	public static final short _uuid_ID = (short)-11112;

	public static final Field[] _FIELDS = { _uuid_METADATA };

}
