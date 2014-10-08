/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/ShipPlacementReply.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

ShipPlacementReply::ShipPlacementReply() : 
		m_result(false),
		_m_result_isSet(false),
		_m_failReason_isSet(false) {
}

ShipPlacementReply::ShipPlacementReply(const bool& result, 
			const std::string& failReason) : 
		m_result(result),
		m_failReason(failReason),
		_m_result_isSet(true),
		_m_failReason_isSet(true) {
}

ShipPlacementReply::~ShipPlacementReply() {
}

const bool& ShipPlacementReply::getResult() const {
	return m_result;
}

const std::string& ShipPlacementReply::getFailReason() const {
	return m_failReason;
}

bool& ShipPlacementReply::getResultMutable() {
	_m_result_isSet = true;
	return m_result;
}

std::string& ShipPlacementReply::getFailReasonMutable() {
	_m_failReason_isSet = true;
	return m_failReason;
}

ShipPlacementReply& ShipPlacementReply::setResult(const bool& result) {
	m_result = result;
	_m_result_isSet = true;
	return *this;
}

ShipPlacementReply& ShipPlacementReply::setFailReason(const std::string& failReason) {
	m_failReason = failReason;
	_m_failReason_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool ShipPlacementReply::hasResult() const {
	return _isResultSet(mgen::SHALLOW);
}

bool ShipPlacementReply::hasFailReason() const {
	return _isFailReasonSet(mgen::SHALLOW);
}

ShipPlacementReply& ShipPlacementReply::unsetResult() {
	_setResultSet(false, mgen::SHALLOW);
	return *this;
}

ShipPlacementReply& ShipPlacementReply::unsetFailReason() {
	_setFailReasonSet(false, mgen::SHALLOW);
	return *this;
}

bool ShipPlacementReply::operator==(const ShipPlacementReply& other) const {
	return true
		 && _isResultSet(mgen::SHALLOW) == other._isResultSet(mgen::SHALLOW)
		 && _isFailReasonSet(mgen::SHALLOW) == other._isFailReasonSet(mgen::SHALLOW)
		 && getResult() == other.getResult()
		 && getFailReason() == other.getFailReason();
}

bool ShipPlacementReply::operator!=(const ShipPlacementReply& other) const {
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
		  
const mgen::Field * ShipPlacementReply::_fieldById(const short id) const {
	switch (id) {
	case _field_result_id:
		return &_field_result_metadata();
	case _field_failReason_id:
		return &_field_failReason_metadata();
	default:
		return 0;
	}
}

const mgen::Field * ShipPlacementReply::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("result", &ShipPlacementReply::_field_result_metadata())("failReason", &ShipPlacementReply::_field_failReason_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long ShipPlacementReply::_typeId() const {
	return _type_id;
}

const std::string& ShipPlacementReply::_typeName() const {
	return _type_name();
}

const short ShipPlacementReply::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& ShipPlacementReply::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& ShipPlacementReply::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& ShipPlacementReply::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& ShipPlacementReply::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& ShipPlacementReply::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& ShipPlacementReply::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& ShipPlacementReply::_fieldMetadatas() const {
	return _field_metadatas();
}

ShipPlacementReply& ShipPlacementReply::_setResultSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_result = false;
	_m_result_isSet = state;
	return *this;
}

ShipPlacementReply& ShipPlacementReply::_setFailReasonSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_failReason = "";
	_m_failReason_isSet = state;
	return *this;
}

ShipPlacementReply& ShipPlacementReply::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setResultSet(state, depth);
	_setFailReasonSet(state, depth);
	return *this;
}

int ShipPlacementReply::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isResultSet(depth) ? 1 : 0;
	out += _isFailReasonSet(depth) ? 1 : 0;
	return out;
}

bool ShipPlacementReply::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_result_id):
			return _isResultSet(depth);
		case (_field_failReason_id):
			return _isFailReasonSet(depth);
		default:
			return false;
	}
}

bool ShipPlacementReply::_isResultSet(const mgen::FieldSetDepth depth) const {
	return _m_result_isSet;
}

bool ShipPlacementReply::_isFailReasonSet(const mgen::FieldSetDepth depth) const {
	return _m_failReason_isSet;
}

bool ShipPlacementReply::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool ShipPlacementReply::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const ShipPlacementReply&>(other) == *this;
}

ShipPlacementReply * ShipPlacementReply::_deepCopy() const {
	return new ShipPlacementReply(*this);
}

mgen::MGenBase * ShipPlacementReply::_newInstance() {
	return new ShipPlacementReply;
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
		  
const std::string& ShipPlacementReply::_type_name() {
	static const std::string out("battleship.messages.ShipPlacementReply");
	return out;
}

const std::vector<long long>& ShipPlacementReply::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL << 7335008637833281350LL;
	return out;
}

const std::vector<short>& ShipPlacementReply::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460 << -31583;
	return out;
}

const std::vector<std::string>& ShipPlacementReply::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo" << "battleship.messages.ShipPlacementReply";
	return out;
}

const std::vector<std::string>& ShipPlacementReply::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw" << "hKE";
	return out;
}

const std::string& ShipPlacementReply::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCwhKE");
	return out;
}

const std::string& ShipPlacementReply::_type_id_16bit_base64() {
	static const std::string out("hKE");
	return out;
}

const std::vector<mgen::Field>& ShipPlacementReply::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_result_metadata() << _field_failReason_metadata();
	return out;
}

const mgen::Field& ShipPlacementReply::_field_result_metadata() {
	static const mgen::Field out(24642, "result");
	return out;
}

const mgen::Field& ShipPlacementReply::_field_failReason_metadata() {
	static const mgen::Field out(1610, "failReason");
	return out;
}

} // End namespace messages
} // End namespace battleship

