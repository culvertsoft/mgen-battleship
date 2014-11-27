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

public class ShipPlacement extends GameInput /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private java.util.ArrayList<battleship.state.Ship> m_ships;

	public ShipPlacement() {
		super();
		m_ships = null;
	}

	public ShipPlacement(final java.util.ArrayList<battleship.state.Ship> ships) {
		m_ships = ships;
	}

	public java.util.ArrayList<battleship.state.Ship> getShips() {
		return m_ships;
	}

	public boolean hasShips() {
		return _isShipsSet(FieldSetDepth.SHALLOW);
	}

	public ShipPlacement unsetShips() {
		_setShipsSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public ShipPlacement setShips(final java.util.ArrayList<battleship.state.Ship> ships) {
		m_ships = ships;
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
		int result = 652294913;
		result = _isShipsSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getShips(), _ships_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (ShipPlacement.class != other.getClass()) return false;
		final ShipPlacement o = (ShipPlacement)other;
		return true
		  && hasShips() == o.hasShips()
		  && EqualityTester.areEqual(getShips(), o.getShips(), _ships_METADATA.typ());
	}

	@Override
	public ShipPlacement deepCopy() {
		final ShipPlacement out = new ShipPlacement(
			DeepCopyer.deepCopy(getShips(), _ships_METADATA.typ()));
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
				visitor.visit(getShips(), _ships_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isShipsSet(FieldSetDepth.SHALLOW))
					visitor.visit(getShips(), _ships_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@SuppressWarnings("unchecked")
	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_ships_ID):
				setShips((java.util.ArrayList<battleship.state.Ship>)reader.readListField(_ships_METADATA, context));
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

	public boolean _isShipsSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_ships != null;
		} else {
			return m_ships != null && Validator.validateFieldDeep(getShips(), _ships_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_ships_ID):
				return _isShipsSet(depth);
			default:
				return false;
		}
	}

	public ShipPlacement _setShipsSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_ships = m_ships != null ? m_ships : new java.util.ArrayList<battleship.state.Ship>();
		else
			m_ships = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getShips(), _ships_METADATA.typ());
		return this;
	}

	public ShipPlacement _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setShipsSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isShipsSet(FieldSetDepth.SHALLOW) || _isShipsSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isShipsSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_ships_ID):
				return _ships_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("ships"):
				return _ships_METADATA;
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
		  

	public static final long _TYPE_ID = 8410045829630410805L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.GameInput._TYPE_ID, battleship.messages.ShipPlacement._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -6905;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.GameInput._TYPE_ID_16BIT, battleship.messages.ShipPlacement._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "5Qc";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.GameInput._TYPE_ID_16BIT_BASE64, battleship.messages.ShipPlacement._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.GameInput._TYPE_ID_16BIT_BASE64 + battleship.messages.ShipPlacement._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.ShipPlacement";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.GameInput._TYPE_NAME, battleship.messages.ShipPlacement._TYPE_NAME };

	public static final Field _ships_METADATA = new Field("battleship.messages.ShipPlacement", "ships", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Ship", 5434834621073515272L)), null, (short)32030);

	public static final short _ships_ID = (short)32030;

	public static final Field[] _FIELDS = { _ships_METADATA };

}
