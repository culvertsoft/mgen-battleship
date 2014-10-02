/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "battleship/state/Game.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace state {

Game::Game() : 
		m_phase(Phase_UNKNOWN),
		m_currentTeam(Team_UNKNOWN),
		m_timeLastMove(0.0),
		_m_players_isSet(false),
		_m_redMap_isSet(false),
		_m_blueMap_isSet(false),
		_m_phase_isSet(false),
		_m_currentTeam_isSet(false),
		_m_timeLastMove_isSet(false) {
}

Game::Game(const std::vector<Player> & players, 
			const Map& redMap, 
			const Map& blueMap, 
			const Phase& phase, 
			const Team& currentTeam, 
			const double& timeLastMove) : 
		m_players(players),
		m_redMap(redMap),
		m_blueMap(blueMap),
		m_phase(phase),
		m_currentTeam(currentTeam),
		m_timeLastMove(timeLastMove),
		_m_players_isSet(true),
		_m_redMap_isSet(true),
		_m_blueMap_isSet(true),
		_m_phase_isSet(true),
		_m_currentTeam_isSet(true),
		_m_timeLastMove_isSet(true) {
}

Game::~Game() {
}

const std::vector<Player> & Game::getPlayers() const {
	return m_players;
}

const Map& Game::getRedMap() const {
	return m_redMap;
}

const Map& Game::getBlueMap() const {
	return m_blueMap;
}

const Phase& Game::getPhase() const {
	return m_phase;
}

const Team& Game::getCurrentTeam() const {
	return m_currentTeam;
}

const double& Game::getTimeLastMove() const {
	return m_timeLastMove;
}

std::vector<Player> & Game::getPlayersMutable() {
	_m_players_isSet = true;
	return m_players;
}

Map& Game::getRedMapMutable() {
	_m_redMap_isSet = true;
	return m_redMap;
}

Map& Game::getBlueMapMutable() {
	_m_blueMap_isSet = true;
	return m_blueMap;
}

Phase& Game::getPhaseMutable() {
	_m_phase_isSet = true;
	return m_phase;
}

Team& Game::getCurrentTeamMutable() {
	_m_currentTeam_isSet = true;
	return m_currentTeam;
}

double& Game::getTimeLastMoveMutable() {
	_m_timeLastMove_isSet = true;
	return m_timeLastMove;
}

Game& Game::setPlayers(const std::vector<Player> & players) {
	m_players = players;
	_m_players_isSet = true;
	return *this;
}

Game& Game::setRedMap(const Map& redMap) {
	m_redMap = redMap;
	_m_redMap_isSet = true;
	return *this;
}

Game& Game::setBlueMap(const Map& blueMap) {
	m_blueMap = blueMap;
	_m_blueMap_isSet = true;
	return *this;
}

Game& Game::setPhase(const Phase& phase) {
	m_phase = phase;
	_m_phase_isSet = true;
	return *this;
}

Game& Game::setCurrentTeam(const Team& currentTeam) {
	m_currentTeam = currentTeam;
	_m_currentTeam_isSet = true;
	return *this;
}

Game& Game::setTimeLastMove(const double& timeLastMove) {
	m_timeLastMove = timeLastMove;
	_m_timeLastMove_isSet = true;
	return *this;
}

/*custom_methods_begin*//*custom_methods_end*/

bool Game::hasPlayers() const {
	return _isPlayersSet(mgen::SHALLOW);
}

bool Game::hasRedMap() const {
	return _isRedMapSet(mgen::SHALLOW);
}

bool Game::hasBlueMap() const {
	return _isBlueMapSet(mgen::SHALLOW);
}

bool Game::hasPhase() const {
	return _isPhaseSet(mgen::SHALLOW);
}

bool Game::hasCurrentTeam() const {
	return _isCurrentTeamSet(mgen::SHALLOW);
}

bool Game::hasTimeLastMove() const {
	return _isTimeLastMoveSet(mgen::SHALLOW);
}

