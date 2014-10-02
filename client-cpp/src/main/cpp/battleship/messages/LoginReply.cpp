/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
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
		_m_uuid_isSet(false) {
}

LoginReply::LoginReply(const std::string& uuid) : 
		m_uuid(uuid),
		_m_uuid_isSet(true) {
}

LoginReply::~LoginReply() {
}

const std::string& LoginReply::getUuid() const {
	return m_uuid;
}

std::string& LoginReply::getUuidMutable() {
	_m_uuid_isSet = true;
	return m_uuid;
}

LoginReply& LoginReply::setUuid(const std::string& uuid) {
	m_uuid = uuid;
	_m_uuid_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool LoginReply::hasUuid() const {
	return _isUuidSet(mgen::SHALLOW);
}

LoginReply& LoginReply::unsetUuid() {
	_setUuidSet(false, mgen::SHALLOW);
	return *this;
}

bool LoginReply::operator==(const LoginReply& other) const {
	return true
		 && _isUuidSet(mgen::SHALLOW) == other._isUuidSet(mgen::SHALLOW)
		 && getUuid() == other.getUuid();
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
	default:
		return 0;
	}
}

const mgen::Field * LoginReply::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("uuid", &LoginReply::_field_uuid_metadata());
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

LoginReply& LoginReply::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setUuidSet(state, depth);
	return *this;
}

int LoginReply::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isUuidSet(depth) ? 1 : 0;
	return out;
}

bool LoginReply::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_uuid_id):
			return _isUuidSet(depth);
		default:
			return false;
	}
}

bool LoginReply::_isUuidSet(const mgen::FieldSetDepth depth) const {
	return _m_uuid_isSet;
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
	static const std::vector<long long> out = mgen::make_vector<long long>() << 7755333223434470491LL << 1638563683387667720LL;
	return out;
}

const std::vector<short>& LoginReply::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 11623 << -9758;
	return out;
}

const std::vector<std::string>& LoginReply::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Connection" << "battleship.messages.LoginReply";
	return out;
}

const std::vector<std::string>& LoginReply::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "LWc" << "2eI";
	return out;
}

const std::string& LoginReply::_type_ids_16bit_base64_string() {
	static const std::string out("LWc2eI");
	return out;
}

const std::string& LoginReply::_type_id_16bit_base64() {
	static const std::string out("2eI");
	return out;
}

const std::vector<mgen::Field>& LoginReply::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_uuid_metadata();
	return out;
}

const mgen::Field& LoginReply::_field_uuid_metadata() {
	static const mgen::Field out(-11112, "uuid");
	return out;
}

} // End namespace messages
} // End namespace battleship

