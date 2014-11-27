/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-12 20:36:02 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/Snapshot.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

Snapshot::Snapshot() : 
		_m_state_isSet(false) {
}

Snapshot::Snapshot(const battleship::state::Game& state) : 
		m_state(state),
		_m_state_isSet(true) {
}

Snapshot::~Snapshot() {
}

const battleship::state::Game& Snapshot::getState() const {
	return m_state;
}

battleship::state::Game& Snapshot::getStateMutable() {
	_m_state_isSet = true;
	return m_state;
}

Snapshot& Snapshot::setState(const battleship::state::Game& state) {
	m_state = state;
	_m_state_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Snapshot::hasState() const {
	return _isStateSet(mgen::SHALLOW);
}

Snapshot& Snapshot::unsetState() {
	_setStateSet(false, mgen::SHALLOW);
	return *this;
}

bool Snapshot::operator==(const Snapshot& other) const {
	return true
		 && _isStateSet(mgen::SHALLOW) == other._isStateSet(mgen::SHALLOW)
		 && getState() == other.getState();
}

bool Snapshot::operator!=(const Snapshot& other) const {
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
		  
const mgen::Field * Snapshot::_fieldById(const short id) const {
	switch (id) {
	case _field_state_id:
		return &_field_state_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Snapshot::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("state", &Snapshot::_field_state_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Snapshot::_typeId() const {
	return _type_id;
}

const std::string& Snapshot::_typeName() const {
	return _type_name();
}

const short Snapshot::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Snapshot::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Snapshot::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Snapshot::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Snapshot::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Snapshot::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Snapshot::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Snapshot::_fieldMetadatas() const {
	return _field_metadatas();
}

Snapshot& Snapshot::_setStateSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_state._setAllFieldsSet(state, mgen::DEEP);
	_m_state_isSet = state;
	return *this;
}

Snapshot& Snapshot::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setStateSet(state, depth);
	return *this;
}

int Snapshot::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isStateSet(depth) ? 1 : 0;
	return out;
}

bool Snapshot::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_state_id):
			return _isStateSet(depth);
		default:
			return false;
	}
}

bool Snapshot::_isStateSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_state_isSet;
	} else {
		return _m_state_isSet && mgen::validation::validateFieldDeep(getState());
	}
}

bool Snapshot::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isStateSet(mgen::SHALLOW) || _isStateSet(mgen::DEEP));
	}
}

bool Snapshot::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Snapshot&>(other) == *this;
}

Snapshot * Snapshot::_deepCopy() const {
	return new Snapshot(*this);
}

mgen::MGenBase * Snapshot::_newInstance() {
	return new Snapshot;
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
		  
const std::string& Snapshot::_type_name() {
	static const std::string out("battleship.messages.Snapshot");
	return out;
}

const std::vector<long long>& Snapshot::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL << 7637425245762246339LL;
	return out;
}

const std::vector<short>& Snapshot::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460 << -10286;
	return out;
}

const std::vector<std::string>& Snapshot::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo" << "battleship.messages.Snapshot";
	return out;
}

const std::vector<std::string>& Snapshot::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw" << "19I";
	return out;
}

const std::string& Snapshot::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCw19I");
	return out;
}

const std::string& Snapshot::_type_id_16bit_base64() {
	static const std::string out("19I");
	return out;
}

const std::vector<mgen::Field>& Snapshot::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_state_metadata();
	return out;
}

const mgen::Field& Snapshot::_field_state_metadata() {
	static const mgen::Field out(15897, "state");
	return out;
}

} // End namespace messages
} // End namespace battleship

