/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-12 20:36:02 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/GameInput.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

GameInput::GameInput() {
}

GameInput::~GameInput() {
}

/* custom_methods_begin *//* custom_methods_end */

bool GameInput::operator==(const GameInput& other) const {
	return true;
}

bool GameInput::operator!=(const GameInput& other) const {
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
		  
const mgen::Field * GameInput::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * GameInput::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameInput::_typeId() const {
	return _type_id;
}

const std::string& GameInput::_typeName() const {
	return _type_name();
}

const short GameInput::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameInput::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameInput::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameInput::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameInput::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameInput::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameInput::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameInput::_fieldMetadatas() const {
	return _field_metadatas();
}

GameInput& GameInput::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int GameInput::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool GameInput::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool GameInput::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool GameInput::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameInput&>(other) == *this;
}

GameInput * GameInput::_deepCopy() const {
	return new GameInput(*this);
}

mgen::MGenBase * GameInput::_newInstance() {
	return new GameInput;
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
		  
const std::string& GameInput::_type_name() {
	static const std::string out("battleship.messages.GameInput");
	return out;
}

const std::vector<long long>& GameInput::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 20544504380178079LL;
	return out;
}

const std::vector<short>& GameInput::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << 31502;
	return out;
}

const std::vector<std::string>& GameInput::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInput";
	return out;
}

const std::vector<std::string>& GameInput::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "ew4";
	return out;
}

const std::string& GameInput::_type_ids_16bit_base64_string() {
	static const std::string out("bsYew4");
	return out;
}

const std::string& GameInput::_type_id_16bit_base64() {
	static const std::string out("ew4");
	return out;
}

const std::vector<mgen::Field>& GameInput::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace messages
} // End namespace battleship

