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
import se.culvertsoft.mgen.javapack.util.DeepCopyer;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/* custom_imports_begin *//* custom_imports_end */

public class ShipSunk extends GameInfo /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private battleship.state.Ship m_ship;
	private battleship.state.Team m_team;

	public ShipSunk() {
		super();
		m_ship = null;
		m_team = null;
	}

	public ShipSunk(final battleship.state.Ship ship,
				final battleship.state.Team team) {
		m_ship = ship;
		m_team = team;
	}

	public battleship.state.Ship getShip() {
		return m_ship;
	}

	public battleship.state.Team getTeam() {
		return m_team;
	}

	public boolean hasShip() {
		return _isShipSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public ShipSunk unsetShip() {
		_setShipSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public ShipSunk unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public ShipSunk setShip(final battleship.state.Ship ship) {
		m_ship = ship;
		return this;
	}

	public ShipSunk setTeam(final battleship.state.Team team) {
		m_team = team;
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
		int result = -1133952509;
		result = _isShipSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getShip(), _ship_METADATA.typ())) : result;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (ShipSunk.class != other.getClass()) return false;
		final ShipSunk o = (ShipSunk)other;
		return true
		  && hasShip() == o.hasShip()
		  && hasTeam() == o.hasTeam()
		  && EqualityTester.areEqual(getShip(), o.getShip(), _ship_METADATA.typ())
		  && getTeam() == o.getTeam();
	}

	@Override
	public ShipSunk deepCopy() {
		final ShipSunk out = new ShipSunk(
			DeepCopyer.deepCopy(getShip(), _ship_METADATA.typ()),
			getTeam());
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
				visitor.visit(getShip(), _ship_METADATA);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isShipSet(FieldSetDepth.SHALLOW))
					visitor.visit(getShip(), _ship_METADATA);
				if (_isTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getTeam(), _team_METADATA);
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
			case (_ship_ID):
				setShip((battleship.state.Ship)reader.readMgenObjectField(_ship_METADATA, context));
				return true;
			case (_team_ID):
				setTeam((battleship.state.Team)reader.readEnumField(_team_METADATA, context));
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

	public boolean _isShipSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_ship != null;
		} else {
			return m_ship != null && Validator.validateFieldDeep(getShip(), _ship_METADATA.typ());
		}
	}

	public boolean _isTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_team != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_ship_ID):
				return _isShipSet(depth);
			case (_team_ID):
				return _isTeamSet(depth);
			default:
				return false;
		}
	}

	public ShipSunk _setShipSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_ship = m_ship != null ? m_ship : new battleship.state.Ship();
		else
			m_ship = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getShip(), _ship_METADATA.typ());
		return this;
	}

	public ShipSunk _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : battleship.state.Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public ShipSunk _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setShipSet(state, depth);
		_setTeamSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isShipSet(FieldSetDepth.SHALLOW) || _isShipSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isShipSet(depth) ? 1 : 0;
		out += _isTeamSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_ship_ID):
				return _ship_METADATA;
			case (_team_ID):
				return _team_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("ship"):
				return _ship_METADATA;
			case ("team"):
				return _team_METADATA;
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
		  

	public static final long _TYPE_ID = 2431416064824807951L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.GameInfo._TYPE_ID, battleship.messages.ShipSunk._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -25306;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.GameInfo._TYPE_ID_16BIT, battleship.messages.ShipSunk._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "nSY";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64, battleship.messages.ShipSunk._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64 + battleship.messages.ShipSunk._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.ShipSunk";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.GameInfo._TYPE_NAME, battleship.messages.ShipSunk._TYPE_NAME };

	public static final Field _ship_METADATA = new Field("battleship.messages.ShipSunk", "ship", new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Ship", 5434834621073515272L), null, (short)-24442);
	public static final Field _team_METADATA = new Field("battleship.messages.ShipSunk", "team", battleship.state.Team._TYPE, null, (short)-1585);

	public static final short _ship_ID = (short)-24442;
	public static final short _team_ID = (short)-1585;

	public static final Field[] _FIELDS = { _ship_METADATA, _team_METADATA };

}
