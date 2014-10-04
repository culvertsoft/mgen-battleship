/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/LoginReply.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

LoginReply::LoginReply() : 
		m_result(false),
		m_team(battleship::state::Team_UNKNOWN),
		_m_uuid_isSet(false),
		_m_result_isSet(false),
		_m_failReason_isSet(false),
		_m_team_isSet(false) {
}

LoginReply::LoginReply(const std::string& uuid, 
			const bool& result, 
			const std::string& failReason, 
			const battleship::state::Team& team) : 
		m_uuid(uuid),
		m_result(result),
		m_failReason(failReason),
		m_team(team),
		_m_uuid_isSet(true),
		_m_result_isSet(true),
		_m_failReason_isSet(true),
		_m_team_isSet(true) {
}

LoginReply::~LoginReply() {
}

const std::string& LoginReply::getUuid() const {
	return m_uuid;
}

const bool& LoginReply::getResult() const {
	return m_result;
}

const std::string& LoginReply::getFailReason() const {
	return m_failReason;
}

const battleship::state::Team& LoginReply::getTeam() const {
	return m_team;
}

std::string& LoginReply::getUuidMutable() {
	_m_uuid_isSet = true;
	return m_uuid;
}

bool& LoginReply::getResultMutable() {
	_m_result_isSet = true;
	return m_result;
}

std::string& LoginReply::getFailReasonMutable() {
	_m_failReason_isSet = true;
	return m_failReason;
}

battleship::state::Team& LoginReply::getTeamMutable() {
	_m_team_isSet = true;
	return m_team;
}

LoginReply& LoginReply::setUuid(const std::string& uuid) {
	m_uuid = uuid;
	_m_uuid_isSet = true;
	return *this;
}

LoginReply& LoginReply::setResult(const bool& result) {
	m_result = result;
	_m_result_isSet = true;
	return *this;
}

LoginReply& LoginReply::setFailReason(const std::string& failReason) {
	m_failReason = failReason;
	_m_failReason_isSet = true;
	return *this;
}

LoginReply& LoginReply::setTeam(const battleship::state::Team& team) {
	m_team = team;
	_m_team_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool LoginReply::hasUuid() const {
	return _isUuidSet(mgen::SHALLOW);
}

bool LoginReply::hasResult() const {
	return _isResultSet(mgen::SHALLOW);
}

bool LoginReply::hasFailReason() const {
	return _isFailReasonSet(mgen::SHALLOW);
}

bool LoginReply::hasTeam() const {
	return _isTeamSet(mgen::SHALLOW);
}

LoginReply& LoginReply::unsetUuid() {
	_setUuidSet(false, mgen::SHALLOW);
	return *this;
}

LoginReply& LoginReply::unsetResult() {
	_setResultSet(false, mgen::SHALLOW);
	return *this;
}

LoginReply& LoginReply::unsetFailReason() {
	_setFailReasonSet(false, mgen::SHALLOW);
	return *this;
}

LoginReply& LoginReply::unsetTeam() {
	_setTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool LoginReply::operator==(const LoginReply& other) const {
	return true
		 && _isUuidSet(mgen::SHALLOW) == other._isUuidSet(mgen::SHALLOW)
		 && _isResultSet(mgen::SHALLOW) == other._isResultSet(mgen::SHALLOW)
		 && _isFailReasonSet(mgen::SHALLOW) == other._isFailReasonSet(mgen::SHALLOW)
		 && _isTeamSet(mgen::SHALLOW) == other._isTeamSet(mgen::SHALLOW)
		 && getUuid() == other.getUuid()
		 && getResult() == other.getResult()
		 && getFailReason() == other.getFailReason()
		 && getTeam() == other.getTeam();
}

bool LoginReply::operator!=(const LoginReply& other) const {
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
		  
const mgen::Field * LoginReply::_fieldById(const short id) const {
	switch (id) {
	case _field_uuid_id:
		return &_field_uuid_metadata();
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

const mgen::Field * LoginReply::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("uuid", &LoginReply::_field_uuid_metadata())("result", &LoginReply::_field_result_metadata())("failReason", &LoginReply::_field_failReason_metadata())("team", &LoginReply::_field_team_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long LoginReply::_typeId() const {
	return _type_id;
}

const std::string& LoginReply::_typeName() const {
	return _type_name();
}

const short LoginReply::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& LoginReply::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& LoginReply::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& LoginReply::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& LoginReply::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& LoginReply::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& LoginReply::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& LoginReply::_fieldMetadatas() const {
	return _field_metadatas();
}

LoginReply& LoginReply::_setUuidSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_uuid = "";
	_m_uuid_isSet = state;
	return *this;
}

LoginReply& LoginReply::_setResultSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_result = false;
	_m_result_isSet = state;
	return *this;
}

LoginReply& LoginReply::_setFailReasonSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_failReason = "";
	_m_failReason_isSet = state;
	return *this;
}

LoginReply& LoginReply::_setTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_team = battleship::state::Team_UNKNOWN;
	_m_team_isSet = state;
	return *this;
}

LoginReply& LoginReply::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setUuidSet(state, depth);
	_setResultSet(state, depth);
	_setFailReasonSet(state, depth);
	_setTeamSet(state, depth);
	return *this;
}

int LoginReply::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isUuidSet(depth) ? 1 : 0;
	out += _isResultSet(depth) ? 1 : 0;
	out += _isFailReasonSet(depth) ? 1 : 0;
	out += _isTeamSet(depth) ? 1 : 0;
	return out;
}

