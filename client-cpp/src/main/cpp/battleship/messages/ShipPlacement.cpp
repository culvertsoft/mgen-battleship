/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/ShipPlacement.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

ShipPlacement::ShipPlacement() : 
		_m_ships_isSet(false) {
}

ShipPlacement::ShipPlacement(const std::vector<battleship::state::Ship> & ships) : 
		m_ships(ships),
		_m_ships_isSet(true) {
}

ShipPlacement::~ShipPlacement() {
}

const std::vector<battleship::state::Ship> & ShipPlacement::getShips() const {
	return m_ships;
}

std::vector<battleship::state::Ship> & ShipPlacement::getShipsMutable() {
	_m_ships_isSet = true;
	return m_ships;
}

ShipPlacement& ShipPlacement::setShips(const std::vector<battleship::state::Ship> & ships) {
	m_ships = ships;
	_m_ships_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool ShipPlacement::hasShips() const {
	return _isShipsSet(mgen::SHALLOW);
}

ShipPlacement& ShipPlacement::unsetShips() {
	_setShipsSet(false, mgen::SHALLOW);
	return *this;
}

bool ShipPlacement::operator==(const ShipPlacement& other) const {
	return true
		 && _isShipsSet(mgen::SHALLOW) == other._isShipsSet(mgen::SHALLOW)
		 && getShips() == other.getShips();
}

bool ShipPlacement::operator!=(const ShipPlacement& other) const {
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
		  
const mgen::Field * ShipPlacement::_fieldById(const short id) const {
	switch (id) {
	case _field_ships_id:
		return &_field_ships_metadata();
	default:
		return 0;
	}
}

const mgen::Field * ShipPlacement::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("ships", &ShipPlacement::_field_ships_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long ShipPlacement::_typeId() const {
	return _type_id;
}

const std::string& ShipPlacement::_typeName() const {
	return _type_name();
}

const short ShipPlacement::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& ShipPlacement::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& ShipPlacement::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& ShipPlacement::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& ShipPlacement::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& ShipPlacement::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& ShipPlacement::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& ShipPlacement::_fieldMetadatas() const {
	return _field_metadatas();
}

ShipPlacement& ShipPlacement::_setShipsSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_ships.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_ships);
	_m_ships_isSet = state;
	return *this;
}

ShipPlacement& ShipPlacement::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setShipsSet(state, depth);
	return *this;
}

int ShipPlacement::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isShipsSet(depth) ? 1 : 0;
	return out;
}

bool ShipPlacement::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_ships_id):
			return _isShipsSet(depth);
		default:
			return false;
	}
}

bool ShipPlacement::_isShipsSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_ships_isSet;
	} else {
		return _m_ships_isSet && mgen::validation::validateFieldDeep(getShips());
	}
}

bool ShipPlacement::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isShipsSet(mgen::SHALLOW) || _isShipsSet(mgen::DEEP));
	}
}

bool ShipPlacement::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const ShipPlacement&>(other) == *this;
}

ShipPlacement * ShipPlacement::_deepCopy() const {
	return new ShipPlacement(*this);
}

mgen::MGenBase * ShipPlacement::_newInstance() {
	return new ShipPlacement;
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
		  
const std::string& ShipPlacement::_type_name() {
	static const std::string out("battleship.messages.ShipPlacement");
	return out;
}

const std::vector<long long>& ShipPlacement::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 20544504380178079LL << 8410045829630410805LL;
	return out;
}

const std::vector<short>& ShipPlacement::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 31502 << -6905;
	return out;
}

const std::vector<std::string>& ShipPlacement::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInput" << "battleship.messages.ShipPlacement";
	return out;
}

const std::vector<std::string>& ShipPlacement::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "ew4" << "5Qc";
	return out;
}

const std::string& ShipPlacement::_type_ids_16bit_base64_string() {
	static const std::string out("bsYew45Qc");
	return out;
}

const std::string& ShipPlacement::_type_id_16bit_base64() {
	static const std::string out("5Qc");
	return out;
}

const std::vector<mgen::Field>& ShipPlacement::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_ships_metadata();
	return out;
}

const mgen::Field& ShipPlacement::_field_ships_metadata() {
	static const mgen::Field out(32030, "ships");
	return out;
}

} // End namespace messages
} // End namespace battleship

