/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/PlayerChangedTeam.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

PlayerChangedTeam::PlayerChangedTeam() : 
		_m_playerId_isSet(false) {
}

PlayerChangedTeam::PlayerChangedTeam(const std::string& playerId) : 
		m_playerId(playerId),
		_m_playerId_isSet(true) {
}

PlayerChangedTeam::~PlayerChangedTeam() {
}

const std::string& PlayerChangedTeam::getPlayerId() const {
	return m_playerId;
}

std::string& PlayerChangedTeam::getPlayerIdMutable() {
	_m_playerId_isSet = true;
	return m_playerId;
}

PlayerChangedTeam& PlayerChangedTeam::setPlayerId(const std::string& playerId) {
	m_playerId = playerId;
	_m_playerId_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool PlayerChangedTeam::hasPlayerId() const {
	return _isPlayerIdSet(mgen::SHALLOW);
}

PlayerChangedTeam& PlayerChangedTeam::unsetPlayerId() {
	_setPlayerIdSet(false, mgen::SHALLOW);
	return *this;
}

bool PlayerChangedTeam::operator==(const PlayerChangedTeam& other) const {
	return true
		 && _isPlayerIdSet(mgen::SHALLOW) == other._isPlayerIdSet(mgen::SHALLOW)
		 && getPlayerId() == other.getPlayerId();
}

bool PlayerChangedTeam::operator!=(const PlayerChangedTeam& other) const {
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
		  
const mgen::Field * PlayerChangedTeam::_fieldById(const short id) const {
	switch (id) {
	case _field_playerId_id:
		return &_field_playerId_metadata();
	default:
		return 0;
	}
}

const mgen::Field * PlayerChangedTeam::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("playerId", &PlayerChangedTeam::_field_playerId_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long PlayerChangedTeam::_typeId() const {
	return _type_id;
}

const std::string& PlayerChangedTeam::_typeName() const {
	return _type_name();
}

const short PlayerChangedTeam::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& PlayerChangedTeam::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& PlayerChangedTeam::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& PlayerChangedTeam::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& PlayerChangedTeam::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& PlayerChangedTeam::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& PlayerChangedTeam::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& PlayerChangedTeam::_fieldMetadatas() const {
	return _field_metadatas();
}

PlayerChangedTeam& PlayerChangedTeam::_setPlayerIdSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_playerId = "";
	_m_playerId_isSet = state;
	return *this;
}

PlayerChangedTeam& PlayerChangedTeam::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPlayerIdSet(state, depth);
	return *this;
}

int PlayerChangedTeam::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPlayerIdSet(depth) ? 1 : 0;
	return out;
}

bool PlayerChangedTeam::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_playerId_id):
			return _isPlayerIdSet(depth);
		default:
			return false;
	}
}

bool PlayerChangedTeam::_isPlayerIdSet(const mgen::FieldSetDepth depth) const {
	return _m_playerId_isSet;
}

bool PlayerChangedTeam::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool PlayerChangedTeam::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const PlayerChangedTeam&>(other) == *this;
}

PlayerChangedTeam * PlayerChangedTeam::_deepCopy() const {
	return new PlayerChangedTeam(*this);
}

mgen::MGenBase * PlayerChangedTeam::_newInstance() {
	return new PlayerChangedTeam;
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
		  
const std::string& PlayerChangedTeam::_type_name() {
	static const std::string out("battleship.messages.PlayerChangedTeam");
	return out;
}

const std::vector<long long>& PlayerChangedTeam::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 7755333223434470491LL << 5387522507844424702LL;
	return out;
}

const std::vector<short>& PlayerChangedTeam::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 11623 << -20515;
	return out;
}

const std::vector<std::string>& PlayerChangedTeam::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.Connection" << "battleship.messages.PlayerChangedTeam";
	return out;
}

const std::vector<std::string>& PlayerChangedTeam::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "LWc" << "r90";
	return out;
}

const std::string& PlayerChangedTeam::_type_ids_16bit_base64_string() {
	static const std::string out("bsYLWcr90");
	return out;
}

const std::string& PlayerChangedTeam::_type_id_16bit_base64() {
	static const std::string out("r90");
	return out;
}

const std::vector<mgen::Field>& PlayerChangedTeam::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_playerId_metadata();
	return out;
}

const mgen::Field& PlayerChangedTeam::_field_playerId_metadata() {
	static const mgen::Field out(1928, "playerId");
	return out;
}

} // End namespace messages
} // End namespace battleship

