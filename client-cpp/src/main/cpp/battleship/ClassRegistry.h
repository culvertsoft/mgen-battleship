/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_CLASSREGISTRY
#define BATTLESHIP_CLASSREGISTRY

#include "mgen/classes/ClassRegistryBase.h"
#include "battleship/messages/Connection.h"
#include "battleship/messages/GameInput.h"
#include "battleship/messages/GameInfo.h"
#include "battleship/messages/Chat.h"
#include "battleship/messages/Fire.h"
#include "battleship/messages/FireResult.h"
#include "battleship/messages/PhaseChange.h"
#include "battleship/messages/Snapshot.h"
#include "battleship/messages/Login.h"
#include "battleship/messages/LoginReply.h"
#include "battleship/messages/NextTurn.h"
#include "battleship/messages/Resign.h"
#include "battleship/messages/GameOver.h"
#include "battleship/messages/TeamSelect.h"
#include "battleship/messages/TeamSelectReply.h"
#include "battleship/messages/Message.h"
#include "battleship/messages/ShipPlacement.h"
#include "battleship/messages/ShipPlacementReply.h"
#include "battleship/messages/ShipSunk.h"
#include "battleship/messages/SetReady.h"
#include "battleship/messages/PlayerJoined.h"
#include "battleship/messages/PlayerChangedTeam.h"
#include "battleship/messages/IncorrectUsage.h"
#include "battleship/state/Ship.h"
#include "battleship/state/Segment.h"
#include "battleship/state/Map.h"
#include "battleship/state/Player.h"
#include "battleship/state/Game.h"
#include "battleship/state/Vec2.h"
#include "battleship/state/Shot.h"

namespace battleship {

class ClassRegistry : public mgen::ClassRegistryBase  {
public:

	ClassRegistry();
	virtual ~ClassRegistry();

