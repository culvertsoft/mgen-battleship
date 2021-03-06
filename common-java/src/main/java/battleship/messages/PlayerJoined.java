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
import se.culvertsoft.mgen.javapack.util.EqualityTester;
/* custom_imports_begin *//* custom_imports_end */

public class PlayerJoined extends Connection /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_playerId;

	public PlayerJoined() {
		super();
		m_playerId = null;
	}

	public PlayerJoined(final String playerId) {
		m_playerId = playerId;
	}

	public String getPlayerId() {
		return m_playerId;
	}

	public boolean hasPlayerId() {
		return _isPlayerIdSet(FieldSetDepth.SHALLOW);
	}

	public PlayerJoined unsetPlayerId() {
		_setPlayerIdSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public PlayerJoined setPlayerId(final String playerId) {
		m_playerId = playerId;
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
		int result = 1155171218;
		result = _isPlayerIdSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPlayerId(), _playerId_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (PlayerJoined.class != other.getClass()) return false;
		final PlayerJoined o = (PlayerJoined)other;
		return true
		  && hasPlayerId() == o.hasPlayerId()
		  && EqualityTester.areEqual(getPlayerId(), o.getPlayerId(), _playerId_METADATA.typ());
	}

	@Override
	public PlayerJoined deepCopy() {
		final PlayerJoined out = new PlayerJoined(
			getPlayerId());
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
				visitor.visit(getPlayerId(), _playerId_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPlayerIdSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPlayerId(), _playerId_METADATA);
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
			case (_playerId_ID):
				setPlayerId((String)reader.readStringField(_playerId_METADATA, context));
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

	public boolean _isPlayerIdSet(final FieldSetDepth fieldSetDepth) {
		return m_playerId != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_playerId_ID):
				return _isPlayerIdSet(depth);
			default:
				return false;
		}
	}

	public PlayerJoined _setPlayerIdSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_playerId = m_playerId != null ? m_playerId : "";
		else
			m_playerId = null;
		return this;
	}

	public PlayerJoined _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPlayerIdSet(state, depth);
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
		out += _isPlayerIdSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_playerId_ID):
				return _playerId_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("playerId"):
				return _playerId_METADATA;
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
		  

	public static final long _TYPE_ID = 8725683847432761486L;

	public static final long[] _TYPE_IDS = { battleship.messages.Message._TYPE_ID, battleship.messages.Connection._TYPE_ID, battleship.messages.PlayerJoined._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -32514;

	public static final short[] _TYPE_IDS_16BIT = { battleship.messages.Message._TYPE_ID_16BIT, battleship.messages.Connection._TYPE_ID_16BIT, battleship.messages.PlayerJoined._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "gP4";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { battleship.messages.Message._TYPE_ID_16BIT_BASE64, battleship.messages.Connection._TYPE_ID_16BIT_BASE64, battleship.messages.PlayerJoined._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = battleship.messages.Message._TYPE_ID_16BIT_BASE64 + battleship.messages.Connection._TYPE_ID_16BIT_BASE64 + battleship.messages.PlayerJoined._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "battleship.messages.PlayerJoined";

	public static final String[] _TYPE_NAMES = { battleship.messages.Message._TYPE_NAME, battleship.messages.Connection._TYPE_NAME, battleship.messages.PlayerJoined._TYPE_NAME };

	public static final Field _playerId_METADATA = new Field("battleship.messages.PlayerJoined", "playerId", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)6798);

	public static final short _playerId_ID = (short)6798;

	public static final Field[] _FIELDS = { _playerId_METADATA };

}
