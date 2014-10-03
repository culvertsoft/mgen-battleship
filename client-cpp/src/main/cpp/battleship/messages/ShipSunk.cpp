/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/ShipSunk.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

ShipSunk::ShipSunk() : 
		m_team(battleship::state::Team_UNKNOWN),
		_m_ship_isSet(false),
		_m_team_isSet(false) {
}

ShipSunk::ShipSunk(const battleship::state::Ship& ship, 
			const battleship::state::Team& team) : 
		m_ship(ship),
		m_team(team),
		_m_ship_isSet(true),
		_m_team_isSet(true) {
}

ShipSunk::~ShipSunk() {
}

const battleship::state::Ship& ShipSunk::getShip() const {
	return m_ship;
}

const battleship::state::Team& ShipSunk::getTeam() const {
	return m_team;
}

battleship::state::Ship& ShipSunk::getShipMutable() {
	_m_ship_isSet = true;
	return m_ship;
}

battleship::state::Team& ShipSunk::getTeamMutable() {
	_m_team_isSet = true;
	return m_team;
}

ShipSunk& ShipSunk::setShip(const battleship::state::Ship& ship) {
	m_ship = ship;
	_m_ship_isSet = true;
	return *this;
}

ShipSunk& ShipSunk::setTeam(const battleship::state::Team& team) {
	m_team = team;
	_m_team_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool ShipSunk::hasShip() const {
	return _isShipSet(mgen::SHALLOW);
}

bool ShipSunk::hasTeam() const {
	return _isTeamSet(mgen::SHALLOW);
}

ShipSunk& ShipSunk::unsetShip() {
	_setShipSet(false, mgen::SHALLOW);
	return *this;
}

ShipSunk& ShipSunk::unsetTeam() {
	_setTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool ShipSunk::operator==(const ShipSunk& other) const {
	return true
		 && _isShipSet(mgen::SHALLOW) == other._isShipSet(mgen::SHALLOW)
		 && _isTeamSet(mgen::SHALLOW) == other._isTeamSet(mgen::SHALLOW)
		 && getShip() == other.getShip()
		 && getTeam() == other.getTeam();
}

bool ShipSunk::operator!=(const ShipSunk& other) const {
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
		  
const mgen::Field * ShipSunk::_fieldById(const short id) const {
	switch (id) {
	case _field_ship_id:
		return &_field_ship_metadata();
	case _field_team_id:
		return &_field_team_metadata();
	default:
		return 0;
	}
}

const mgen::Field * ShipSunk::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("ship", &ShipSunk::_field_ship_metadata())("team", &ShipSunk::_field_team_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long ShipSunk::_typeId() const {
	return _type_id;
}

const std::string& ShipSunk::_typeName() const {
	return _type_name();
}

const short ShipSunk::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& ShipSunk::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& ShipSunk::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& ShipSunk::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& ShipSunk::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& ShipSunk::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& ShipSunk::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& ShipSunk::_fieldMetadatas() const {
	return _field_metadatas();
}

ShipSunk& ShipSunk::_setShipSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_ship._setAllFieldsSet(state, mgen::DEEP);
	_m_ship_isSet = state;
	return *this;
}

ShipSunk& ShipSunk::_setTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_team = battleship::state::Team_UNKNOWN;
	_m_team_isSet = state;
	return *this;
}

ShipSunk& ShipSunk::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setShipSet(state, depth);
	_setTeamSet(state, depth);
	return *this;
}

int ShipSunk::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isShipSet(depth) ? 1 : 0;
	out += _isTeamSet(depth) ? 1 : 0;
	return out;
}

bool ShipSunk::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_ship_id):
			return _isShipSet(depth);
		case (_field_team_id):
			return _isTeamSet(depth);
		default:
			return false;
	}
}

bool ShipSunk::_isShipSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_ship_isSet;
	} else {
		return _m_ship_isSet && mgen::validation::validateFieldDeep(getShip());
	}
}

bool ShipSunk::_isTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_team_isSet;
}

bool ShipSunk::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isShipSet(mgen::SHALLOW) || _isShipSet(mgen::DEEP));
	}
}

bool ShipSunk::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const ShipSunk&>(other) == *this;
}

ShipSunk * ShipSunk::_deepCopy() const {
	return new ShipSunk(*this);
}

mgen::MGenBase * ShipSunk::_newInstance() {
	return new ShipSunk;
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
		  
const std::string& ShipSunk::_type_name() {
	static const std::string out("battleship.messages.ShipSunk");
	return out;
}

const std::vector<long long>& ShipSunk::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL << 2431416064824807951LL;
	return out;
}

const std::vector<short>& ShipSunk::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460 << -25306;
	return out;
}

const std::vector<std::string>& ShipSunk::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo" << "battleship.messages.ShipSunk";
	return out;
}

const std::vector<std::string>& ShipSunk::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw" << "nSY";
	return out;
}

const std::string& ShipSunk::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCwnSY");
	return out;
}

const std::string& ShipSunk::_type_id_16bit_base64() {
	static const std::string out("nSY");
	return out;
}

const std::vector<mgen::Field>& ShipSunk::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_ship_metadata() << _field_team_metadata();
	return out;
}

const mgen::Field& ShipSunk::_field_ship_metadata() {
	static const mgen::Field out(-24442, "ship");
	return out;
}

const mgen::Field& ShipSunk::_field_team_metadata() {
	static const mgen::Field out(-1585, "team");
	return out;
}

} // End namespace messages
} // End namespace battleship

