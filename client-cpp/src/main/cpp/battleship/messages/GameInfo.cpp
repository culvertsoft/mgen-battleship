/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/GameInfo.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

GameInfo::GameInfo() {
}

GameInfo::~GameInfo() {
}

/* custom_methods_begin *//* custom_methods_end */

bool GameInfo::operator==(const GameInfo& other) const {
	return true;
}

bool GameInfo::operator!=(const GameInfo& other) const {
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
		  
const mgen::Field * GameInfo::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * GameInfo::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameInfo::_typeId() const {
	return _type_id;
}

const std::string& GameInfo::_typeName() const {
	return _type_name();
}

const short GameInfo::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameInfo::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameInfo::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameInfo::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameInfo::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameInfo::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameInfo::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameInfo::_fieldMetadatas() const {
	return _field_metadatas();
}

GameInfo& GameInfo::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int GameInfo::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool GameInfo::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool GameInfo::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool GameInfo::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameInfo&>(other) == *this;
}

GameInfo * GameInfo::_deepCopy() const {
	return new GameInfo(*this);
}

mgen::MGenBase * GameInfo::_newInstance() {
	return new GameInfo;
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
		  
const std::string& GameInfo::_type_name() {
	static const std::string out("battleship.messages.GameInfo");
	return out;
}

const std::vector<long long>& GameInfo::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL;
	return out;
}

const std::vector<short>& GameInfo::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460;
	return out;
}

const std::vector<std::string>& GameInfo::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo";
	return out;
}

const std::vector<std::string>& GameInfo::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw";
	return out;
}

const std::string& GameInfo::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCw");
	return out;
}

const std::string& GameInfo::_type_id_16bit_base64() {
	static const std::string out("rCw");
	return out;
}

const std::vector<mgen::Field>& GameInfo::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace messages
} // End namespace battleship

