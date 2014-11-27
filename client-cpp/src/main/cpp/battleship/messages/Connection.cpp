/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-12 20:36:02 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/Connection.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

Connection::Connection() {
}

Connection::~Connection() {
}

/* custom_methods_begin *//* custom_methods_end */

bool Connection::operator==(const Connection& other) const {
	return true;
}

bool Connection::operator!=(const Connection& other) const {
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
		  
const mgen::Field * Connection::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * Connection::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Connection::_typeId() const {
	return _type_id;
}

const std::string& Connection::_typeName() const {
	return _type_name();
}

const short Connection::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Connection::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Connection::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Connection::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Connection::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Connection::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Connection::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Connection::_fieldMetadatas() const {
	return _field_metadatas();
}

Connection& Connection::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int Connection::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool Connection::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool Connection::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool Connection::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Connection&>(other) == *this;
}

Connection * Connection::_deepCopy() const {
	return new Connection(*this);
}

mgen::MGenBase * Connection::_newInstance() {
	return new Connection;
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
		  
const std::string& Connection::_type_name() {
	static const std::string out("battleship.messages.Connection");
	return out;
}

const std::vector<long long>& Connection::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 7755333223434470491LL;
	return out;
}

const std::vector<short>& Connection::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 11623;
	return out;
}

const std::vector<std::string>& Connection::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.Connection";
	return out;
}

const std::vector<std::string>& Connection::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "LWc";
	return out;
}

const std::string& Connection::_type_ids_16bit_base64_string() {
	static const std::string out("bsYLWc");
	return out;
}

const std::string& Connection::_type_id_16bit_base64() {
	static const std::string out("LWc");
	return out;
}

const std::vector<mgen::Field>& Connection::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace messages
} // End namespace battleship