bool LoginReply::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_uuid_id):
			return _isUuidSet(depth);
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

bool LoginReply::_isUuidSet(const mgen::FieldSetDepth depth) const {
	return _m_uuid_isSet;
}

bool LoginReply::_isResultSet(const mgen::FieldSetDepth depth) const {
	return _m_result_isSet;
}

bool LoginReply::_isFailReasonSet(const mgen::FieldSetDepth depth) const {
	return _m_failReason_isSet;
}

bool LoginReply::_isTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_team_isSet;
}

bool LoginReply::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool LoginReply::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const LoginReply&>(other) == *this;
}

LoginReply * LoginReply::_deepCopy() const {
	return new LoginReply(*this);
}

mgen::MGenBase * LoginReply::_newInstance() {
	return new LoginReply;
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
		  
const std::string& LoginReply::_type_name() {
	static const std::string out("battleship.messages.LoginReply");
	return out;
}

const std::vector<long long>& LoginReply::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 7755333223434470491LL << 1638563683387667720LL;
	return out;
}

const std::vector<short>& LoginReply::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 11623 << -9758;
	return out;
}

const std::vector<std::string>& LoginReply::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.Connection" << "battleship.messages.LoginReply";
	return out;
}

const std::vector<std::string>& LoginReply::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "LWc" << "2eI";
	return out;
}

const std::string& LoginReply::_type_ids_16bit_base64_string() {
	static const std::string out("bsYLWc2eI");
	return out;
}

const std::string& LoginReply::_type_id_16bit_base64() {
	static const std::string out("2eI");
	return out;
}

const std::vector<mgen::Field>& LoginReply::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_uuid_metadata() << _field_result_metadata() << _field_failReason_metadata() << _field_team_metadata();
	return out;
}

const mgen::Field& LoginReply::_field_uuid_metadata() {
	static const mgen::Field out(-11112, "uuid");
	return out;
}

const mgen::Field& LoginReply::_field_result_metadata() {
	static const mgen::Field out(24642, "result");
	return out;
}

const mgen::Field& LoginReply::_field_failReason_metadata() {
	static const mgen::Field out(1610, "failReason");
	return out;
}

const mgen::Field& LoginReply::_field_team_metadata() {
	static const mgen::Field out(-1585, "team");
	return out;
}

} // End namespace messages
} // End namespace battleship

