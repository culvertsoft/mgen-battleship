/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package battleship.state;

import se.culvertsoft.mgen.api.model.Field;
import se.culvertsoft.mgen.javapack.metadata.FieldSetDepth;
import se.culvertsoft.mgen.javapack.metadata.FieldVisitSelection;
import se.culvertsoft.mgen.javapack.serialization.FieldVisitor;
import se.culvertsoft.mgen.javapack.serialization.Reader;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
import se.culvertsoft.mgen.javapack.util.DeepCopyer;
import se.culvertsoft.mgen.javapack.util.FieldHasher;
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/*custom_imports_begin*//*custom_imports_end*/

public class Shot extends se.culvertsoft.mgen.javapack.classes.MGenBase /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private Vec2 m_pos;
	private boolean m_isHit;
	private boolean _m_isHit_isSet;

	public Shot() {
		super();
		m_pos = null;
		m_isHit = false;
		_m_isHit_isSet = false;
	}

	public Shot(final Vec2 pos,
				final boolean isHit) {
		m_pos = pos;
		m_isHit = isHit;
		_m_isHit_isSet = true;
	}

	public Vec2 getPos() {
		return m_pos;
	}

	public boolean getIsHit() {
		return m_isHit;
	}

	public boolean hasPos() {
		return _isPosSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasIsHit() {
		return _isIsHitSet(FieldSetDepth.SHALLOW);
	}

	public Shot unsetPos() {
		_setPosSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Shot unsetIsHit() {
		_setIsHitSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Shot setPos(final Vec2 pos) {
		m_pos = pos;
		return this;
	}

	public Shot setIsHit(final boolean isHit) {
		m_isHit = isHit;
		_m_isHit_isSet = true;
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
		int result = -498342511;
		result = _isPosSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPos(), _pos_METADATA.typ())) : result;
		result = _isIsHitSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getIsHit(), _isHit_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Shot.class != other.getClass()) return false;
		final Shot o = (Shot)other;
		return true
		  && (_isPosSet(FieldSetDepth.SHALLOW) == o._isPosSet(FieldSetDepth.SHALLOW))
		  && (_isIsHitSet(FieldSetDepth.SHALLOW) == o._isIsHitSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getPos(), o.getPos(), _pos_METADATA.typ())
		  && EqualityTester.areEqual(getIsHit(), o.getIsHit(), _isHit_METADATA.typ());
	}

	@Override
	public Shot deepCopy() {
		final Shot out = new Shot();
		out.setPos(DeepCopyer.deepCopy(getPos(), _pos_METADATA.typ()));
		out.setIsHit(DeepCopyer.deepCopy(getIsHit(), _isHit_METADATA.typ()));
		out._setPosSet(_isPosSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setIsHitSet(_isIsHitSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getPos(), _pos_METADATA);
				visitor.visit(getIsHit(), _isHit_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPosSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPos(), _pos_METADATA);
				if (_isIsHitSet(FieldSetDepth.SHALLOW))
					visitor.visit(getIsHit(), _isHit_METADATA);
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
			case (_pos_ID):
				setPos((Vec2)reader.readMgenObjectField(_pos_METADATA, context));
				return true;
			case (_isHit_ID):
				setIsHit((boolean)reader.readBooleanField(_isHit_METADATA, context));
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

	public boolean _isPosSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_pos != null;
		} else {
			return m_pos != null && Validator.validateFieldDeep(getPos(), _pos_METADATA.typ());
		}
	}

	public boolean _isIsHitSet(final FieldSetDepth fieldSetDepth) {
		return _m_isHit_isSet;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_pos_ID):
				return _isPosSet(depth);
			case (_isHit_ID):
				return _isIsHitSet(depth);
			default:
				return false;
		}
	}

	public Shot _setPosSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_pos = m_pos != null ? m_pos : new Vec2();
		else
			m_pos = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPos(), _pos_METADATA.typ());
		return this;
	}

	public Shot _setIsHitSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_isHit = false;
		_m_isHit_isSet = state;
		return this;
	}

	public Shot _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPosSet(state, depth);
		_setIsHitSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPosSet(FieldSetDepth.SHALLOW) || _isPosSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isPosSet(depth) ? 1 : 0;
		out += _isIsHitSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_pos_ID):
				return _pos_METADATA;
			case (_isHit_ID):
				return _isHit_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("pos"):
				return _pos_METADATA;
			case ("isHit"):
				return _isHit_METADATA;
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
		  

	public static final long _TYPE_ID = 5772087053517390128L;

	public static final long[] _TYPE_IDS = { battleship.state.Shot._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -31648;

	public static final short[] _TYPE_IDS_16BIT = { battleship.state.Shot._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "hGA";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.state.Shot._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.state.Shot._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.state.Shot";

	public static final String[] _TYPE_NAMES = { battleship.state.Shot._TYPE_NAME };

	public static final Field _pos_METADATA = new Field("battleship.state.Shot", "pos", new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Vec2", 6453467209109281982L), null, (short)16756);
	public static final Field _isHit_METADATA = new Field("battleship.state.Shot", "isHit", se.culvertsoft.mgen.api.model.BoolType.INSTANCE, null, (short)17064);

	public static final short _pos_ID = (short)16756;
	public static final short _isHit_ID = (short)17064;

	public static final Field[] _FIELDS = { _pos_METADATA, _isHit_METADATA };

}
