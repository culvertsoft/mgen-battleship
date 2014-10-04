/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/SetReady.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

SetReady::SetReady() : 
		m_isReady(false),
		_m_isReady_isSet(false) {
}

SetReady::SetReady(const bool& isReady) : 
		m_isReady(isReady),
		_m_isReady_isSet(true) {
}

SetReady::~SetReady() {
}

const bool& SetReady::getIsReady() const {
	return m_isReady;
}

bool& SetReady::getIsReadyMutable() {
	_m_isReady_isSet = true;
	return m_isReady;
}

SetReady& SetReady::setIsReady(const bool& isReady) {
	m_isReady = isReady;
	_m_isReady_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool SetReady::hasIsReady() const {
	return _isIsReadySet(mgen::SHALLOW);
}

SetReady& SetReady::unsetIsReady() {
	_setIsReadySet(false, mgen::SHALLOW);
	return *this;
}

bool SetReady::operator==(const SetReady& other) const {
	return true
		 && _isIsReadySet(mgen::SHALLOW) == other._isIsReadySet(mgen::SHALLOW)
		 && getIsReady() == other.getIsReady();
}

bool SetReady::operator!=(const SetReady& other) const {
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
		  
const mgen::Field * SetReady::_fieldById(const short id) const {
	switch (id) {
	case _field_isReady_id:
		return &_field_isReady_metadata();
	default:
		return 0;
	}
}

const mgen::Field * SetReady::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("isReady", &SetReady::_field_isReady_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long SetReady::_typeId() const {
	return _type_id;
}

const std::string& SetReady::_typeName() const {
	return _type_name();
}

const short SetReady::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& SetReady::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& SetReady::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& SetReady::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& SetReady::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& SetReady::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& SetReady::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& SetReady::_fieldMetadatas() const {
	return _field_metadatas();
}

SetReady& SetReady::_setIsReadySet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_isReady = false;
	_m_isReady_isSet = state;
	return *this;
}

SetReady& SetReady::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setIsReadySet(state, depth);
	return *this;
}

int SetReady::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isIsReadySet(depth) ? 1 : 0;
	return out;
}

bool SetReady::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_isReady_id):
			return _isIsReadySet(depth);
		default:
			return false;
	}
}

bool SetReady::_isIsReadySet(const mgen::FieldSetDepth depth) const {
	return _m_isReady_isSet;
}

bool SetReady::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool SetReady::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const SetReady&>(other) == *this;
}

SetReady * SetReady::_deepCopy() const {
	return new SetReady(*this);
}

mgen::MGenBase * SetReady::_newInstance() {
	return new SetReady;
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
		  
const std::string& SetReady::_type_name() {
	static const std::string out("battleship.messages.SetReady");
	return out;
}

const std::vector<long long>& SetReady::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 7755333223434470491LL << 1279998461071668545LL;
	return out;
}

const std::vector<short>& SetReady::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 11623 << 9911;
	return out;
}

const std::vector<std::string>& SetReady::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.Connection" << "battleship.messages.SetReady";
	return out;
}

const std::vector<std::string>& SetReady::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "LWc" << "Jrc";
	return out;
}

const std::string& SetReady::_type_ids_16bit_base64_string() {
	static const std::string out("bsYLWcJrc");
	return out;
}

const std::string& SetReady::_type_id_16bit_base64() {
	static const std::string out("Jrc");
	return out;
}

const std::vector<mgen::Field>& SetReady::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_isReady_metadata();
	return out;
}

const mgen::Field& SetReady::_field_isReady_metadata() {
	static const mgen::Field out(-11703, "isReady");
	return out;
}

} // End namespace messages
} // End namespace battleship

