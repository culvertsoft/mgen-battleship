/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/state/Player.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace state {

Player::Player() : 
		m_team(Team_UNKNOWN),
		m_ready(false),
		_m_team_isSet(false),
		_m_name_isSet(false),
		_m_ready_isSet(false),
		_m_shots_isSet(false) {
}

Player::Player(const Team& team, 
			const std::string& name, 
			const bool& ready, 
			const std::vector<Shot> & shots) : 
		m_team(team),
		m_name(name),
		m_ready(ready),
		m_shots(shots),
		_m_team_isSet(true),
		_m_name_isSet(true),
		_m_ready_isSet(true),
		_m_shots_isSet(true) {
}

Player::~Player() {
}

const Team& Player::getTeam() const {
	return m_team;
}

const std::string& Player::getName() const {
	return m_name;
}

const bool& Player::getReady() const {
	return m_ready;
}

const std::vector<Shot> & Player::getShots() const {
	return m_shots;
}

Team& Player::getTeamMutable() {
	_m_team_isSet = true;
	return m_team;
}

std::string& Player::getNameMutable() {
	_m_name_isSet = true;
	return m_name;
}

bool& Player::getReadyMutable() {
	_m_ready_isSet = true;
	return m_ready;
}

std::vector<Shot> & Player::getShotsMutable() {
	_m_shots_isSet = true;
	return m_shots;
}

Player& Player::setTeam(const Team& team) {
	m_team = team;
	_m_team_isSet = true;
	return *this;
}

Player& Player::setName(const std::string& name) {
	m_name = name;
	_m_name_isSet = true;
	return *this;
}

Player& Player::setReady(const bool& ready) {
	m_ready = ready;
	_m_ready_isSet = true;
	return *this;
}

Player& Player::setShots(const std::vector<Shot> & shots) {
	m_shots = shots;
	_m_shots_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool Player::hasTeam() const {
	return _isTeamSet(mgen::SHALLOW);
}

bool Player::hasName() const {
	return _isNameSet(mgen::SHALLOW);
}

bool Player::hasReady() const {
	return _isReadySet(mgen::SHALLOW);
}

bool Player::hasShots() const {
	return _isShotsSet(mgen::SHALLOW);
}

Player& Player::unsetTeam() {
	_setTeamSet(false, mgen::SHALLOW);
	return *this;
}

Player& Player::unsetName() {
	_setNameSet(false, mgen::SHALLOW);
	return *this;
}

Player& Player::unsetReady() {
	_setReadySet(false, mgen::SHALLOW);
	return *this;
}

Player& Player::unsetShots() {
	_setShotsSet(false, mgen::SHALLOW);
	return *this;
}

bool Player::operator==(const Player& other) const {
	return true
		 && _isTeamSet(mgen::SHALLOW) == other._isTeamSet(mgen::SHALLOW)
		 && _isNameSet(mgen::SHALLOW) == other._isNameSet(mgen::SHALLOW)
		 && _isReadySet(mgen::SHALLOW) == other._isReadySet(mgen::SHALLOW)
		 && _isShotsSet(mgen::SHALLOW) == other._isShotsSet(mgen::SHALLOW)
		 && getTeam() == other.getTeam()
		 && getName() == other.getName()
		 && getReady() == other.getReady()
		 && getShots() == other.getShots();
}

bool Player::operator!=(const Player& other) const {
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
		  
const mgen::Field * Player::_fieldById(const short id) const {
	switch (id) {
	case _field_team_id:
		return &_field_team_metadata();
	case _field_name_id:
		return &_field_name_metadata();
	case _field_ready_id:
		return &_field_ready_metadata();
	case _field_shots_id:
		return &_field_shots_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Player::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("team", &Player::_field_team_metadata())("name", &Player::_field_name_metadata())("ready", &Player::_field_ready_metadata())("shots", &Player::_field_shots_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Player::_typeId() const {
	return _type_id;
}

const std::string& Player::_typeName() const {
	return _type_name();
}

const short Player::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Player::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Player::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Player::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Player::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Player::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Player::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Player::_fieldMetadatas() const {
	return _field_metadatas();
}

Player& Player::_setTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_team = Team_UNKNOWN;
	_m_team_isSet = state;
	return *this;
}

Player& Player::_setNameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_name = "";
	_m_name_isSet = state;
	return *this;
}

Player& Player::_setReadySet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_ready = false;
	_m_ready_isSet = state;
	return *this;
}

Player& Player::_setShotsSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_shots.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_shots);
	_m_shots_isSet = state;
	return *this;
}

Player& Player::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setTeamSet(state, depth);
	_setNameSet(state, depth);
	_setReadySet(state, depth);
	_setShotsSet(state, depth);
	return *this;
}

int Player::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isTeamSet(depth) ? 1 : 0;
	out += _isNameSet(depth) ? 1 : 0;
	out += _isReadySet(depth) ? 1 : 0;
	out += _isShotsSet(depth) ? 1 : 0;
	return out;
}

bool Player::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_team_id):
			return _isTeamSet(depth);
		case (_field_name_id):
			return _isNameSet(depth);
		case (_field_ready_id):
			return _isReadySet(depth);
		case (_field_shots_id):
			return _isShotsSet(depth);
		default:
			return false;
	}
}

bool Player::_isTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_team_isSet;
}

bool Player::_isNameSet(const mgen::FieldSetDepth depth) const {
	return _m_name_isSet;
}

bool Player::_isReadySet(const mgen::FieldSetDepth depth) const {
	return _m_ready_isSet;
}

bool Player::_isShotsSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_shots_isSet;
	} else {
		return _m_shots_isSet && mgen::validation::validateFieldDeep(getShots());
	}
}

bool Player::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isShotsSet(mgen::SHALLOW) || _isShotsSet(mgen::DEEP));
	}
}

bool Player::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Player&>(other) == *this;
}

Player * Player::_deepCopy() const {
	return new Player(*this);
}

mgen::MGenBase * Player::_newInstance() {
	return new Player;
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
		  
const std::string& Player::_type_name() {
	static const std::string out("battleship.state.Player");
	return out;
}

const std::vector<long long>& Player::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 8473431594631525139LL;
	return out;
}

const std::vector<short>& Player::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -18915;
	return out;
}

const std::vector<std::string>& Player::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.state.Player";
	return out;
}

const std::vector<std::string>& Player::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "th0";
	return out;
}

const std::string& Player::_type_ids_16bit_base64_string() {
	static const std::string out("th0");
	return out;
}

const std::string& Player::_type_id_16bit_base64() {
	static const std::string out("th0");
	return out;
}

const std::vector<mgen::Field>& Player::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_team_metadata() << _field_name_metadata() << _field_ready_metadata() << _field_shots_metadata();
	return out;
}

const mgen::Field& Player::_field_team_metadata() {
	static const mgen::Field out(-1585, "team");
	return out;
}

const mgen::Field& Player::_field_name_metadata() {
	static const mgen::Field out(-28058, "name");
	return out;
}

const mgen::Field& Player::_field_ready_metadata() {
	static const mgen::Field out(10645, "ready");
	return out;
}

const mgen::Field& Player::_field_shots_metadata() {
	static const mgen::Field out(890, "shots");
	return out;
}

} // End namespace state
} // End namespace battleship

