/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_STATE_PHASE
#define BATTLESHIP_STATE_PHASE

#include "mgen/classes/MGenBase.h"

namespace battleship {
namespace state {

enum Phase {
	Phase_LOBBY = 0,
	Phase_PLAYING = 1,
	Phase_PAUSED = 2,
	Phase_UNKNOWN = 3
};

} // End namespace state
} // End namespace battleship

namespace mgen {

const std::vector<battleship::state::Phase>& get_enum_values(const battleship::state::Phase /* type_evidence */);
battleship::state::Phase get_enum_value(const battleship::state::Phase /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const battleship::state::Phase /* type_evidence */);
const std::string& get_enum_name(const battleship::state::Phase enumValue);

} // End namespace mgen

#endif
