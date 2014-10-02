/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Dispatcher.h"
#include "ClassRegistry.h"

namespace battleship {

void dispatch(mgen::MGenBase& object, battleship::Handler& handler) {
	const std::vector<short>& ids = object._typeIds16Bit();
	std::size_t i = 0;
	switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
		case battleship::messages::Chat::_type_id_16bit:
			handler.handle(static_cast<battleship::messages::Chat&>(object));
			break;
		case battleship::messages::Fire::_type_id_16bit:
			handler.handle(static_cast<battleship::messages::Fire&>(object));
			break;
		case battleship::messages::PhaseChange::_type_id_16bit:
			handler.handle(static_cast<battleship::messages::PhaseChange&>(object));
			break;
		case battleship::messages::Snapshot::_type_id_16bit:
			handler.handle(static_cast<battleship::messages::Snapshot&>(object));
			break;
		case battleship::state::Ship::_type_id_16bit:
			handler.handle(static_cast<battleship::state::Ship&>(object));
			break;
		case battleship::state::Segment::_type_id_16bit:
			handler.handle(static_cast<battleship::state::Segment&>(object));
			break;
		case battleship::state::Map::_type_id_16bit:
			handler.handle(static_cast<battleship::state::Map&>(object));
			break;
		case battleship::state::Player::_type_id_16bit:
			handler.handle(static_cast<battleship::state::Player&>(object));
			break;
		case battleship::state::Game::_type_id_16bit:
			handler.handle(static_cast<battleship::state::Game&>(object));
			break;
		case battleship::state::Vec2::_type_id_16bit:
			handler.handle(static_cast<battleship::state::Vec2&>(object));
			break;
		default:
			handler.handleUnknown(object);
			break;
	}
}

} // End namespace battleship

