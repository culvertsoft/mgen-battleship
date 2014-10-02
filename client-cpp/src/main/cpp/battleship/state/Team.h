/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_STATE_TEAM
#define BATTLESHIP_STATE_TEAM

#include "mgen/classes/MGenBase.h"

namespace battleship {
namespace state {

enum Team {
	Team_RED = 0,
	Team_BLUE = 1,
	Team_OBSERVERS = 2,
	Team_UNKNOWN = 3
};

} // End namespace state
} // End namespace battleship

namespace mgen {

const std::vector<battleship::state::Team>& get_enum_values(const battleship::state::Team /* type_evidence */);
battleship::state::Team get_enum_value(const battleship::state::Team /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const battleship::state::Team /* type_evidence */);
const std::string& get_enum_name(const battleship::state::Team enumValue);

} // End namespace mgen

#endif
