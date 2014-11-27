/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-12 20:36:02 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/NextTurn.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

NextTurn::NextTurn() : 
		m_team(battleship::state::Team_UNKNOWN),
		m_maxTime(0.0),
		_m_team_isSet(false),
		_m_maxTime_isSet(false) {
}

NextTurn::NextTurn(const battleship::state::Team& team, 
			const double& maxTime) : 
		m_team(team),
		m_maxTime(maxTime),
		_m_team_isSet(true),
		_m_maxTime_isSet(true) {
}

NextTurn::~NextTurn() {
}

const battleship::state::Team& NextTurn::getTeam() const {
	return m_team;
}

const double& NextTurn::getMaxTime() const {
	return m_maxTime;
}

battleship::state::Team& NextTurn::getTeamMutable() {
	_m_team_isSet = true;
	return m_team;
}

double& NextTurn::getMaxTimeMutable() {
	_m_maxTime_isSet = true;
	return m_maxTime;
}

NextTurn& NextTurn::setTeam(const battleship::state::Team& team) {
	m_team = team;
	_m_team_isSet = true;
	return *this;
}

NextTurn& NextTurn::setMaxTime(const double& maxTime) {
	m_maxTime = maxTime;
	_m_maxTime_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool NextTurn::hasTeam() const {
	return _isTeamSet(mgen::SHALLOW);
}

bool NextTurn::hasMaxTime() const {
	return _isMaxTimeSet(mgen::SHALLOW);
}

NextTurn& NextTurn::unsetTeam() {
	_setTeamSet(false, mgen::SHALLOW);
	return *this;
}

NextTurn& NextTurn::unsetMaxTime() {
	_setMaxTimeSet(false, mgen::SHALLOW);
	return *this;
}

bool NextTurn::operator==(const NextTurn& other) const {
	return true
		 && _isTeamSet(mgen::SHALLOW) == other._isTeamSet(mgen::SHALLOW)
		 && _isMaxTimeSet(mgen::SHALLOW) == other._isMaxTimeSet(mgen::SHALLOW)
		 && getTeam() == other.getTeam()
		 && getMaxTime() == other.getMaxTime();
}

bool NextTurn::operator!=(const NextTurn& other) const {
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
		  
const mgen::Field * NextTurn::_fieldById(const short id) const {
	switch (id) {
	case _field_team_id:
		return &_field_team_metadata();
	case _field_maxTime_id:
		return &_field_maxTime_metadata();
	default:
		return 0;
	}
}

const mgen::Field * NextTurn::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("team", &NextTurn::_field_team_metadata())("maxTime", &NextTurn::_field_maxTime_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long NextTurn::_typeId() const {
	return _type_id;
}

const std::string& NextTurn::_typeName() const {
	return _type_name();
}

const short NextTurn::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& NextTurn::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& NextTurn::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& NextTurn::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& NextTurn::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& NextTurn::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& NextTurn::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& NextTurn::_fieldMetadatas() const {
	return _field_metadatas();
}

NextTurn& NextTurn::_setTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_team = battleship::state::Team_UNKNOWN;
	_m_team_isSet = state;
	return *this;
}

NextTurn& NextTurn::_setMaxTimeSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_maxTime = 0.0;
	_m_maxTime_isSet = state;
	return *this;
}

NextTurn& NextTurn::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setTeamSet(state, depth);
	_setMaxTimeSet(state, depth);
	return *this;
}

int NextTurn::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isTeamSet(depth) ? 1 : 0;
	out += _isMaxTimeSet(depth) ? 1 : 0;
	return out;
}

bool NextTurn::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_team_id):
			return _isTeamSet(depth);
		case (_field_maxTime_id):
			return _isMaxTimeSet(depth);
		default:
			return false;
	}
}

bool NextTurn::_isTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_team_isSet;
}

bool NextTurn::_isMaxTimeSet(const mgen::FieldSetDepth depth) const {
	return _m_maxTime_isSet;
}

bool NextTurn::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool NextTurn::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const NextTurn&>(other) == *this;
}

NextTurn * NextTurn::_deepCopy() const {
	return new NextTurn(*this);
}

mgen::MGenBase * NextTurn::_newInstance() {
	return new NextTurn;
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
		  
const std::string& NextTurn::_type_name() {
	static const std::string out("battleship.messages.NextTurn");
	return out;
}

const std::vector<long long>& NextTurn::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL << 4079438618512772748LL;
	return out;
}

const std::vector<short>& NextTurn::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460 << -29368;
	return out;
}

const std::vector<std::string>& NextTurn::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo" << "battleship.messages.NextTurn";
	return out;
}

const std::vector<std::string>& NextTurn::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw" << "jUg";
	return out;
}

const std::string& NextTurn::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCwjUg");
	return out;
}

const std::string& NextTurn::_type_id_16bit_base64() {
	static const std::string out("jUg");
	return out;
}

const std::vector<mgen::Field>& NextTurn::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_team_metadata() << _field_maxTime_metadata();
	return out;
}

const mgen::Field& NextTurn::_field_team_metadata() {
	static const mgen::Field out(-1585, "team");
	return out;
}

const mgen::Field& NextTurn::_field_maxTime_metadata() {
	static const mgen::Field out(22152, "maxTime");
	return out;
}

} // End namespace messages
} // End namespace battleship

