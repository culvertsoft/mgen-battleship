/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/FireResult.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

FireResult::FireResult() : 
		m_hit(false),
		m_firingTeam(battleship::state::Team_UNKNOWN),
		_m_hit_isSet(false),
		_m_position_isSet(false),
		_m_firingTeam_isSet(false) {
}

FireResult::FireResult(const bool& hit, 
			const battleship::state::Vec2& position, 
			const battleship::state::Team& firingTeam) : 
		m_hit(hit),
		m_position(position),
		m_firingTeam(firingTeam),
		_m_hit_isSet(true),
		_m_position_isSet(true),
		_m_firingTeam_isSet(true) {
}

FireResult::~FireResult() {
}

const bool& FireResult::getHit() const {
	return m_hit;
}

const battleship::state::Vec2& FireResult::getPosition() const {
	return m_position;
}

const battleship::state::Team& FireResult::getFiringTeam() const {
	return m_firingTeam;
}

bool& FireResult::getHitMutable() {
	_m_hit_isSet = true;
	return m_hit;
}

battleship::state::Vec2& FireResult::getPositionMutable() {
	_m_position_isSet = true;
	return m_position;
}

battleship::state::Team& FireResult::getFiringTeamMutable() {
	_m_firingTeam_isSet = true;
	return m_firingTeam;
}

FireResult& FireResult::setHit(const bool& hit) {
	m_hit = hit;
	_m_hit_isSet = true;
	return *this;
}

FireResult& FireResult::setPosition(const battleship::state::Vec2& position) {
	m_position = position;
	_m_position_isSet = true;
	return *this;
}

FireResult& FireResult::setFiringTeam(const battleship::state::Team& firingTeam) {
	m_firingTeam = firingTeam;
	_m_firingTeam_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool FireResult::hasHit() const {
	return _isHitSet(mgen::SHALLOW);
}

bool FireResult::hasPosition() const {
	return _isPositionSet(mgen::SHALLOW);
}

bool FireResult::hasFiringTeam() const {
	return _isFiringTeamSet(mgen::SHALLOW);
}

FireResult& FireResult::unsetHit() {
	_setHitSet(false, mgen::SHALLOW);
	return *this;
}

FireResult& FireResult::unsetPosition() {
	_setPositionSet(false, mgen::SHALLOW);
	return *this;
}

FireResult& FireResult::unsetFiringTeam() {
	_setFiringTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool FireResult::operator==(const FireResult& other) const {
	return true
		 && _isHitSet(mgen::SHALLOW) == other._isHitSet(mgen::SHALLOW)
		 && _isPositionSet(mgen::SHALLOW) == other._isPositionSet(mgen::SHALLOW)
		 && _isFiringTeamSet(mgen::SHALLOW) == other._isFiringTeamSet(mgen::SHALLOW)
		 && getHit() == other.getHit()
		 && getPosition() == other.getPosition()
		 && getFiringTeam() == other.getFiringTeam();
}

bool FireResult::operator!=(const FireResult& other) const {
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
		  
const mgen::Field * FireResult::_fieldById(const short id) const {
	switch (id) {
	case _field_hit_id:
		return &_field_hit_metadata();
	case _field_position_id:
		return &_field_position_metadata();
	case _field_firingTeam_id:
		return &_field_firingTeam_metadata();
	default:
		return 0;
	}
}

const mgen::Field * FireResult::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("hit", &FireResult::_field_hit_metadata())("position", &FireResult::_field_position_metadata())("firingTeam", &FireResult::_field_firingTeam_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long FireResult::_typeId() const {
	return _type_id;
}

const std::string& FireResult::_typeName() const {
	return _type_name();
}

const short FireResult::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& FireResult::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& FireResult::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& FireResult::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& FireResult::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& FireResult::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& FireResult::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& FireResult::_fieldMetadatas() const {
	return _field_metadatas();
}

FireResult& FireResult::_setHitSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_hit = false;
	_m_hit_isSet = state;
	return *this;
}

FireResult& FireResult::_setPositionSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_position._setAllFieldsSet(state, mgen::DEEP);
	_m_position_isSet = state;
	return *this;
}

FireResult& FireResult::_setFiringTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_firingTeam = battleship::state::Team_UNKNOWN;
	_m_firingTeam_isSet = state;
	return *this;
}

FireResult& FireResult::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setHitSet(state, depth);
	_setPositionSet(state, depth);
	_setFiringTeamSet(state, depth);
	return *this;
}

int FireResult::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isHitSet(depth) ? 1 : 0;
	out += _isPositionSet(depth) ? 1 : 0;
	out += _isFiringTeamSet(depth) ? 1 : 0;
	return out;
}

bool FireResult::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_hit_id):
			return _isHitSet(depth);
		case (_field_position_id):
			return _isPositionSet(depth);
		case (_field_firingTeam_id):
			return _isFiringTeamSet(depth);
		default:
			return false;
	}
}

bool FireResult::_isHitSet(const mgen::FieldSetDepth depth) const {
	return _m_hit_isSet;
}

bool FireResult::_isPositionSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_position_isSet;
	} else {
		return _m_position_isSet && mgen::validation::validateFieldDeep(getPosition());
	}
}

bool FireResult::_isFiringTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_firingTeam_isSet;
}

bool FireResult::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPositionSet(mgen::SHALLOW) || _isPositionSet(mgen::DEEP));
	}
}

bool FireResult::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const FireResult&>(other) == *this;
}

FireResult * FireResult::_deepCopy() const {
	return new FireResult(*this);
}

mgen::MGenBase * FireResult::_newInstance() {
	return new FireResult;
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
		  
const std::string& FireResult::_type_name() {
	static const std::string out("battleship.messages.FireResult");
	return out;
}

const std::vector<long long>& FireResult::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL << 8695181952916377338LL;
	return out;
}

const std::vector<short>& FireResult::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460 << 31228;
	return out;
}

const std::vector<std::string>& FireResult::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo" << "battleship.messages.FireResult";
	return out;
}

const std::vector<std::string>& FireResult::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw" << "efw";
	return out;
}

const std::string& FireResult::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCwefw");
	return out;
}

const std::string& FireResult::_type_id_16bit_base64() {
	static const std::string out("efw");
	return out;
}

const std::vector<mgen::Field>& FireResult::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_hit_metadata() << _field_position_metadata() << _field_firingTeam_metadata();
	return out;
}

const mgen::Field& FireResult::_field_hit_metadata() {
	static const mgen::Field out(29175, "hit");
	return out;
}

const mgen::Field& FireResult::_field_position_metadata() {
	static const mgen::Field out(-26337, "position");
	return out;
}

const mgen::Field& FireResult::_field_firingTeam_metadata() {
	static const mgen::Field out(-20506, "firingTeam");
	return out;
}

} // End namespace messages
} // End namespace battleship

