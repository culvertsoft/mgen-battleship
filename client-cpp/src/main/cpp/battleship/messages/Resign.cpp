/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/Resign.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

Resign::Resign() {
}

Resign::~Resign() {
}

/*custom_methods_begin*//*custom_methods_end*/

bool Resign::operator==(const Resign& other) const {
	return true;
}

bool Resign::operator!=(const Resign& other) const {
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
		  
const mgen::Field * Resign::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * Resign::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Resign::_typeId() const {
	return _type_id;
}

const std::string& Resign::_typeName() const {
	return _type_name();
}

const short Resign::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Resign::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Resign::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Resign::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Resign::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Resign::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Resign::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Resign::_fieldMetadatas() const {
	return _field_metadatas();
}

Resign& Resign::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int Resign::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool Resign::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool Resign::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool Resign::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Resign&>(other) == *this;
}

Resign * Resign::_deepCopy() const {
	return new Resign(*this);
}

mgen::MGenBase * Resign::_newInstance() {
	return new Resign;
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
		  
const std::string& Resign::_type_name() {
	static const std::string out("battleship.messages.Resign");
	return out;
}

const std::vector<long long>& Resign::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 20544504380178079LL << 2326114317782751943LL;
	return out;
}

const std::vector<short>& Resign::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 31502 << 932;
	return out;
}

const std::vector<std::string>& Resign::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInput" << "battleship.messages.Resign";
	return out;
}

const std::vector<std::string>& Resign::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "ew4" << "A6Q";
	return out;
}

const std::string& Resign::_type_ids_16bit_base64_string() {
	static const std::string out("bsYew4A6Q");
	return out;
}

const std::string& Resign::_type_id_16bit_base64() {
	static const std::string out("A6Q");
	return out;
}

const std::vector<mgen::Field>& Resign::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace messages
} // End namespace battleship