	template<typename ContextType, typename ReaderType>
	void readObjectFields(mgen::MGenBase& o, ContextType& context, ReaderType& reader) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case battleship::messages::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case battleship::messages::Connection::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::Chat::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::Chat&>(o), context);
								break;
							case battleship::messages::Login::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::Login&>(o), context);
								break;
							case battleship::messages::LoginReply::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::LoginReply&>(o), context);
								break;
							case battleship::messages::TeamSelect::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::TeamSelect&>(o), context);
								break;
							case battleship::messages::TeamSelectReply::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::TeamSelectReply&>(o), context);
								break;
							case battleship::messages::SetReady::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::SetReady&>(o), context);
								break;
							case battleship::messages::PlayerJoined::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::PlayerJoined&>(o), context);
								break;
							case battleship::messages::PlayerChangedTeam::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::PlayerChangedTeam&>(o), context);
								break;
							default:
								reader.readFields(static_cast<battleship::messages::Connection&>(o), context);
								break;
						}
						break;
					case battleship::messages::GameInput::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::Fire::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::Fire&>(o), context);
								break;
							case battleship::messages::Resign::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::Resign&>(o), context);
								break;
							case battleship::messages::ShipPlacement::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::ShipPlacement&>(o), context);
								break;
							default:
								reader.readFields(static_cast<battleship::messages::GameInput&>(o), context);
								break;
						}
						break;
					case battleship::messages::GameInfo::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::FireResult::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::FireResult&>(o), context);
								break;
							case battleship::messages::PhaseChange::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case battleship::messages::GameOver::_type_id_16bit:
										reader.readFields(static_cast<battleship::messages::GameOver&>(o), context);
										break;
									default:
										reader.readFields(static_cast<battleship::messages::PhaseChange&>(o), context);
										break;
								}
								break;
							case battleship::messages::Snapshot::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::Snapshot&>(o), context);
								break;
							case battleship::messages::NextTurn::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::NextTurn&>(o), context);
								break;
							case battleship::messages::ShipPlacementReply::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::ShipPlacementReply&>(o), context);
								break;
							case battleship::messages::ShipSunk::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::ShipSunk&>(o), context);
								break;
							case battleship::messages::IncorrectUsage::_type_id_16bit:
								reader.readFields(static_cast<battleship::messages::IncorrectUsage&>(o), context);
								break;
							default:
								reader.readFields(static_cast<battleship::messages::GameInfo&>(o), context);
								break;
						}
						break;
					default:
						reader.readFields(static_cast<battleship::messages::Message&>(o), context);
						break;
				}
				break;
			case battleship::state::Ship::_type_id_16bit:
				reader.readFields(static_cast<battleship::state::Ship&>(o), context);
				break;
			case battleship::state::Segment::_type_id_16bit:
				reader.readFields(static_cast<battleship::state::Segment&>(o), context);
				break;
			case battleship::state::Map::_type_id_16bit:
				reader.readFields(static_cast<battleship::state::Map&>(o), context);
				break;
			case battleship::state::Player::_type_id_16bit:
				reader.readFields(static_cast<battleship::state::Player&>(o), context);
				break;
			case battleship::state::Game::_type_id_16bit:
				reader.readFields(static_cast<battleship::state::Game&>(o), context);
				break;
			case battleship::state::Vec2::_type_id_16bit:
				reader.readFields(static_cast<battleship::state::Vec2&>(o), context);
				break;
			case battleship::state::Shot::_type_id_16bit:
				reader.readFields(static_cast<battleship::state::Shot&>(o), context);
				break;
			default:
				return;
				break;
		}
		return;
	}

	template<typename VisitorType>
	void visitObject(mgen::MGenBase& o, VisitorType& visitor, const mgen::FieldVisitSelection selection) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case battleship::messages::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case battleship::messages::Connection::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::Chat::_type_id_16bit:
								static_cast<battleship::messages::Chat&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::Login::_type_id_16bit:
								static_cast<battleship::messages::Login&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::LoginReply::_type_id_16bit:
								static_cast<battleship::messages::LoginReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::TeamSelect::_type_id_16bit:
								static_cast<battleship::messages::TeamSelect&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::TeamSelectReply::_type_id_16bit:
								static_cast<battleship::messages::TeamSelectReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::SetReady::_type_id_16bit:
								static_cast<battleship::messages::SetReady&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::PlayerJoined::_type_id_16bit:
								static_cast<battleship::messages::PlayerJoined&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::PlayerChangedTeam::_type_id_16bit:
								static_cast<battleship::messages::PlayerChangedTeam&>(o)._accept<VisitorType>(visitor, selection);
								break;
							default:
								static_cast<battleship::messages::Connection&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case battleship::messages::GameInput::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::Fire::_type_id_16bit:
								static_cast<battleship::messages::Fire&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::Resign::_type_id_16bit:
								static_cast<battleship::messages::Resign&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::ShipPlacement::_type_id_16bit:
								static_cast<battleship::messages::ShipPlacement&>(o)._accept<VisitorType>(visitor, selection);
								break;
							default:
								static_cast<battleship::messages::GameInput&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case battleship::messages::GameInfo::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::FireResult::_type_id_16bit:
								static_cast<battleship::messages::FireResult&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::PhaseChange::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case battleship::messages::GameOver::_type_id_16bit:
										static_cast<battleship::messages::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<battleship::messages::PhaseChange&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							case battleship::messages::Snapshot::_type_id_16bit:
								static_cast<battleship::messages::Snapshot&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::NextTurn::_type_id_16bit:
								static_cast<battleship::messages::NextTurn&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::ShipPlacementReply::_type_id_16bit:
								static_cast<battleship::messages::ShipPlacementReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::ShipSunk::_type_id_16bit:
								static_cast<battleship::messages::ShipSunk&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::IncorrectUsage::_type_id_16bit:
								static_cast<battleship::messages::IncorrectUsage&>(o)._accept<VisitorType>(visitor, selection);
								break;
							default:
								static_cast<battleship::messages::GameInfo&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					default:
						static_cast<battleship::messages::Message&>(o)._accept<VisitorType>(visitor, selection);
						break;
				}
				break;
			case battleship::state::Ship::_type_id_16bit:
				static_cast<battleship::state::Ship&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Segment::_type_id_16bit:
				static_cast<battleship::state::Segment&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Map::_type_id_16bit:
				static_cast<battleship::state::Map&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Player::_type_id_16bit:
				static_cast<battleship::state::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Game::_type_id_16bit:
				static_cast<battleship::state::Game&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Vec2::_type_id_16bit:
				static_cast<battleship::state::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Shot::_type_id_16bit:
				static_cast<battleship::state::Shot&>(o)._accept<VisitorType>(visitor, selection);
				break;
			default:
				return;
				break;
		}
		return;
	}

	template<typename VisitorType>
	void visitObject(const mgen::MGenBase& o, VisitorType& visitor, const mgen::FieldVisitSelection selection) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case battleship::messages::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case battleship::messages::Connection::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::Chat::_type_id_16bit:
								static_cast<const battleship::messages::Chat&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::Login::_type_id_16bit:
								static_cast<const battleship::messages::Login&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::LoginReply::_type_id_16bit:
								static_cast<const battleship::messages::LoginReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::TeamSelect::_type_id_16bit:
								static_cast<const battleship::messages::TeamSelect&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::TeamSelectReply::_type_id_16bit:
								static_cast<const battleship::messages::TeamSelectReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::SetReady::_type_id_16bit:
								static_cast<const battleship::messages::SetReady&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::PlayerJoined::_type_id_16bit:
								static_cast<const battleship::messages::PlayerJoined&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::PlayerChangedTeam::_type_id_16bit:
								static_cast<const battleship::messages::PlayerChangedTeam&>(o)._accept<VisitorType>(visitor, selection);
								break;
							default:
								static_cast<const battleship::messages::Connection&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case battleship::messages::GameInput::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::Fire::_type_id_16bit:
								static_cast<const battleship::messages::Fire&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::Resign::_type_id_16bit:
								static_cast<const battleship::messages::Resign&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::ShipPlacement::_type_id_16bit:
								static_cast<const battleship::messages::ShipPlacement&>(o)._accept<VisitorType>(visitor, selection);
								break;
							default:
								static_cast<const battleship::messages::GameInput&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case battleship::messages::GameInfo::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case battleship::messages::FireResult::_type_id_16bit:
								static_cast<const battleship::messages::FireResult&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::PhaseChange::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case battleship::messages::GameOver::_type_id_16bit:
										static_cast<const battleship::messages::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<const battleship::messages::PhaseChange&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							case battleship::messages::Snapshot::_type_id_16bit:
								static_cast<const battleship::messages::Snapshot&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::NextTurn::_type_id_16bit:
								static_cast<const battleship::messages::NextTurn&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::ShipPlacementReply::_type_id_16bit:
								static_cast<const battleship::messages::ShipPlacementReply&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::ShipSunk::_type_id_16bit:
								static_cast<const battleship::messages::ShipSunk&>(o)._accept<VisitorType>(visitor, selection);
								break;
							case battleship::messages::IncorrectUsage::_type_id_16bit:
								static_cast<const battleship::messages::IncorrectUsage&>(o)._accept<VisitorType>(visitor, selection);
								break;
							default:
								static_cast<const battleship::messages::GameInfo&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					default:
						static_cast<const battleship::messages::Message&>(o)._accept<VisitorType>(visitor, selection);
						break;
				}
				break;
			case battleship::state::Ship::_type_id_16bit:
				static_cast<const battleship::state::Ship&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Segment::_type_id_16bit:
				static_cast<const battleship::state::Segment&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Map::_type_id_16bit:
				static_cast<const battleship::state::Map&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Player::_type_id_16bit:
				static_cast<const battleship::state::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Game::_type_id_16bit:
				static_cast<const battleship::state::Game&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Vec2::_type_id_16bit:
				static_cast<const battleship::state::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::state::Shot::_type_id_16bit:
				static_cast<const battleship::state::Shot&>(o)._accept<VisitorType>(visitor, selection);
				break;
			default:
				return;
				break;
		}
		return;
	}

	const mgen::ClassRegistryEntry * getByIds(const std::vector<short>& ids) const;

	const mgen::ClassRegistryEntry * getByIds(const std::vector<std::string>& base64ids_vector) const {
		return mgen::ClassRegistryBase::getByIds(base64ids_vector);
	}

	const mgen::ClassRegistryEntry * getByIds(const std::string& base64ids_concatenated) const {
		return mgen::ClassRegistryBase::getByIds(base64ids_concatenated);
	}

}; // End class ClassRegistry

} // End namespace battleship

#endif
