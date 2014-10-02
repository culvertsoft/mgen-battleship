/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "ClassRegistry.h"
#include "battleship/messages/Chat.cpp"
#include "battleship/messages/Fire.cpp"
#include "battleship/messages/PhaseChange.cpp"
#include "battleship/messages/Snapshot.cpp"
#include "battleship/state/Ship.cpp"
#include "battleship/state/Segment.cpp"
#include "battleship/state/Map.cpp"
#include "battleship/state/Player.cpp"
#include "battleship/state/Game.cpp"
#include "battleship/state/Vec2.cpp"
#include "battleship/state/Shot.cpp"
#include "battleship/state/Team.cpp"
#include "battleship/state/Phase.cpp"
#include "battleship/Dispatcher.cpp"
#include "battleship/Handler.cpp"

namespace battleship {

ClassRegistry::ClassRegistry() {
	add<battleship::messages::Chat>();
	add<battleship::messages::Fire>();
	add<battleship::messages::PhaseChange>();
	add<battleship::messages::Snapshot>();
	add<battleship::state::Ship>();
	add<battleship::state::Segment>();
	add<battleship::state::Map>();
	add<battleship::state::Player>();
	add<battleship::state::Game>();
	add<battleship::state::Vec2>();
	add<battleship::state::Shot>();
}

ClassRegistry::~ClassRegistry() {
}

const mgen::ClassRegistryEntry * battleship::ClassRegistry::getByIds(const std::vector<short>& ids) const {
	static const mgen::ClassRegistryEntry battleship_messages_Chat(battleship::messages::Chat::_type_ids(), battleship::messages::Chat::_type_name(), battleship::messages::Chat::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_Fire(battleship::messages::Fire::_type_ids(), battleship::messages::Fire::_type_name(), battleship::messages::Fire::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_PhaseChange(battleship::messages::PhaseChange::_type_ids(), battleship::messages::PhaseChange::_type_name(), battleship::messages::PhaseChange::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_Snapshot(battleship::messages::Snapshot::_type_ids(), battleship::messages::Snapshot::_type_name(), battleship::messages::Snapshot::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Ship(battleship::state::Ship::_type_ids(), battleship::state::Ship::_type_name(), battleship::state::Ship::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Segment(battleship::state::Segment::_type_ids(), battleship::state::Segment::_type_name(), battleship::state::Segment::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Map(battleship::state::Map::_type_ids(), battleship::state::Map::_type_name(), battleship::state::Map::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Player(battleship::state::Player::_type_ids(), battleship::state::Player::_type_name(), battleship::state::Player::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Game(battleship::state::Game::_type_ids(), battleship::state::Game::_type_name(), battleship::state::Game::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Vec2(battleship::state::Vec2::_type_ids(), battleship::state::Vec2::_type_name(), battleship::state::Vec2::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Shot(battleship::state::Shot::_type_ids(), battleship::state::Shot::_type_name(), battleship::state::Shot::_newInstance);

	std::size_t i = 0;
	switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
		case battleship::messages::Chat::_type_id_16bit:
			return &battleship_messages_Chat;
			break;
		case battleship::messages::Fire::_type_id_16bit:
			return &battleship_messages_Fire;
			break;
		case battleship::messages::PhaseChange::_type_id_16bit:
			return &battleship_messages_PhaseChange;
			break;
		case battleship::messages::Snapshot::_type_id_16bit:
			return &battleship_messages_Snapshot;
			break;
		case battleship::state::Ship::_type_id_16bit:
			return &battleship_state_Ship;
			break;
		case battleship::state::Segment::_type_id_16bit:
			return &battleship_state_Segment;
			break;
		case battleship::state::Map::_type_id_16bit:
			return &battleship_state_Map;
			break;
		case battleship::state::Player::_type_id_16bit:
			return &battleship_state_Player;
			break;
		case battleship::state::Game::_type_id_16bit:
			return &battleship_state_Game;
			break;
		case battleship::state::Vec2::_type_id_16bit:
			return &battleship_state_Vec2;
			break;
		case battleship::state::Shot::_type_id_16bit:
			return &battleship_state_Shot;
			break;
		default:
			return 0;
			break;
	}
	return 0;
}

} // End namespace battleship

