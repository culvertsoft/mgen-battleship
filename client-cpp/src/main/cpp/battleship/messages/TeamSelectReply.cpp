/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/TeamSelectReply.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

TeamSelectReply::TeamSelectReply() : 
		m_result(false),
		m_team(battleship::state::Team_UNKNOWN),
		_m_result_isSet(false),
		_m_failReason_isSet(false),
		_m_team_isSet(false) {
}

TeamSelectReply::TeamSelectReply(const bool& result, 
			const std::string& failReason, 
			const battleship::state::Team& team) : 
		m_result(result),
		m_failReason(failReason),
		m_team(team),
		_m_result_isSet(true),
		_m_failReason_isSet(true),
		_m_team_isSet(true) {
}

TeamSelectReply::~TeamSelectReply() {
}

const bool& TeamSelectReply::getResult() const {
	return m_result;
}

const std::string& TeamSelectReply::getFailReason() const {
	return m_failReason;
}

const battleship::state::Team& TeamSelectReply::getTeam() const {
	return m_team;
}

bool& TeamSelectReply::getResultMutable() {
	_m_result_isSet = true;
	return m_result;
}

std::string& TeamSelectReply::getFailReasonMutable() {
	_m_failReason_isSet = true;
	return m_failReason;
}

battleship::state::Team& TeamSelectReply::getTeamMutable() {
	_m_team_isSet = true;
	return m_team;
}

TeamSelectReply& TeamSelectReply::setResult(const bool& result) {
	m_result = result;
	_m_result_isSet = true;
	return *this;
}

TeamSelectReply& TeamSelectReply::setFailReason(const std::string& failReason) {
	m_failReason = failReason;
	_m_failReason_isSet = true;
	return *this;
}

TeamSelectReply& TeamSelectReply::setTeam(const battleship::state::Team& team) {
	m_team = team;
	_m_team_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool TeamSelectReply::hasResult() const {
	return _isResultSet(mgen::SHALLOW);
}

bool TeamSelectReply::hasFailReason() const {
	return _isFailReasonSet(mgen::SHALLOW);
}

bool TeamSelectReply::hasTeam() const {
	return _isTeamSet(mgen::SHALLOW);
}

TeamSelectReply& TeamSelectReply::unsetResult() {
	_setResultSet(false, mgen::SHALLOW);
	return *this;
}

TeamSelectReply& TeamSelectReply::unsetFailReason() {
	_setFailReasonSet(false, mgen::SHALLOW);
	return *this;
}

TeamSelectReply& TeamSelectReply::unsetTeam() {
	_setTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool TeamSelectReply::operator==(const TeamSelectReply& other) const {
	return true
		 && _isResultSet(mgen::SHALLOW) == other._isResultSet(mgen::SHALLOW)
		 && _isFailReasonSet(mgen::SHALLOW) == other._isFailReasonSet(mgen::SHALLOW)
		 && _isTeamSet(mgen::SHALLOW) == other._isTeamSet(mgen::SHALLOW)
		 && getResult() == other.getResult()
		 && getFailReason() == other.getFailReason()
		 && getTeam() == other.getTeam();
}

bool TeamSelectReply::operator!=(const TeamSelectReply& other) const {
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
		  
const mgen::Field * TeamSelectReply::_fieldById(const short id) const {
	switch (id) {
	case _field_result_id:
		return &_field_result_metadata();
	case _field_failReason_id:
		return &_field_failReason_metadata();
	case _field_team_id:
		return &_field_team_metadata();
	default:
		return 0;
	}
}

const mgen::Field * TeamSelectReply::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("result", &TeamSelectReply::_field_result_metadata())("failReason", &TeamSelectReply::_field_failReason_metadata())("team", &TeamSelectReply::_field_team_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long TeamSelectReply::_typeId() const {
	return _type_id;
}

const std::string& TeamSelectReply::_typeName() const {
	return _type_name();
}

const short TeamSelectReply::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& TeamSelectReply::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& TeamSelectReply::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& TeamSelectReply::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& TeamSelectReply::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& TeamSelectReply::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& TeamSelectReply::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& TeamSelectReply::_fieldMetadatas() const {
	return _field_metadatas();
}

TeamSelectReply& TeamSelectReply::_setResultSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_result = false;
	_m_result_isSet = state;
	return *this;
}

TeamSelectReply& TeamSelectReply::_setFailReasonSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_failReason = "";
	_m_failReason_isSet = state;
	return *this;
}

TeamSelectReply& TeamSelectReply::_setTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_team = battleship::state::Team_UNKNOWN;
	_m_team_isSet = state;
	return *this;
}

TeamSelectReply& TeamSelectReply::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setResultSet(state, depth);
	_setFailReasonSet(state, depth);
	_setTeamSet(state, depth);
	return *this;
}

int TeamSelectReply::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isResultSet(depth) ? 1 : 0;
	out += _isFailReasonSet(depth) ? 1 : 0;
	out += _isTeamSet(depth) ? 1 : 0;
	return out;
}

bool TeamSelectReply::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_result_id):
			return _isResultSet(depth);
		case (_field_failReason_id):
			return _isFailReasonSet(depth);
		case (_field_team_id):
			return _isTeamSet(depth);
		default:
			return false;
	}
}

bool TeamSelectReply::_isResultSet(const mgen::FieldSetDepth depth) const {
	return _m_result_isSet;
}

bool TeamSelectReply::_isFailReasonSet(const mgen::FieldSetDepth depth) const {
	return _m_failReason_isSet;
}

bool TeamSelectReply::_isTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_team_isSet;
}

bool TeamSelectReply::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool TeamSelectReply::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const TeamSelectReply&>(other) == *this;
}

TeamSelectReply * TeamSelectReply::_deepCopy() const {
	return new TeamSelectReply(*this);
}

mgen::MGenBase * TeamSelectReply::_newInstance() {
	return new TeamSelectReply;
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
		  
const std::string& TeamSelectReply::_type_name() {
	static const std::string out("battleship.messages.TeamSelectReply");
	return out;
}

const std::vector<long long>& TeamSelectReply::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 7755333223434470491LL << 7126685645384091317LL;
	return out;
}

const std::vector<short>& TeamSelectReply::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 11623 << -9272;
	return out;
}

const std::vector<std::string>& TeamSelectReply::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.Connection" << "battleship.messages.TeamSelectReply";
	return out;
}

const std::vector<std::string>& TeamSelectReply::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "LWc" << "28g";
	return out;
}

const std::string& TeamSelectReply::_type_ids_16bit_base64_string() {
	static const std::string out("bsYLWc28g");
	return out;
}

const std::string& TeamSelectReply::_type_id_16bit_base64() {
	static const std::string out("28g");
	return out;
}

const std::vector<mgen::Field>& TeamSelectReply::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_result_metadata() << _field_failReason_metadata() << _field_team_metadata();
	return out;
}

const mgen::Field& TeamSelectReply::_field_result_metadata() {
	static const mgen::Field out(24642, "result");
	return out;
}

const mgen::Field& TeamSelectReply::_field_failReason_metadata() {
	static const mgen::Field out(1610, "failReason");
	return out;
}

const mgen::Field& TeamSelectReply::_field_team_metadata() {
	static const mgen::Field out(-1585, "team");
	return out;
}

} // End namespace messages
} // End namespace battleship

