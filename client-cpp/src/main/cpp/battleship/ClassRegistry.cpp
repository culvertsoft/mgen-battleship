/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "ClassRegistry.h"
#include "battleship/messages/Connection.cpp"
#include "battleship/messages/GameInput.cpp"
#include "battleship/messages/GameInfo.cpp"
#include "battleship/messages/Chat.cpp"
#include "battleship/messages/Fire.cpp"
#include "battleship/messages/FireResult.cpp"
#include "battleship/messages/PhaseChange.cpp"
#include "battleship/messages/Snapshot.cpp"
#include "battleship/messages/Login.cpp"
#include "battleship/messages/LoginReply.cpp"
#include "battleship/messages/NextTurn.cpp"
#include "battleship/messages/Resign.cpp"
#include "battleship/messages/GameOver.cpp"
#include "battleship/messages/TeamSelect.cpp"
#include "battleship/messages/TeamSelectReply.cpp"
#include "battleship/messages/Message.cpp"
#include "battleship/messages/ShipPlacement.cpp"
#include "battleship/messages/ShipPlacementReply.cpp"
#include "battleship/messages/ShipSunk.cpp"
#include "battleship/messages/PlayerJoined.cpp"
#include "battleship/messages/PlayerChangedTeam.cpp"
#include "battleship/messages/IncorrectUsage.cpp"
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
	add<battleship::messages::Connection>();
	add<battleship::messages::GameInput>();
	add<battleship::messages::GameInfo>();
	add<battleship::messages::Chat>();
	add<battleship::messages::Fire>();
	add<battleship::messages::FireResult>();
	add<battleship::messages::PhaseChange>();
	add<battleship::messages::Snapshot>();
	add<battleship::messages::Login>();
	add<battleship::messages::LoginReply>();
	add<battleship::messages::NextTurn>();
	add<battleship::messages::Resign>();
	add<battleship::messages::GameOver>();
	add<battleship::messages::TeamSelect>();
	add<battleship::messages::TeamSelectReply>();
	add<battleship::messages::Message>();
	add<battleship::messages::ShipPlacement>();
	add<battleship::messages::ShipPlacementReply>();
	add<battleship::messages::ShipSunk>();
	add<battleship::messages::PlayerJoined>();
	add<battleship::messages::PlayerChangedTeam>();
	add<battleship::messages::IncorrectUsage>();
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
	static const mgen::ClassRegistryEntry battleship_messages_Connection(battleship::messages::Connection::_type_ids(), battleship::messages::Connection::_type_name(), battleship::messages::Connection::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_GameInput(battleship::messages::GameInput::_type_ids(), battleship::messages::GameInput::_type_name(), battleship::messages::GameInput::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_GameInfo(battleship::messages::GameInfo::_type_ids(), battleship::messages::GameInfo::_type_name(), battleship::messages::GameInfo::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_Chat(battleship::messages::Chat::_type_ids(), battleship::messages::Chat::_type_name(), battleship::messages::Chat::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_Fire(battleship::messages::Fire::_type_ids(), battleship::messages::Fire::_type_name(), battleship::messages::Fire::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_FireResult(battleship::messages::FireResult::_type_ids(), battleship::messages::FireResult::_type_name(), battleship::messages::FireResult::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_PhaseChange(battleship::messages::PhaseChange::_type_ids(), battleship::messages::PhaseChange::_type_name(), battleship::messages::PhaseChange::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_Snapshot(battleship::messages::Snapshot::_type_ids(), battleship::messages::Snapshot::_type_name(), battleship::messages::Snapshot::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_Login(battleship::messages::Login::_type_ids(), battleship::messages::Login::_type_name(), battleship::messages::Login::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_LoginReply(battleship::messages::LoginReply::_type_ids(), battleship::messages::LoginReply::_type_name(), battleship::messages::LoginReply::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_NextTurn(battleship::messages::NextTurn::_type_ids(), battleship::messages::NextTurn::_type_name(), battleship::messages::NextTurn::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_Resign(battleship::messages::Resign::_type_ids(), battleship::messages::Resign::_type_name(), battleship::messages::Resign::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_GameOver(battleship::messages::GameOver::_type_ids(), battleship::messages::GameOver::_type_name(), battleship::messages::GameOver::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_TeamSelect(battleship::messages::TeamSelect::_type_ids(), battleship::messages::TeamSelect::_type_name(), battleship::messages::TeamSelect::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_TeamSelectReply(battleship::messages::TeamSelectReply::_type_ids(), battleship::messages::TeamSelectReply::_type_name(), battleship::messages::TeamSelectReply::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_Message(battleship::messages::Message::_type_ids(), battleship::messages::Message::_type_name(), battleship::messages::Message::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_ShipPlacement(battleship::messages::ShipPlacement::_type_ids(), battleship::messages::ShipPlacement::_type_name(), battleship::messages::ShipPlacement::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_ShipPlacementReply(battleship::messages::ShipPlacementReply::_type_ids(), battleship::messages::ShipPlacementReply::_type_name(), battleship::messages::ShipPlacementReply::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_ShipSunk(battleship::messages::ShipSunk::_type_ids(), battleship::messages::ShipSunk::_type_name(), battleship::messages::ShipSunk::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_PlayerJoined(battleship::messages::PlayerJoined::_type_ids(), battleship::messages::PlayerJoined::_type_name(), battleship::messages::PlayerJoined::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_PlayerChangedTeam(battleship::messages::PlayerChangedTeam::_type_ids(), battleship::messages::PlayerChangedTeam::_type_name(), battleship::messages::PlayerChangedTeam::_newInstance);
	static const mgen::ClassRegistryEntry battleship_messages_IncorrectUsage(battleship::messages::IncorrectUsage::_type_ids(), battleship::messages::IncorrectUsage::_type_name(), battleship::messages::IncorrectUsage::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Ship(battleship::state::Ship::_type_ids(), battleship::state::Ship::_type_name(), battleship::state::Ship::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Segment(battleship::state::Segment::_type_ids(), battleship::state::Segment::_type_name(), battleship::state::Segment::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Map(battleship::state::Map::_type_ids(), battleship::state::Map::_type_name(), battleship::state::Map::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Player(battleship::state::Player::_type_ids(), battleship::state::Player::_type_name(), battleship::state::Player::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Game(battleship::state::Game::_type_ids(), battleship::state::Game::_type_name(), battleship::state::Game::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Vec2(battleship::state::Vec2::_type_ids(), battleship::state::Vec2::_type_name(), battleship::state::Vec2::_newInstance);
	static const mgen::ClassRegistryEntry battleship_state_Shot(battleship::state::Shot::_type_ids(), battleship::state::Shot::_type_name(), battleship::state::Shot::_newInstance);

	std::size_t i = 0;
	switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
		case battleship::messages::Message::_type_id_16bit:
			switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
				case battleship::messages::Connection::_type_id_16bit:
					switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
						case battleship::messages::Chat::_type_id_16bit:
							return &battleship_messages_Chat;
							break;
						case battleship::messages::Login::_type_id_16bit:
							return &battleship_messages_Login;
							break;
						case battleship::messages::LoginReply::_type_id_16bit:
							return &battleship_messages_LoginReply;
							break;
						case battleship::messages::TeamSelect::_type_id_16bit:
							return &battleship_messages_TeamSelect;
							break;
						case battleship::messages::TeamSelectReply::_type_id_16bit:
							return &battleship_messages_TeamSelectReply;
							break;
						case battleship::messages::PlayerJoined::_type_id_16bit:
							return &battleship_messages_PlayerJoined;
							break;
						case battleship::messages::PlayerChangedTeam::_type_id_16bit:
							return &battleship_messages_PlayerChangedTeam;
							break;
						default:
							return &battleship_messages_Connection;
							break;
					}
					break;
				case battleship::messages::GameInput::_type_id_16bit:
					switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
						case battleship::messages::Fire::_type_id_16bit:
							return &battleship_messages_Fire;
							break;
						case battleship::messages::Resign::_type_id_16bit:
							return &battleship_messages_Resign;
							break;
						case battleship::messages::ShipPlacement::_type_id_16bit:
							return &battleship_messages_ShipPlacement;
							break;
						default:
							return &battleship_messages_GameInput;
							break;
					}
					break;
				case battleship::messages::GameInfo::_type_id_16bit:
					switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
						case battleship::messages::FireResult::_type_id_16bit:
							return &battleship_messages_FireResult;
							break;
						case battleship::messages::PhaseChange::_type_id_16bit:
							return &battleship_messages_PhaseChange;
							break;
						case battleship::messages::Snapshot::_type_id_16bit:
							return &battleship_messages_Snapshot;
							break;
						case battleship::messages::NextTurn::_type_id_16bit:
							return &battleship_messages_NextTurn;
							break;
						case battleship::messages::GameOver::_type_id_16bit:
							return &battleship_messages_GameOver;
							break;
						case battleship::messages::ShipPlacementReply::_type_id_16bit:
							return &battleship_messages_ShipPlacementReply;
							break;
						case battleship::messages::ShipSunk::_type_id_16bit:
							return &battleship_messages_ShipSunk;
							break;
						case battleship::messages::IncorrectUsage::_type_id_16bit:
							return &battleship_messages_IncorrectUsage;
							break;
						default:
							return &battleship_messages_GameInfo;
							break;
					}
					break;
				default:
					return &battleship_messages_Message;
					break;
			}
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

