/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/messages/GameOver.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

GameOver::GameOver() : 
		m_winner(battleship::state::Team_UNKNOWN),
		_m_winner_isSet(false),
		_m_reason_isSet(false) {
}

GameOver::GameOver(const battleship::state::Phase& phase, 
			const battleship::state::Team& winner, 
			const std::string& reason) : 
		PhaseChange(phase),
		m_winner(winner),
		m_reason(reason),
		_m_winner_isSet(true),
		_m_reason_isSet(true) {
}

GameOver::~GameOver() {
}

const battleship::state::Team& GameOver::getWinner() const {
	return m_winner;
}

const std::string& GameOver::getReason() const {
	return m_reason;
}

battleship::state::Team& GameOver::getWinnerMutable() {
	_m_winner_isSet = true;
	return m_winner;
}

std::string& GameOver::getReasonMutable() {
	_m_reason_isSet = true;
	return m_reason;
}

GameOver& GameOver::setPhase(const battleship::state::Phase& phase) {
	PhaseChange::setPhase(phase);
	return *this;
}

GameOver& GameOver::setWinner(const battleship::state::Team& winner) {
	m_winner = winner;
	_m_winner_isSet = true;
	return *this;
}

GameOver& GameOver::setReason(const std::string& reason) {
	m_reason = reason;
	_m_reason_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool GameOver::hasWinner() const {
	return _isWinnerSet(mgen::SHALLOW);
}

bool GameOver::hasReason() const {
	return _isReasonSet(mgen::SHALLOW);
}

GameOver& GameOver::unsetPhase() {
	_setPhaseSet(false, mgen::SHALLOW);
	return *this;
}

GameOver& GameOver::unsetWinner() {
	_setWinnerSet(false, mgen::SHALLOW);
	return *this;
}

GameOver& GameOver::unsetReason() {
	_setReasonSet(false, mgen::SHALLOW);
	return *this;
}

bool GameOver::operator==(const GameOver& other) const {
	return true
		 && _isPhaseSet(mgen::SHALLOW) == other._isPhaseSet(mgen::SHALLOW)
		 && _isWinnerSet(mgen::SHALLOW) == other._isWinnerSet(mgen::SHALLOW)
		 && _isReasonSet(mgen::SHALLOW) == other._isReasonSet(mgen::SHALLOW)
		 && getPhase() == other.getPhase()
		 && getWinner() == other.getWinner()
		 && getReason() == other.getReason();
}

bool GameOver::operator!=(const GameOver& other) const {
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
		  
const mgen::Field * GameOver::_fieldById(const short id) const {
	switch (id) {
	case _field_phase_id:
		return &_field_phase_metadata();
	case _field_winner_id:
		return &_field_winner_metadata();
	case _field_reason_id:
		return &_field_reason_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GameOver::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("phase", &GameOver::_field_phase_metadata())("winner", &GameOver::_field_winner_metadata())("reason", &GameOver::_field_reason_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameOver::_typeId() const {
	return _type_id;
}

const std::string& GameOver::_typeName() const {
	return _type_name();
}

const short GameOver::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameOver::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameOver::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameOver::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameOver::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameOver::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameOver::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameOver::_fieldMetadatas() const {
	return _field_metadatas();
}

GameOver& GameOver::_setWinnerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_winner = battleship::state::Team_UNKNOWN;
	_m_winner_isSet = state;
	return *this;
}

GameOver& GameOver::_setReasonSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_reason = "";
	_m_reason_isSet = state;
	return *this;
}

GameOver& GameOver::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPhaseSet(state, depth);
	_setWinnerSet(state, depth);
	_setReasonSet(state, depth);
	return *this;
}

int GameOver::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPhaseSet(depth) ? 1 : 0;
	out += _isWinnerSet(depth) ? 1 : 0;
	out += _isReasonSet(depth) ? 1 : 0;
	return out;
}

bool GameOver::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_phase_id):
			return _isPhaseSet(depth);
		case (_field_winner_id):
			return _isWinnerSet(depth);
		case (_field_reason_id):
			return _isReasonSet(depth);
		default:
			return false;
	}
}

bool GameOver::_isWinnerSet(const mgen::FieldSetDepth depth) const {
	return _m_winner_isSet;
}

bool GameOver::_isReasonSet(const mgen::FieldSetDepth depth) const {
	return _m_reason_isSet;
}

bool GameOver::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool GameOver::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameOver&>(other) == *this;
}

GameOver * GameOver::_deepCopy() const {
	return new GameOver(*this);
}

mgen::MGenBase * GameOver::_newInstance() {
	return new GameOver;
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
		  
const std::string& GameOver::_type_name() {
	static const std::string out("battleship.messages.GameOver");
	return out;
}

const std::vector<long long>& GameOver::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5193397973584545788LL << 3660020118300555442LL << 6310518169450536016LL << 4978160568720679319LL;
	return out;
}

const std::vector<short>& GameOver::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 28358 << -21460 << -8601 << -2120;
	return out;
}

const std::vector<std::string>& GameOver::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.messages.Message" << "battleship.messages.GameInfo" << "battleship.messages.PhaseChange" << "battleship.messages.GameOver";
	return out;
}

const std::vector<std::string>& GameOver::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "bsY" << "rCw" << "3mc" << "97g";
	return out;
}

const std::string& GameOver::_type_ids_16bit_base64_string() {
	static const std::string out("bsYrCw3mc97g");
	return out;
}

const std::string& GameOver::_type_id_16bit_base64() {
	static const std::string out("97g");
	return out;
}

const std::vector<mgen::Field>& GameOver::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_phase_metadata() << _field_winner_metadata() << _field_reason_metadata();
	return out;
}

const mgen::Field& GameOver::_field_winner_metadata() {
	static const mgen::Field out(-7291, "winner");
	return out;
}

const mgen::Field& GameOver::_field_reason_metadata() {
	static const mgen::Field out(-15867, "reason");
	return out;
}

} // End namespace messages
} // End namespace battleship

