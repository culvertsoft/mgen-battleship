/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_FORWARDDECLARE
#define BATTLESHIP_FORWARDDECLARE

#include "mgen/classes/MGenBase.h"

namespace battleship {
namespace messages {

class Connection;
class GameInput;
class GameInfo;
class Chat;
class Fire;
class FireResult;
class PhaseChange;
class Snapshot;
class Login;
class LoginReply;
class NextTurn;
class Resign;
class GameOver;
class TeamSelect;
class TeamSelectReply;
class Message;
class ShipPlacement;
class ShipPlacementReply;
class ShipSunk;
class PlayerJoined;
class PlayerChangedTeam;
class IncorrectUsage;

} // End namespace messages
} // End namespace battleship

namespace battleship {
namespace state {

class Ship;
class Segment;
class Map;
class Player;
class Game;
class Vec2;
class Shot;

} // End namespace state
} // End namespace battleship


#endif
