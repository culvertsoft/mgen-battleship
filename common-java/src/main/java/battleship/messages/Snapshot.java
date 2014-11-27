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
import se.culvertsoft.mgen.javapack.util.DeepCopyer;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/* custom_imports_begin *//* custom_imports_end */

public class Snapshot extends GameInfo /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private battleship.state.Game m_state;

	public Snapshot() {
		super();
		m_state = null;
	}

	public Snapshot(final battleship.state.Game state) {
		m_state = state;
	}

	public battleship.state.Game getState() {
		return m_state;
	}

	public boolean hasState() {
		return _isStateSet(FieldSetDepth.SHALLOW);
	}

	public Snapshot unsetState() {
		_setStateSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Snapshot setState(final battleship.state.Game state) {
		m_state = state;
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
		int result = -331990068;
		result = _isStateSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getState(), _state_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Snapshot.class != other.getClass()) return false;
		final Snapshot o = (Snapshot)other;
		return true
		  && hasState() == o.hasState()
		  && EqualityTester.areEqual(getState(), o.getState(), _state_METADATA.typ());
	}

	@Override
	public Snapshot deepCopy() {
		final Snapshot out = new Snapshot(
			DeepCopyer.deepCopy(getState(), _state_METADATA.typ()));
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
				visitor.visit(getState(), _state_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isStateSet(FieldSetDepth.SHALLOW))
					visitor.visit(getState(), _state_METADATA);
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
			case (_state_ID):
				setState((battleship.state.Game)reader.readMgenObjectField(_state_METADATA, context));
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

	public boolean _isStateSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_state != null;
		} else {
			return m_state != null && Validator.validateFieldDeep(getState(), _state_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_state_ID):
				return _isStateSet(depth);
			default:
				return false;
		}
	}

	public Snapshot _setStateSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_state = m_state != null ? m_state : new battleship.state.Game();
		else
			m_state = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getState(), _state_METADATA.typ());
		return this;
	}

	public Snapshot _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setStateSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isStateSet(FieldSetDepth.SHALLOW) || _isStateSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isStateSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_state_ID):
				return _state_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("state"):
				return _state_METADATA;
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
		  

	public static final long _TYPE_ID = 7637425245762246339L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.GameInfo._TYPE_ID, battleship.messages.Snapshot._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -10286;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.GameInfo._TYPE_ID_16BIT, battleship.messages.Snapshot._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "19I";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64, battleship.messages.Snapshot._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64 + battleship.messages.Snapshot._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.Snapshot";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.GameInfo._TYPE_NAME, battleship.messages.Snapshot._TYPE_NAME };

	public static final Field _state_METADATA = new Field("battleship.messages.Snapshot", "state", new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Game", 1644051945579161717L), null, (short)15897);

	public static final short _state_ID = (short)15897;

	public static final Field[] _FIELDS = { _state_METADATA };

}
