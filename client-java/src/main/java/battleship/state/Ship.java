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

public class Ship extends se.culvertsoft.mgen.javapack.classes.MGenBase /*custom_ifcs_begin*//*custom_ifcs_end*/ {

	private Segment m_points;
	private Team m_team;

	public Ship() {
		super();
		m_points = null;
		m_team = null;
	}

	public Ship(final Segment points,
				final Team team) {
		m_points = points;
		m_team = team;
	}

	public Segment getPoints() {
		return m_points;
	}

	public Team getTeam() {
		return m_team;
	}

	public boolean hasPoints() {
		return _isPointsSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public Ship unsetPoints() {
		_setPointsSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Ship unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Ship setPoints(final Segment points) {
		m_points = points;
		return this;
	}

	public Ship setTeam(final Team team) {
		m_team = team;
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
		int result = -498342701;
		result = _isPointsSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPoints(), _points_METADATA.typ())) : result;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Ship.class != other.getClass()) return false;
		final Ship o = (Ship)other;
		return true
		  && (_isPointsSet(FieldSetDepth.SHALLOW) == o._isPointsSet(FieldSetDepth.SHALLOW))
		  && (_isTeamSet(FieldSetDepth.SHALLOW) == o._isTeamSet(FieldSetDepth.SHALLOW))
		  && EqualityTester.areEqual(getPoints(), o.getPoints(), _points_METADATA.typ())
		  && EqualityTester.areEqual(getTeam(), o.getTeam(), _team_METADATA.typ());
	}

	@Override
	public Ship deepCopy() {
		final Ship out = new Ship();
		out.setPoints(DeepCopyer.deepCopy(getPoints(), _points_METADATA.typ()));
		out.setTeam(DeepCopyer.deepCopy(getTeam(), _team_METADATA.typ()));
		out._setPointsSet(_isPointsSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
		out._setTeamSet(_isTeamSet(FieldSetDepth.SHALLOW), FieldSetDepth.SHALLOW);
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
				visitor.visit(getPoints(), _points_METADATA);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPointsSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPoints(), _points_METADATA);
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
			case (_points_ID):
				setPoints((Segment)reader.readMgenObjectField(_points_METADATA, context));
				return true;
			case (_team_ID):
				setTeam((Team)reader.readEnumField(_team_METADATA, context));
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

	public boolean _isPointsSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_points != null;
		} else {
			return m_points != null && Validator.validateFieldDeep(getPoints(), _points_METADATA.typ());
		}
	}

	public boolean _isTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_team != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_points_ID):
				return _isPointsSet(depth);
			case (_team_ID):
				return _isTeamSet(depth);
			default:
				return false;
		}
	}

	public Ship _setPointsSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_points = m_points != null ? m_points : new Segment();
		else
			m_points = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPoints(), _points_METADATA.typ());
		return this;
	}

	public Ship _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public Ship _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPointsSet(state, depth);
		_setTeamSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPointsSet(FieldSetDepth.SHALLOW) || _isPointsSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isPointsSet(depth) ? 1 : 0;
		out += _isTeamSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_points_ID):
				return _points_METADATA;
			case (_team_ID):
				return _team_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("points"):
				return _points_METADATA;
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
		  

	public static final long _TYPE_ID = 5434834621073515272L;

	public static final long[] _TYPE_IDS = { battleship.state.Ship._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 28226;

	public static final short[] _TYPE_IDS_16BIT = { battleship.state.Ship._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "bkI";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.state.Ship._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.state.Ship._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.state.Ship";

	public static final String[] _TYPE_NAMES = { battleship.state.Ship._TYPE_NAME };

	public static final Field _points_METADATA = new Field("battleship.state.Ship", "points", new se.culvertsoft.mgen.api.model.RuntimeClassType("battleship.state.Segment", 3947935130376690974L), null, (short)-26865);
	public static final Field _team_METADATA = new Field("battleship.state.Ship", "team", battleship.state.Team._TYPE, null, (short)-1585);

	public static final short _points_ID = (short)-26865;
	public static final short _team_ID = (short)-1585;

	public static final Field[] _FIELDS = { _points_METADATA, _team_METADATA };

}