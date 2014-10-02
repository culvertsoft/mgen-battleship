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
#include "battleship/messages/Chat.h"
#include "battleship/messages/Fire.h"
#include "battleship/messages/PhaseChange.h"
#include "battleship/messages/Snapshot.h"
#include "battleship/state/Ship.h"
#include "battleship/state/Segment.h"
#include "battleship/state/Map.h"
#include "battleship/state/Player.h"
#include "battleship/state/Game.h"
#include "battleship/state/Vec2.h"

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
			case battleship::messages::Chat::_type_id_16bit:
				reader.readFields(static_cast<battleship::messages::Chat&>(o), context);
				break;
			case battleship::messages::Fire::_type_id_16bit:
				reader.readFields(static_cast<battleship::messages::Fire&>(o), context);
				break;
			case battleship::messages::PhaseChange::_type_id_16bit:
				reader.readFields(static_cast<battleship::messages::PhaseChange&>(o), context);
				break;
			case battleship::messages::Snapshot::_type_id_16bit:
				reader.readFields(static_cast<battleship::messages::Snapshot&>(o), context);
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
			case battleship::messages::Chat::_type_id_16bit:
				static_cast<battleship::messages::Chat&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::messages::Fire::_type_id_16bit:
				static_cast<battleship::messages::Fire&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::messages::PhaseChange::_type_id_16bit:
				static_cast<battleship::messages::PhaseChange&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::messages::Snapshot::_type_id_16bit:
				static_cast<battleship::messages::Snapshot&>(o)._accept<VisitorType>(visitor, selection);
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
			case battleship::messages::Chat::_type_id_16bit:
				static_cast<const battleship::messages::Chat&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::messages::Fire::_type_id_16bit:
				static_cast<const battleship::messages::Fire&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::messages::PhaseChange::_type_id_16bit:
				static_cast<const battleship::messages::PhaseChange&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case battleship::messages::Snapshot::_type_id_16bit:
				static_cast<const battleship::messages::Snapshot&>(o)._accept<VisitorType>(visitor, selection);
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
