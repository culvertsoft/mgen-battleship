/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Handler.h"
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

Handler::Handler() {}

Handler::~Handler() {}

void Handler::handleDiscard(mgen::MGenBase& o) {
}

void Handler::handleUnknown(mgen::MGenBase& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::messages::Chat& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::messages::Fire& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::messages::PhaseChange& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::messages::Snapshot& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::state::Ship& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::state::Segment& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::state::Map& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::state::Player& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::state::Game& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::state::Vec2& o) {
	handleDiscard(o);
}


} // End namespace battleship

