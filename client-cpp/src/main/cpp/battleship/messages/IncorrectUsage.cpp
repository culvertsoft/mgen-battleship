/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/IncorrectUsage.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

IncorrectUsage::IncorrectUsage() : 
		_m_reason_isSet(false) {
}

IncorrectUsage::IncorrectUsage(const std::string& reason) : 
		m_reason(reason),
		_m_reason_isSet(true) {
}

IncorrectUsage::~IncorrectUsage() {
}

const std::string& IncorrectUsage::getReason() const {
	return m_reason;
}

std::string& IncorrectUsage::getReasonMutable() {
	_m_reason_isSet = true;
	return m_reason;
}

IncorrectUsage& IncorrectUsage::setReason(const std::string& reason) {
	m_reason = reason;
	_m_reason_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool IncorrectUsage::hasReason() const {
	return _isReasonSet(mgen::SHALLOW);
}

IncorrectUsage& IncorrectUsage::unsetReason() {
	_setReasonSet(false, mgen::SHALLOW);
	return *this;
}

bool IncorrectUsage::operator==(const IncorrectUsage& other) const {
	return true
		 && _isReasonSet(mgen::SHALLOW) == other._isReasonSet(mgen::SHALLOW)
		 && getReason() == other.getReason();
}

bool IncorrectUsage::operator!=(const IncorrectUsage& other) const {
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
		  
const mgen::Field * IncorrectUsage::_fieldById(const short id) const {
	switch (id) {
	case _field_reason_id:
		return &_field_reason_metadata();
	default:
		return 0;
	}
}

const mgen::Field * IncorrectUsage::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("reason", &IncorrectUsage::_field_reason_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long IncorrectUsage::_typeId() const {
	return _type_id;
}

const std::string& IncorrectUsage::_typeName() const {
	return _type_name();
}

const short IncorrectUsage::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& IncorrectUsage::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& IncorrectUsage::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& IncorrectUsage::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& IncorrectUsage::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& IncorrectUsage::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& IncorrectUsage::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& IncorrectUsage::_fieldMetadatas() const {
	return _field_metadatas();
}

IncorrectUsage& IncorrectUsage::_setReasonSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_reason = "";
	_m_reason_isSet = state;
	return *this;
}

IncorrectUsage& IncorrectUsage::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setReasonSet(state, depth);
	return *this;
}

int IncorrectUsage::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isReasonSet(depth) ? 1 : 0;
	return out;
}

bool IncorrectUsage::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_reason_id):
			return _isReasonSet(depth);
		default:
			return false;
	}
}

bool IncorrectUsage::_isReasonSet(const mgen::FieldSetDepth depth) const {
	return _m_reason_isSet;
}

bool IncorrectUsage::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool IncorrectUsage::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const IncorrectUsage&>(other) == *this;
}

IncorrectUsage * IncorrectUsage::_deepCopy() const {
	return new IncorrectUsage(*this);
}

mgen::MGenBase * IncorrectUsage::_newInstance() {
	return new IncorrectUsage;
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
		  
const std::string& IncorrectUsage::_type_name() {
	static const std::string out("battleship.messages.IncorrectUsage");
	return out;
}

const std::vector<long long>& IncorrectUsage::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL << 3733949225402703826LL;
	return out;
}

const std::vector<short>& IncorrectUsage::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460 << -8614;
	return out;
}

const std::vector<std::string>& IncorrectUsage::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo" << "battleship.messages.IncorrectUsage";
	return out;
}

const std::vector<std::string>& IncorrectUsage::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw" << "3lo";
	return out;
}

const std::string& IncorrectUsage::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCw3lo");
	return out;
}

const std::string& IncorrectUsage::_type_id_16bit_base64() {
	static const std::string out("3lo");
	return out;
}

const std::vector<mgen::Field>& IncorrectUsage::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_reason_metadata();
	return out;
}

const mgen::Field& IncorrectUsage::_field_reason_metadata() {
	static const mgen::Field out(-15867, "reason");
	return out;
}

} // End namespace messages
} // End namespace battleship

