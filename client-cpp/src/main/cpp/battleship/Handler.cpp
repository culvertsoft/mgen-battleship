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
#include "battleship/messages/FireResult.h"
#include "battleship/messages/Snapshot.h"
#include "battleship/messages/Login.h"
#include "battleship/messages/LoginReply.h"
#include "battleship/messages/NextTurn.h"
#include "battleship/messages/Resign.h"
#include "battleship/messages/GameOver.h"
#include "battleship/messages/TeamSelect.h"
#include "battleship/messages/TeamSelectReply.h"
#include "battleship/state/Ship.h"
#include "battleship/state/Segment.h"
#include "battleship/state/Map.h"
#include "battleship/state/Player.h"
#include "battleship/state/Game.h"
#include "battleship/state/Vec2.h"
#include "battleship/state/Shot.h"

namespace battleship {

Handler::Handler() {}

Handler::~Handler() {}

void Handler::handleDiscard(mgen::MGenBase& o) {
}

void Handler::handleUnknown(mgen::MGenBase& o) {
	handleDiscard(o);
}

void Handler::handle(battleship::messages::Connection& o) {
	handle(static_cast<battleship::messages::Message&>(o));
}

void Handler::handle(battleship::messages::GameInput& o) {
	handle(static_cast<battleship::messages::Message&>(o));
}

void Handler::handle(battleship::messages::GameInfo& o) {
	handle(static_cast<battleship::messages::Message&>(o));
}

void Handler::handle(battleship::messages::Chat& o) {
	handle(static_cast<battleship::messages::Connection&>(o));
}

void Handler::handle(battleship::messages::Fire& o) {
	handle(static_cast<battleship::messages::GameInput&>(o));
}

void Handler::handle(battleship::messages::FireResult& o) {
	handle(static_cast<battleship::messages::GameInfo&>(o));
}

void Handler::handle(battleship::messages::PhaseChange& o) {
	handle(static_cast<battleship::messages::GameInfo&>(o));
}

void Handler::handle(battleship::messages::Snapshot& o) {
	handle(static_cast<battleship::messages::GameInfo&>(o));
}

void Handler::handle(battleship::messages::Login& o) {
	handle(static_cast<battleship::messages::Connection&>(o));
}

void Handler::handle(battleship::messages::LoginReply& o) {
	handle(static_cast<battleship::messages::Connection&>(o));
}

void Handler::handle(battleship::messages::NextTurn& o) {
	handle(static_cast<battleship::messages::GameInfo&>(o));
}

void Handler::handle(battleship::messages::Resign& o) {
	handle(static_cast<battleship::messages::GameInput&>(o));
}

void Handler::handle(battleship::messages::GameOver& o) {
	handle(static_cast<battleship::messages::PhaseChange&>(o));
}

void Handler::handle(battleship::messages::TeamSelect& o) {
	handle(static_cast<battleship::messages::Connection&>(o));
}

void Handler::handle(battleship::messages::TeamSelectReply& o) {
	handle(static_cast<battleship::messages::Connection&>(o));
}

void Handler::handle(battleship::messages::Message& o) {
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

void Handler::handle(battleship::state::Shot& o) {
	handleDiscard(o);
}


} // End namespace battleship

