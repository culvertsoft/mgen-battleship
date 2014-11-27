/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Team.h"
#include <map>

namespace battleship {
namespace state {

static std::map<std::string, Team> _mk_Team_enum_lkup_map() {
	std::map<std::string, Team> out;
	out["RED"] = Team_RED;
	out["BLUE"] = Team_BLUE;
	out["OBSERVERS"] = Team_OBSERVERS;
	out["UNKNOWN"] = Team_UNKNOWN;
	return out;
}

static std::vector<Team> _mk_Team_enum_values() {
	std::vector<Team> out;
	out.push_back(Team_RED);
	out.push_back(Team_BLUE);
	out.push_back(Team_OBSERVERS);
	out.push_back(Team_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_Team_enum_names() {
	std::vector<std::string> out;
	out.push_back("RED");
	out.push_back("BLUE");
	out.push_back("OBSERVERS");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace state
} // End namespace battleship

namespace mgen {

const std::vector<battleship::state::Team>& get_enum_values(const battleship::state::Team /* type_evidence */) {
	static const std::vector<battleship::state::Team> out = battleship::state::_mk_Team_enum_values();
	return out;
}

battleship::state::Team get_enum_value(const battleship::state::Team /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, battleship::state::Team> lkup = battleship::state::_mk_Team_enum_lkup_map();
	std::map<std::string, battleship::state::Team>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : battleship::state::Team_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const battleship::state::Team /* type_evidence */) {
	static const std::vector<std::string> out = battleship::state::_mk_Team_enum_names();
	return out;
}

const std::string& get_enum_name(const battleship::state::Team enumValue) {
	const static std::string RED_name("RED");
	const static std::string BLUE_name("BLUE");
	const static std::string OBSERVERS_name("OBSERVERS");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case battleship::state::Team_RED:
			return RED_name;
		case battleship::state::Team_BLUE:
			return BLUE_name;
		case battleship::state::Team_OBSERVERS:
			return OBSERVERS_name;
		case battleship::state::Team_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

