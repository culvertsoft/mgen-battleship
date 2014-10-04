/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Phase.h"
#include <map>

namespace battleship {
namespace state {

static std::map<std::string, Phase> _mk_Phase_enum_lkup_map() {
	std::map<std::string, Phase> out;
	out["LOBBY_PREGAME"] = Phase_LOBBY_PREGAME;
	out["PLAYING"] = Phase_PLAYING;
	out["LOBBY_POSTGAME"] = Phase_LOBBY_POSTGAME;
	out["UNKNOWN"] = Phase_UNKNOWN;
	return out;
}

static std::vector<Phase> _mk_Phase_enum_values() {
	std::vector<Phase> out;
	out.push_back(Phase_LOBBY_PREGAME);
	out.push_back(Phase_PLAYING);
	out.push_back(Phase_LOBBY_POSTGAME);
	out.push_back(Phase_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_Phase_enum_names() {
	std::vector<std::string> out;
	out.push_back("LOBBY_PREGAME");
	out.push_back("PLAYING");
	out.push_back("LOBBY_POSTGAME");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace state
} // End namespace battleship

namespace mgen {

const std::vector<battleship::state::Phase>& get_enum_values(const battleship::state::Phase /* type_evidence */) {
	static const std::vector<battleship::state::Phase> out = battleship::state::_mk_Phase_enum_values();
	return out;
}

battleship::state::Phase get_enum_value(const battleship::state::Phase /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, battleship::state::Phase> lkup = battleship::state::_mk_Phase_enum_lkup_map();
	std::map<std::string, battleship::state::Phase>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : battleship::state::Phase_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const battleship::state::Phase /* type_evidence */) {
	static const std::vector<std::string> out = battleship::state::_mk_Phase_enum_names();
	return out;
}

const std::string& get_enum_name(const battleship::state::Phase enumValue) {
	const static std::string LOBBY_PREGAME_name("LOBBY_PREGAME");
	const static std::string PLAYING_name("PLAYING");
	const static std::string LOBBY_POSTGAME_name("LOBBY_POSTGAME");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case battleship::state::Phase_LOBBY_PREGAME:
			return LOBBY_PREGAME_name;
		case battleship::state::Phase_PLAYING:
			return PLAYING_name;
		case battleship::state::Phase_LOBBY_POSTGAME:
			return LOBBY_POSTGAME_name;
		case battleship::state::Phase_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

