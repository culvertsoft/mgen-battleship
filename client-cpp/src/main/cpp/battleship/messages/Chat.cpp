/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/Chat.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

Chat::Chat() : 
		m_team(battleship::state::Team_UNKNOWN),
		_m_text_isSet(false),
		_m_team_isSet(false),
		_m_from_isSet(false) {
}

Chat::Chat(const std::string& text, 
			const battleship::state::Team& team, 
			const std::string& from) : 
		m_text(text),
		m_team(team),
		m_from(from),
		_m_text_isSet(true),
		_m_team_isSet(true),
		_m_from_isSet(true) {
}

Chat::~Chat() {
}

const std::string& Chat::getText() const {
	return m_text;
}

const battleship::state::Team& Chat::getTeam() const {
	return m_team;
}

const std::string& Chat::getFrom() const {
	return m_from;
}

std::string& Chat::getTextMutable() {
	_m_text_isSet = true;
	return m_text;
}

battleship::state::Team& Chat::getTeamMutable() {
	_m_team_isSet = true;
	return m_team;
}

std::string& Chat::getFromMutable() {
	_m_from_isSet = true;
	return m_from;
}

Chat& Chat::setText(const std::string& text) {
	m_text = text;
	_m_text_isSet = true;
	return *this;
}

Chat& Chat::setTeam(const battleship::state::Team& team) {
	m_team = team;
	_m_team_isSet = true;
	return *this;
}

Chat& Chat::setFrom(const std::string& from) {
	m_from = from;
	_m_from_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Chat::hasText() const {
	return _isTextSet(mgen::SHALLOW);
}

bool Chat::hasTeam() const {
	return _isTeamSet(mgen::SHALLOW);
}

bool Chat::hasFrom() const {
	return _isFromSet(mgen::SHALLOW);
}

Chat& Chat::unsetText() {
	_setTextSet(false, mgen::SHALLOW);
	return *this;
}

Chat& Chat::unsetTeam() {
	_setTeamSet(false, mgen::SHALLOW);
	return *this;
}

Chat& Chat::unsetFrom() {
	_setFromSet(false, mgen::SHALLOW);
	return *this;
}

bool Chat::operator==(const Chat& other) const {
	return true
		 && _isTextSet(mgen::SHALLOW) == other._isTextSet(mgen::SHALLOW)
		 && _isTeamSet(mgen::SHALLOW) == other._isTeamSet(mgen::SHALLOW)
		 && _isFromSet(mgen::SHALLOW) == other._isFromSet(mgen::SHALLOW)
		 && getText() == other.getText()
		 && getTeam() == other.getTeam()
		 && getFrom() == other.getFrom();
}

bool Chat::operator!=(const Chat& other) const {
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
		  
const mgen::Field * Chat::_fieldById(const short id) const {
	switch (id) {
	case _field_text_id:
		return &_field_text_metadata();
	case _field_team_id:
		return &_field_team_metadata();
	case _field_from_id:
		return &_field_from_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Chat::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("text", &Chat::_field_text_metadata())("team", &Chat::_field_team_metadata())("from", &Chat::_field_from_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Chat::_typeId() const {
	return _type_id;
}

const std::string& Chat::_typeName() const {
	return _type_name();
}

const short Chat::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Chat::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Chat::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Chat::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Chat::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Chat::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Chat::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Chat::_fieldMetadatas() const {
	return _field_metadatas();
}

Chat& Chat::_setTextSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_text = "";
	_m_text_isSet = state;
	return *this;
}

Chat& Chat::_setTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_team = battleship::state::Team_UNKNOWN;
	_m_team_isSet = state;
	return *this;
}

Chat& Chat::_setFromSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_from = "";
	_m_from_isSet = state;
	return *this;
}

Chat& Chat::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setTextSet(state, depth);
	_setTeamSet(state, depth);
	_setFromSet(state, depth);
	return *this;
}

int Chat::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isTextSet(depth) ? 1 : 0;
	out += _isTeamSet(depth) ? 1 : 0;
	out += _isFromSet(depth) ? 1 : 0;
	return out;
}

bool Chat::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_text_id):
			return _isTextSet(depth);
		case (_field_team_id):
			return _isTeamSet(depth);
		case (_field_from_id):
			return _isFromSet(depth);
		default:
			return false;
	}
}

bool Chat::_isTextSet(const mgen::FieldSetDepth depth) const {
	return _m_text_isSet;
}

bool Chat::_isTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_team_isSet;
}

bool Chat::_isFromSet(const mgen::FieldSetDepth depth) const {
	return _m_from_isSet;
}

bool Chat::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool Chat::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Chat&>(other) == *this;
}

Chat * Chat::_deepCopy() const {
	return new Chat(*this);
}

mgen::MGenBase * Chat::_newInstance() {
	return new Chat;
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
		  
const std::string& Chat::_type_name() {
	static const std::string out("battleship.messages.Chat");
	return out;
}

const std::vector<long long>& Chat::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 7755333223434470491LL << 5570298698115942109LL;
	return out;
}

const std::vector<short>& Chat::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 11623 << 17379;
	return out;
}

const std::vector<std::string>& Chat::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.Connection" << "battleship.messages.Chat";
	return out;
}

const std::vector<std::string>& Chat::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "LWc" << "Q+M";
	return out;
}

const std::string& Chat::_type_ids_16bit_base64_string() {
	static const std::string out("bsYLWcQ+M");
	return out;
}

const std::string& Chat::_type_id_16bit_base64() {
	static const std::string out("Q+M");
	return out;
}

const std::vector<mgen::Field>& Chat::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_text_metadata() << _field_team_metadata() << _field_from_metadata();
	return out;
}

const mgen::Field& Chat::_field_text_metadata() {
	static const mgen::Field out(-15556, "text");
	return out;
}

const mgen::Field& Chat::_field_team_metadata() {
	static const mgen::Field out(-1585, "team");
	return out;
}

const mgen::Field& Chat::_field_from_metadata() {
	static const mgen::Field out(-5380, "from");
	return out;
}

} // End namespace messages
} // End namespace battleship

