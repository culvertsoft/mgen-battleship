/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_HANDLER
#define BATTLESHIP_HANDLER

#include "ForwardDeclare.h"

namespace battleship {

class Handler  {
	public:

	Handler();
	virtual ~Handler();
	virtual void handleDiscard(mgen::MGenBase& o);
	virtual void handleUnknown(mgen::MGenBase& o);
	virtual void handle(battleship::messages::Connection& o);
	virtual void handle(battleship::messages::GameInput& o);
	virtual void handle(battleship::messages::GameInfo& o);
	virtual void handle(battleship::messages::Chat& o);
	virtual void handle(battleship::messages::Fire& o);
	virtual void handle(battleship::messages::FireResult& o);
	virtual void handle(battleship::messages::PhaseChange& o);
	virtual void handle(battleship::messages::Snapshot& o);
	virtual void handle(battleship::messages::Login& o);
	virtual void handle(battleship::messages::LoginReply& o);
	virtual void handle(battleship::messages::NextTurn& o);
	virtual void handle(battleship::messages::Resign& o);
	virtual void handle(battleship::messages::GameOver& o);
	virtual void handle(battleship::messages::TeamSelect& o);
	virtual void handle(battleship::messages::TeamSelectReply& o);
	virtual void handle(battleship::messages::Message& o);
	virtual void handle(battleship::messages::ShipPlacement& o);
	virtual void handle(battleship::messages::ShipPlacementReply& o);
	virtual void handle(battleship::messages::ShipSunk& o);
	virtual void handle(battleship::messages::PlayerJoined& o);
	virtual void handle(battleship::messages::PlayerChangedTeam& o);
	virtual void handle(battleship::messages::IncorrectUsage& o);
	virtual void handle(battleship::state::Ship& o);
	virtual void handle(battleship::state::Segment& o);
	virtual void handle(battleship::state::Map& o);
	virtual void handle(battleship::state::Player& o);
	virtual void handle(battleship::state::Game& o);
	virtual void handle(battleship::state::Vec2& o);
	virtual void handle(battleship::state::Shot& o);

}; // End class Handler

} // End namespace battleship

#endif
