/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
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
	virtual void handle(battleship::messages::Chat& o);
	virtual void handle(battleship::messages::Fire& o);
	virtual void handle(battleship::messages::PhaseChange& o);
	virtual void handle(battleship::messages::Snapshot& o);
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
