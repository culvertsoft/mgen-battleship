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
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/*custom_imports_begin*//*custom_imports_end*/

public class FireResult extends GameInfo /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private boolean m_hit;
	private battleship.state.Vec2 m_position;
	private battleship.state.Team m_firingTeam;
	private boolean _m_hit_isSet;

	public FireResult() {
		super();
		m_hit = false;
		m_position = null;
		m_firingTeam = null;
		_m_hit_isSet = false;
	}

	public FireResult(final boolean hit,
				final battleship.state.Vec2 position,
				final battleship.state.Team firingTeam) {
		m_hit = hit;
		m_position = position;
		m_firingTeam = firingTeam;
		_m_hit_isSet = true;
	}

	public boolean getHit() {
		return m_hit;
	}

	public battleship.state.Vec2 getPosition() {
		return m_position;
	}

	public battleship.state.Team getFiringTeam() {
		return m_firingTeam;
	}

	public boolean hasHit() {
		return _isHitSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPosition() {
		return _isPositionSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasFiringTeam() {
		return _isFiringTeamSet(FieldSetDepth.SHALLOW);
	}

	public FireResult unsetHit() {
		_setHitSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public FireResult unsetPosition() {
		_setPositionSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public FireResult unsetFiringTeam() {
		_setFiringTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public FireResult setHit(final boolean hit) {
		m_hit = hit;
		_m_hit_isSet = true;
		return this;
	}

	public FireResult setPosition(final battleship.state.Vec2 position) {
		m_position = position;
		return this;
	}

	public FireResult setFiringTeam(final battleship.state.Team firingTeam) {
		m_firingTeam = firingTeam;
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
		int result = -769872389;
		result = _isHitSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getHit(), _hit_METADATA.typ())) : result;
		result = _isPositionSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPosition(), _position_METADATA.typ())) : result;
		result = _isFiringTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getFiringTeam(), _firingTeam_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (FireResult.class != other.getClass()) return false;
		final FireResult o = (FireResult)other;
		return true
		  && (_isHitSet(FieldSetDepth.SHALLOW) == o._isHitSet(FieldSetDepth.SHALLOW))
		  && (_isPositionSet(FieldSetDepth.SHALLOW) == o._isPositionSet(FieldSetDepth.SHALLOW))
		  && (_isFiringTeamSet(FieldSetDepth.SHALLOW) == o._isFiringTeamSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getHit(), o.getHit(), _hit_METADATA.typ())
		  && EqualityTester.areEqual(getPosition(), o.getPosition(), _position_METADATA.typ())
		  && EqualityTester.areEqual(getFiringTeam(), o.getFiringTeam(), _firingTeam_METADATA.typ());
	}

	@Override
	public FireResult deepCopy() {
		final FireResult out = new FireResult();
		out.setHit(DeepCopyer.deepCopy(getHit(), _hit_METADATA.typ()));
		out.setPosition(DeepCopyer.deepCopy(getPosition(), _position_METADATA.typ()));
		out.setFiringTeam(DeepCopyer.deepCopy(getFiringTeam(), _firingTeam_METADATA.typ()));
		out._setHitSet(_isHitSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setPositionSet(_isPositionSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setFiringTeamSet(_isFiringTeamSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.beginVisit(this, 3);
				visitor.visit(getHit(), _hit_METADATA);
				visitor.visit(getPosition(), _position_METADATA);
				visitor.visit(getFiringTeam(), _firingTeam_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isHitSet(FieldSetDepth.SHALLOW))
					visitor.visit(getHit(), _hit_METADATA);
				if (_isPositionSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPosition(), _position_METADATA);
				if (_isFiringTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getFiringTeam(), _firingTeam_METADATA);
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
			case (_hit_ID):
				setHit((boolean)reader.readBooleanField(_hit_METADATA, context));
				return true;
			case (_position_ID):
				setPosition((battleship.state.Vec2)reader.readMgenObjectField(_position_METADATA, context));
				return true;
			case (_firingTeam_ID):
				setFiringTeam((battleship.state.Team)reader.readEnumField(_firingTeam_METADATA, context));
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

	public boolean _isHitSet(final FieldSetDepth fieldSetDepth) {
		return _m_hit_isSet;
	}

	public boolean _isPositionSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_position != null;
		} else {
			return m_position != null && Validator.validateFieldDeep(getPosition(), _position_METADATA.typ());
		}
	}

	public boolean _isFiringTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_firingTeam != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_hit_ID):
				return _isHitSet(depth);
			case (_position_ID):
				return _isPositionSet(depth);
			case (_firingTeam_ID):
				return _isFiringTeamSet(depth);
			default:
				return false;
		}
	}

	public FireResult _setHitSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_hit = false;
		_m_hit_isSet = state;
		return this;
	}

	public FireResult _setPositionSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_position = m_position != null ? m_position : new battleship.state.Vec2();
		else
			m_position = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPosition(), _position_METADATA.typ());
		return this;
	}

	public FireResult _setFiringTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_firingTeam = m_firingTeam != null ? m_firingTeam : battleship.state.Team.UNKNOWN;
		else
			m_firingTeam = null;
		return this;
	}

	public FireResult _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setHitSet(state, depth);
		_setPositionSet(state, depth);
		_setFiringTeamSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPositionSet(FieldSetDepth.SHALLOW) || _isPositionSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isHitSet(depth) ? 1 : 0;
		out += _isPositionSet(depth) ? 1 : 0;
		out += _isFiringTeamSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_hit_ID):
				return _hit_METADATA;
			case (_position_ID):
				return _position_METADATA;
			case (_firingTeam_ID):
				return _firingTeam_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("hit"):
				return _hit_METADATA;
			case ("position"):
				return _position_METADATA;
			case ("firingTeam"):
				return _firingTeam_METADATA;
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
		  

	public static final long _TYPE_ID = 8695181952916377338L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.GameInfo._TYPE_ID, battleship.messages.FireResult._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 31228;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.GameInfo._TYPE_ID_16BIT, battleship.messages.FireResult._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "efw";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64, battleship.messages.FireResult._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.GameInfo._TYPE_ID_16BIT_BASE64 + battleship.messages.FireResult._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.FireResult";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.GameInfo._TYPE_NAME, battleship.messages.FireResult._TYPE_NAME };

	public static final Field _hit_METADATA = new Field("battleship.messages.FireResult", "hit", se.culvertsoft.mgen.api.model.BoolType.INSTANCE, null, (short)29175);
	public static final Field _position_METADATA = new Field("battleship.messages.FireResult", "position", new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Vec2", 6453467209109281982L), null, (short)-26337);
	public static final Field _firingTeam_METADATA = new Field("battleship.messages.FireResult", "firingTeam", battleship.state.Team._TYPE, null, (short)-20506);

	public static final short _hit_ID = (short)29175;
	public static final short _position_ID = (short)-26337;
	public static final short _firingTeam_ID = (short)-20506;

	public static final Field[] _FIELDS = { _hit_METADATA, _position_METADATA, _firingTeam_METADATA };

}
