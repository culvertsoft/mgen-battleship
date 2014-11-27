/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-12 20:36:02 +0100)               *****
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
/* custom_imports_begin *//* custom_imports_end */

public class PhaseChange extends GameInfo /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private battleship.state.Phase m_phase;

	public PhaseChange() {
		super();
		m_phase = null;
	}

	public PhaseChange(final battleship.state.Phase phase) {
		m_phase = phase;
	}

	public battleship.state.Phase getPhase() {
		return m_phase;
	}

	public boolean hasPhase() {
		return _isPhaseSet(FieldSetDepth.SHALLOW);
	}

	public PhaseChange unsetPhase() {
		_setPhaseSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public PhaseChange setPhase(final battleship.state.Phase phase) {
		m_phase = phase;
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
		int result = -699318781;
		result = _isPhaseSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPhase(), _phase_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (PhaseChange.class != other.getClass()) return false;
		final PhaseChange o = (PhaseChange)other;
		return true
		  && hasPhase() == o.hasPhase()
		  && getPhase() == o.getPhase();
	}

	@Override
	public PhaseChange deepCopy() {
		final PhaseChange out = new PhaseChange(
			getPhase());
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
				visitor.visit(getPhase(), _phase_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPhaseSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPhase(), _phase_METADATA);
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
			case (_phase_ID):
				setPhase((battleship.state.Phase)reader.readEnumField(_phase_METADATA, context));
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

	public boolean _isPhaseSet(final FieldSetDepth fieldSetDepth) {
		return m_phase != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_phase_ID):
				return _isPhaseSet(depth);
			default:
				return false;
		}
	}

	public PhaseChange _setPhaseSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_phase = m_phase != null ? m_phase : battleship.state.Phase.UNKNOWN;
		else
			m_phase = null;
		return this;
	}

	public PhaseChange _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPhaseSet(state, depth);
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
		out += _isPhaseSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_phase_ID):
				return _phase_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("phase"):
				return _phase_METADATA;
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
		  

	public static final long _TYPE_ID = 6310518169450536016L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.GameInfo._TYPE_ID, battleship.messages.PhaseChange._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -8601;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.GameInfo._TYPE_ID_16BIT, battleship.messages.PhaseChange._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "3mc";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64, battleship.messages.PhaseChange._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64 + battleship.messages.PhaseChange._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.PhaseChange";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.GameInfo._TYPE_NAME, battleship.messages.PhaseChange._TYPE_NAME };

	public static final Field _phase_METADATA = new Field("battleship.messages.PhaseChange", "phase", battleship.state.Phase._TYPE, null, (short)7625);

	public static final short _phase_ID = (short)7625;

	public static final Field[] _FIELDS = { _phase_METADATA };

}
