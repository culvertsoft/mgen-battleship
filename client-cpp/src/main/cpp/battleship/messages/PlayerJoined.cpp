/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/PlayerJoined.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

PlayerJoined::PlayerJoined() : 
		_m_playerId_isSet(false) {
}

PlayerJoined::PlayerJoined(const std::string& playerId) : 
		m_playerId(playerId),
		_m_playerId_isSet(true) {
}

PlayerJoined::~PlayerJoined() {
}

const std::string& PlayerJoined::getPlayerId() const {
	return m_playerId;
}

std::string& PlayerJoined::getPlayerIdMutable() {
	_m_playerId_isSet = true;
	return m_playerId;
}

PlayerJoined& PlayerJoined::setPlayerId(const std::string& playerId) {
	m_playerId = playerId;
	_m_playerId_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool PlayerJoined::hasPlayerId() const {
	return _isPlayerIdSet(mgen::SHALLOW);
}

PlayerJoined& PlayerJoined::unsetPlayerId() {
	_setPlayerIdSet(false, mgen::SHALLOW);
	return *this;
}

bool PlayerJoined::operator==(const PlayerJoined& other) const {
	return true
		 && _isPlayerIdSet(mgen::SHALLOW) == other._isPlayerIdSet(mgen::SHALLOW)
		 && getPlayerId() == other.getPlayerId();
}

bool PlayerJoined::operator!=(const PlayerJoined& other) const {
	return !(*this == other);
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
		  
const mgen::Field * PlayerJoined::_fieldById(const short id) const {
	switch (id) {
	case _field_playerId_id:
		return &_field_playerId_metadata();
	default:
		return 0;
	}
}

const mgen::Field * PlayerJoined::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("playerId", &PlayerJoined::_field_playerId_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long PlayerJoined::_typeId() const {
	return _type_id;
}

const std::string& PlayerJoined::_typeName() const {
	return _type_name();
}

const short PlayerJoined::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& PlayerJoined::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& PlayerJoined::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& PlayerJoined::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& PlayerJoined::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& PlayerJoined::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& PlayerJoined::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& PlayerJoined::_fieldMetadatas() const {
	return _field_metadatas();
}

PlayerJoined& PlayerJoined::_setPlayerIdSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_playerId = "";
	_m_playerId_isSet = state;
	return *this;
}

PlayerJoined& PlayerJoined::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPlayerIdSet(state, depth);
	return *this;
}

int PlayerJoined::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPlayerIdSet(depth) ? 1 : 0;
	return out;
}

bool PlayerJoined::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_playerId_id):
			return _isPlayerIdSet(depth);
		default:
			return false;
	}
}

bool PlayerJoined::_isPlayerIdSet(const mgen::FieldSetDepth depth) const {
	return _m_playerId_isSet;
}

bool PlayerJoined::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool PlayerJoined::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const PlayerJoined&>(other) == *this;
}

PlayerJoined * PlayerJoined::_deepCopy() const {
	return new PlayerJoined(*this);
}

mgen::MGenBase * PlayerJoined::_newInstance() {
	return new PlayerJoined;
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
		  
const std::string& PlayerJoined::_type_name() {
	static const std::string out("battleship.messages.PlayerJoined");
	return out;
}

const std::vector<long long>& PlayerJoined::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 7755333223434470491LL << 8725683847432761486LL;
	return out;
}

const std::vector<short>& PlayerJoined::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 11623 << -32514;
	return out;
}

const std::vector<std::string>& PlayerJoined::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.Connection" << "battleship.messages.PlayerJoined";
	return out;
}

const std::vector<std::string>& PlayerJoined::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "LWc" << "gP4";
	return out;
}

const std::string& PlayerJoined::_type_ids_16bit_base64_string() {
	static const std::string out("bsYLWcgP4");
	return out;
}

const std::string& PlayerJoined::_type_id_16bit_base64() {
	static const std::string out("gP4");
	return out;
}

const std::vector<mgen::Field>& PlayerJoined::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_playerId_metadata();
	return out;
}

const mgen::Field& PlayerJoined::_field_playerId_metadata() {
	static const mgen::Field out(6798, "playerId");
	return out;
}

} // End namespace messages
} // End namespace battleship