Game& Game::unsetPlayers() {
	_setPlayersSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetRedMap() {
	_setRedMapSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetBlueMap() {
	_setBlueMapSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetPhase() {
	_setPhaseSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetCurrentTeam() {
	_setCurrentTeamSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetTimeLastMove() {
	_setTimeLastMoveSet(false, mgen::SHALLOW);
	return *this;
}

bool Game::operator==(const Game& other) const {
	return true
		 && _isPlayersSet(mgen::SHALLOW) == other._isPlayersSet(mgen::SHALLOW)
		 && _isRedMapSet(mgen::SHALLOW) == other._isRedMapSet(mgen::SHALLOW)
		 && _isBlueMapSet(mgen::SHALLOW) == other._isBlueMapSet(mgen::SHALLOW)
		 && _isPhaseSet(mgen::SHALLOW) == other._isPhaseSet(mgen::SHALLOW)
		 && _isCurrentTeamSet(mgen::SHALLOW) == other._isCurrentTeamSet(mgen::SHALLOW)
		 && _isTimeLastMoveSet(mgen::SHALLOW) == other._isTimeLastMoveSet(mgen::SHALLOW)
		 && getPlayers() == other.getPlayers()
		 && getRedMap() == other.getRedMap()
		 && getBlueMap() == other.getBlueMap()
		 && getPhase() == other.getPhase()
		 && getCurrentTeam() == other.getCurrentTeam()
		 && getTimeLastMove() == other.getTimeLastMove();
}

bool Game::operator!=(const Game& other) const {
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
		  
const mgen::Field * Game::_fieldById(const short id) const {
	switch (id) {
	case _field_players_id:
		return &_field_players_metadata();
	case _field_redMap_id:
		return &_field_redMap_metadata();
	case _field_blueMap_id:
		return &_field_blueMap_metadata();
	case _field_phase_id:
		return &_field_phase_metadata();
	case _field_currentTeam_id:
		return &_field_currentTeam_metadata();
	case _field_timeLastMove_id:
		return &_field_timeLastMove_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Game::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("players", &Game::_field_players_metadata())("redMap", &Game::_field_redMap_metadata())("blueMap", &Game::_field_blueMap_metadata())("phase", &Game::_field_phase_metadata())("currentTeam", &Game::_field_currentTeam_metadata())("timeLastMove", &Game::_field_timeLastMove_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Game::_typeId() const {
	return _type_id;
}

const std::string& Game::_typeName() const {
	return _type_name();
}

const short Game::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Game::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Game::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Game::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Game::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Game::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Game::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Game::_fieldMetadatas() const {
	return _field_metadatas();
}

Game& Game::_setPlayersSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_players.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_players);
	_m_players_isSet = state;
	return *this;
}

Game& Game::_setRedMapSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_redMap._setAllFieldsSet(state, mgen::DEEP);
	_m_redMap_isSet = state;
	return *this;
}

Game& Game::_setBlueMapSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_blueMap._setAllFieldsSet(state, mgen::DEEP);
	_m_blueMap_isSet = state;
	return *this;
}

Game& Game::_setPhaseSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_phase = Phase_UNKNOWN;
	_m_phase_isSet = state;
	return *this;
}

Game& Game::_setCurrentTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_currentTeam = Team_UNKNOWN;
	_m_currentTeam_isSet = state;
	return *this;
}

Game& Game::_setTimeLastMoveSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_timeLastMove = 0.0;
	_m_timeLastMove_isSet = state;
	return *this;
}

Game& Game::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPlayersSet(state, depth);
	_setRedMapSet(state, depth);
	_setBlueMapSet(state, depth);
	_setPhaseSet(state, depth);
	_setCurrentTeamSet(state, depth);
	_setTimeLastMoveSet(state, depth);
	return *this;
}

int Game::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPlayersSet(depth) ? 1 : 0;
	out += _isRedMapSet(depth) ? 1 : 0;
	out += _isBlueMapSet(depth) ? 1 : 0;
	out += _isPhaseSet(depth) ? 1 : 0;
	out += _isCurrentTeamSet(depth) ? 1 : 0;
	out += _isTimeLastMoveSet(depth) ? 1 : 0;
	return out;
}

