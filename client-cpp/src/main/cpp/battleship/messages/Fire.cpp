/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/Fire.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

Fire::Fire() : 
		_m_position_isSet(false) {
}

Fire::Fire(const battleship::state::Vec2& position) : 
		m_position(position),
		_m_position_isSet(true) {
}

Fire::~Fire() {
}

const battleship::state::Vec2& Fire::getPosition() const {
	return m_position;
}

battleship::state::Vec2& Fire::getPositionMutable() {
	_m_position_isSet = true;
	return m_position;
}

Fire& Fire::setPosition(const battleship::state::Vec2& position) {
	m_position = position;
	_m_position_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Fire::hasPosition() const {
	return _isPositionSet(mgen::SHALLOW);
}

Fire& Fire::unsetPosition() {
	_setPositionSet(false, mgen::SHALLOW);
	return *this;
}

bool Fire::operator==(const Fire& other) const {
	return true
		 && _isPositionSet(mgen::SHALLOW) == other._isPositionSet(mgen::SHALLOW)
		 && getPosition() == other.getPosition();
}

bool Fire::operator!=(const Fire& other) const {
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
		  
const mgen::Field * Fire::_fieldById(const short id) const {
	switch (id) {
	case _field_position_id:
		return &_field_position_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Fire::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("position", &Fire::_field_position_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Fire::_typeId() const {
	return _type_id;
}

const std::string& Fire::_typeName() const {
	return _type_name();
}

const short Fire::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Fire::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Fire::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Fire::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Fire::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Fire::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Fire::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Fire::_fieldMetadatas() const {
	return _field_metadatas();
}

Fire& Fire::_setPositionSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_position._setAllFieldsSet(state, mgen::DEEP);
	_m_position_isSet = state;
	return *this;
}

Fire& Fire::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPositionSet(state, depth);
	return *this;
}

int Fire::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPositionSet(depth) ? 1 : 0;
	return out;
}

bool Fire::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_position_id):
			return _isPositionSet(depth);
		default:
			return false;
	}
}

bool Fire::_isPositionSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_position_isSet;
	} else {
		return _m_position_isSet && mgen::validation::validateFieldDeep(getPosition());
	}
}

bool Fire::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPositionSet(mgen::SHALLOW) || _isPositionSet(mgen::DEEP));
	}
}

bool Fire::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Fire&>(other) == *this;
}

Fire * Fire::_deepCopy() const {
	return new Fire(*this);
}

mgen::MGenBase * Fire::_newInstance() {
	return new Fire;
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
		  
const std::string& Fire::_type_name() {
	static const std::string out("battleship.messages.Fire");
	return out;
}

const std::vector<long long>& Fire::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 20544504380178079LL << 6880290600081744688LL;
	return out;
}

const std::vector<short>& Fire::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 31502 << -25434;
	return out;
}

const std::vector<std::string>& Fire::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInput" << "battleship.messages.Fire";
	return out;
}

const std::vector<std::string>& Fire::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "ew4" << "nKY";
	return out;
}

const std::string& Fire::_type_ids_16bit_base64_string() {
	static const std::string out("bsYew4nKY");
	return out;
}

const std::string& Fire::_type_id_16bit_base64() {
	static const std::string out("nKY");
	return out;
}

const std::vector<mgen::Field>& Fire::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_position_metadata();
	return out;
}

const mgen::Field& Fire::_field_position_metadata() {
	static const mgen::Field out(-26337, "position");
	return out;
}

} // End namespace messages
} // End namespace battleship

