/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/PhaseChange.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

PhaseChange::PhaseChange() : 
		m_phase(battleship::state::Phase_UNKNOWN),
		_m_phase_isSet(false) {
}

PhaseChange::PhaseChange(const battleship::state::Phase& phase) : 
		m_phase(phase),
		_m_phase_isSet(true) {
}

PhaseChange::~PhaseChange() {
}

const battleship::state::Phase& PhaseChange::getPhase() const {
	return m_phase;
}

battleship::state::Phase& PhaseChange::getPhaseMutable() {
	_m_phase_isSet = true;
	return m_phase;
}

PhaseChange& PhaseChange::setPhase(const battleship::state::Phase& phase) {
	m_phase = phase;
	_m_phase_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool PhaseChange::hasPhase() const {
	return _isPhaseSet(mgen::SHALLOW);
}

PhaseChange& PhaseChange::unsetPhase() {
	_setPhaseSet(false, mgen::SHALLOW);
	return *this;
}

bool PhaseChange::operator==(const PhaseChange& other) const {
	return true
		 && _isPhaseSet(mgen::SHALLOW) == other._isPhaseSet(mgen::SHALLOW)
		 && getPhase() == other.getPhase();
}

bool PhaseChange::operator!=(const PhaseChange& other) const {
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
		  
const mgen::Field * PhaseChange::_fieldById(const short id) const {
	switch (id) {
	case _field_phase_id:
		return &_field_phase_metadata();
	default:
		return 0;
	}
}

const mgen::Field * PhaseChange::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("phase", &PhaseChange::_field_phase_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long PhaseChange::_typeId() const {
	return _type_id;
}

const std::string& PhaseChange::_typeName() const {
	return _type_name();
}

const short PhaseChange::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& PhaseChange::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& PhaseChange::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& PhaseChange::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& PhaseChange::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& PhaseChange::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& PhaseChange::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& PhaseChange::_fieldMetadatas() const {
	return _field_metadatas();
}

PhaseChange& PhaseChange::_setPhaseSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_phase = battleship::state::Phase_UNKNOWN;
	_m_phase_isSet = state;
	return *this;
}

PhaseChange& PhaseChange::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPhaseSet(state, depth);
	return *this;
}

int PhaseChange::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPhaseSet(depth) ? 1 : 0;
	return out;
}

bool PhaseChange::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_phase_id):
			return _isPhaseSet(depth);
		default:
			return false;
	}
}

bool PhaseChange::_isPhaseSet(const mgen::FieldSetDepth depth) const {
	return _m_phase_isSet;
}

bool PhaseChange::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool PhaseChange::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const PhaseChange&>(other) == *this;
}

PhaseChange * PhaseChange::_deepCopy() const {
	return new PhaseChange(*this);
}

mgen::MGenBase * PhaseChange::_newInstance() {
	return new PhaseChange;
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
		  
const std::string& PhaseChange::_type_name() {
	static const std::string out("battleship.messages.PhaseChange");
	return out;
}

const std::vector<long long>& PhaseChange::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL << 6310518169450536016LL;
	return out;
}

const std::vector<short>& PhaseChange::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460 << -8601;
	return out;
}

const std::vector<std::string>& PhaseChange::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo" << "battleship.messages.PhaseChange";
	return out;
}

const std::vector<std::string>& PhaseChange::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw" << "3mc";
	return out;
}

const std::string& PhaseChange::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCw3mc");
	return out;
}

const std::string& PhaseChange::_type_id_16bit_base64() {
	static const std::string out("3mc");
	return out;
}

const std::vector<mgen::Field>& PhaseChange::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_phase_metadata();
	return out;
}

const mgen::Field& PhaseChange::_field_phase_metadata() {
	static const mgen::Field out(7625, "phase");
	return out;
}

} // End namespace messages
} // End namespace battleship