bool Game::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_players_id):
			return _isPlayersSet(depth);
		case (_field_redMap_id):
			return _isRedMapSet(depth);
		case (_field_blueMap_id):
			return _isBlueMapSet(depth);
		case (_field_phase_id):
			return _isPhaseSet(depth);
		case (_field_currentTeam_id):
			return _isCurrentTeamSet(depth);
		case (_field_timeLastMove_id):
			return _isTimeLastMoveSet(depth);
		default:
			return false;
	}
}

bool Game::_isPlayersSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_players_isSet;
	} else {
		return _m_players_isSet && mgen::validation::validateFieldDeep(getPlayers());
	}
}

bool Game::_isRedMapSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_redMap_isSet;
	} else {
		return _m_redMap_isSet && mgen::validation::validateFieldDeep(getRedMap());
	}
}

bool Game::_isBlueMapSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_blueMap_isSet;
	} else {
		return _m_blueMap_isSet && mgen::validation::validateFieldDeep(getBlueMap());
	}
}

bool Game::_isPhaseSet(const mgen::FieldSetDepth depth) const {
	return _m_phase_isSet;
}

bool Game::_isCurrentTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_currentTeam_isSet;
}

bool Game::_isTimeLastMoveSet(const mgen::FieldSetDepth depth) const {
	return _m_timeLastMove_isSet;
}

bool Game::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPlayersSet(mgen::SHALLOW) || _isPlayersSet(mgen::DEEP))
				&& (!_isRedMapSet(mgen::SHALLOW) || _isRedMapSet(mgen::DEEP))
				&& (!_isBlueMapSet(mgen::SHALLOW) || _isBlueMapSet(mgen::DEEP));
	}
}

bool Game::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Game&>(other) == *this;
}

Game * Game::_deepCopy() const {
	return new Game(*this);
}

mgen::MGenBase * Game::_newInstance() {
	return new Game;
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
		  
const std::string& Game::_type_name() {
	static const std::string out("battleship.state.Game");
	return out;
}

const std::vector<long long>& Game::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1644051945579161717LL;
	return out;
}

const std::vector<short>& Game::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -20523;
	return out;
}

const std::vector<std::string>& Game::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "battleship.state.Game";
	return out;
}

const std::vector<std::string>& Game::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "r9U";
	return out;
}

const std::string& Game::_type_ids_16bit_base64_string() {
	static const std::string out("r9U");
	return out;
}

const std::string& Game::_type_id_16bit_base64() {
	static const std::string out("r9U");
	return out;
}

const std::vector<mgen::Field>& Game::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_players_metadata() << _field_redMap_metadata() << _field_blueMap_metadata() << _field_phase_metadata() << _field_currentTeam_metadata() << _field_timeLastMove_metadata();
	return out;
}

const mgen::Field& Game::_field_players_metadata() {
	static const mgen::Field out(29583, "players");
	return out;
}

const mgen::Field& Game::_field_redMap_metadata() {
	static const mgen::Field out(21290, "redMap");
	return out;
}

const mgen::Field& Game::_field_blueMap_metadata() {
	static const mgen::Field out(-19206, "blueMap");
	return out;
}

const mgen::Field& Game::_field_phase_metadata() {
	static const mgen::Field out(7625, "phase");
	return out;
}

const mgen::Field& Game::_field_currentTeam_metadata() {
	static const mgen::Field out(-14726, "currentTeam");
	return out;
}

const mgen::Field& Game::_field_timeLastMove_metadata() {
	static const mgen::Field out(22636, "timeLastMove");
	return out;
}

} // End namespace state
} // End namespace battleship

