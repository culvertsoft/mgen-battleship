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
		_m_map_isSet(false),
		_m_phase_isSet(false),
		_m_currentTeam_isSet(false),
		_m_timeLastMove_isSet(false) {
}

Game::Game(const std::vector<Player> & players, 
			const Map& map, 
			const Phase& phase, 
			const Team& currentTeam, 
			const double& timeLastMove) : 
		m_players(players),
		m_map(map),
		m_phase(phase),
		m_currentTeam(currentTeam),
		m_timeLastMove(timeLastMove),
		_m_players_isSet(true),
		_m_map_isSet(true),
		_m_phase_isSet(true),
		_m_currentTeam_isSet(true),
		_m_timeLastMove_isSet(true) {
}

Game::~Game() {
}

const std::vector<Player> & Game::getPlayers() const {
	return m_players;
}

const Map& Game::getMap() const {
	return m_map;
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

Map& Game::getMapMutable() {
	_m_map_isSet = true;
	return m_map;
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

Game& Game::setMap(const Map& map) {
	m_map = map;
	_m_map_isSet = true;
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

bool Game::hasMap() const {
	return _isMapSet(mgen::SHALLOW);
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

Game& Game::unsetMap() {
	_setMapSet(false, mgen::SHALLOW);
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
		 && _isMapSet(mgen::SHALLOW) == other._isMapSet(mgen::SHALLOW)
		 && _isPhaseSet(mgen::SHALLOW) == other._isPhaseSet(mgen::SHALLOW)
		 && _isCurrentTeamSet(mgen::SHALLOW) == other._isCurrentTeamSet(mgen::SHALLOW)
		 && _isTimeLastMoveSet(mgen::SHALLOW) == other._isTimeLastMoveSet(mgen::SHALLOW)
		 && getPlayers() == other.getPlayers()
		 && getMap() == other.getMap()
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
	case _field_map_id:
		return &_field_map_metadata();
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
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("players", &Game::_field_players_metadata())("map", &Game::_field_map_metadata())("phase", &Game::_field_phase_metadata())("currentTeam", &Game::_field_currentTeam_metadata())("timeLastMove", &Game::_field_timeLastMove_metadata());
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

Game& Game::_setMapSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_map._setAllFieldsSet(state, mgen::DEEP);
	_m_map_isSet = state;
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
	_setMapSet(state, depth);
	_setPhaseSet(state, depth);
	_setCurrentTeamSet(state, depth);
	_setTimeLastMoveSet(state, depth);
	return *this;
}

int Game::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPlayersSet(depth) ? 1 : 0;
	out += _isMapSet(depth) ? 1 : 0;
	out += _isPhaseSet(depth) ? 1 : 0;
	out += _isCurrentTeamSet(depth) ? 1 : 0;
	out += _isTimeLastMoveSet(depth) ? 1 : 0;
	return out;
}

bool Game::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_players_id):
			return _isPlayersSet(depth);
		case (_field_map_id):
			return _isMapSet(depth);
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

bool Game::_isMapSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_map_isSet;
	} else {
		return _m_map_isSet && mgen::validation::validateFieldDeep(getMap());
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
				&& (!_isMapSet(mgen::SHALLOW) || _isMapSet(mgen::DEEP));
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
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_players_metadata() << _field_map_metadata() << _field_phase_metadata() << _field_currentTeam_metadata() << _field_timeLastMove_metadata();
	return out;
}

const mgen::Field& Game::_field_players_metadata() {
	static const mgen::Field out(29583, "players");
	return out;
}

const mgen::Field& Game::_field_map_metadata() {
	static const mgen::Field out(21290, "map");
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

