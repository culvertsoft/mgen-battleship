/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/TeamSelect.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

TeamSelect::TeamSelect() : 
		m_team(battleship::state::Team_UNKNOWN),
		_m_team_isSet(false) {
}

TeamSelect::TeamSelect(const battleship::state::Team& team) : 
		m_team(team),
		_m_team_isSet(true) {
}

TeamSelect::~TeamSelect() {
}

const battleship::state::Team& TeamSelect::getTeam() const {
	return m_team;
}

battleship::state::Team& TeamSelect::getTeamMutable() {
	_m_team_isSet = true;
	return m_team;
}

TeamSelect& TeamSelect::setTeam(const battleship::state::Team& team) {
	m_team = team;
	_m_team_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool TeamSelect::hasTeam() const {
	return _isTeamSet(mgen::SHALLOW);
}

TeamSelect& TeamSelect::unsetTeam() {
	_setTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool TeamSelect::operator==(const TeamSelect& other) const {
	return true
		 && _isTeamSet(mgen::SHALLOW) == other._isTeamSet(mgen::SHALLOW)
		 && getTeam() == other.getTeam();
}

bool TeamSelect::operator!=(const TeamSelect& other) const {
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
		  
const mgen::Field * TeamSelect::_fieldById(const short id) const {
	switch (id) {
	case _field_team_id:
		return &_field_team_metadata();
	default:
		return 0;
	}
}

const mgen::Field * TeamSelect::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("team", &TeamSelect::_field_team_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long TeamSelect::_typeId() const {
	return _type_id;
}

const std::string& TeamSelect::_typeName() const {
	return _type_name();
}

const short TeamSelect::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& TeamSelect::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& TeamSelect::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& TeamSelect::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& TeamSelect::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& TeamSelect::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& TeamSelect::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& TeamSelect::_fieldMetadatas() const {
	return _field_metadatas();
}

TeamSelect& TeamSelect::_setTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_team = battleship::state::Team_UNKNOWN;
	_m_team_isSet = state;
	return *this;
}

TeamSelect& TeamSelect::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setTeamSet(state, depth);
	return *this;
}

int TeamSelect::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isTeamSet(depth) ? 1 : 0;
	return out;
}

bool TeamSelect::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_team_id):
			return _isTeamSet(depth);
		default:
			return false;
	}
}

bool TeamSelect::_isTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_team_isSet;
}

bool TeamSelect::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool TeamSelect::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const TeamSelect&>(other) == *this;
}

TeamSelect * TeamSelect::_deepCopy() const {
	return new TeamSelect(*this);
}

mgen::MGenBase * TeamSelect::_newInstance() {
	return new TeamSelect;
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
		  
const std::string& TeamSelect::_type_name() {
	static const std::string out("battleship.messages.TeamSelect");
	return out;
}

const std::vector<long long>& TeamSelect::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 7755333223434470491LL << 7168550251128746873LL;
	return out;
}

const std::vector<short>& TeamSelect::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 11623 << 14632;
	return out;
}

const std::vector<std::string>& TeamSelect::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.Connection" << "battleship.messages.TeamSelect";
	return out;
}

const std::vector<std::string>& TeamSelect::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "LWc" << "OSg";
	return out;
}

const std::string& TeamSelect::_type_ids_16bit_base64_string() {
	static const std::string out("bsYLWcOSg");
	return out;
}

const std::string& TeamSelect::_type_id_16bit_base64() {
	static const std::string out("OSg");
	return out;
}

const std::vector<mgen::Field>& TeamSelect::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_team_metadata();
	return out;
}

const mgen::Field& TeamSelect::_field_team_metadata() {
	static const mgen::Field out(-1585, "team");
	return out;
}

} // End namespace messages
} // End namespace battleship

