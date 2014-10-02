/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_STATE_GAME
#define BATTLESHIP_STATE_GAME

#include "mgen/classes/MGenBase.h"
#include "battleship/state/Map.h"
#include "battleship/state/Phase.h"
#include "battleship/state/Player.h"
#include "battleship/state/Team.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace state {

class Game : public mgen::MGenBase /*custom_ifcs_begin*//*custom_ifcs_end*/ {
private:
	std::vector<Player>  m_players;
	Map m_redMap;
	Map m_blueMap;
	Phase m_phase;
	Team m_currentTeam;
	double m_timeLastMove;
	bool _m_players_isSet;
	bool _m_redMap_isSet;
	bool _m_blueMap_isSet;
	bool _m_phase_isSet;
	bool _m_currentTeam_isSet;
	bool _m_timeLastMove_isSet;

public:
	Game();
	Game(const std::vector<Player> & players,
			const Map& redMap,
			const Map& blueMap,
			const Phase& phase,
			const Team& currentTeam,
			const double& timeLastMove);
	virtual ~Game();

	const std::vector<Player> & getPlayers() const;
	const Map& getRedMap() const;
	const Map& getBlueMap() const;
	const Phase& getPhase() const;
	const Team& getCurrentTeam() const;
	const double& getTimeLastMove() const;

	std::vector<Player> & getPlayersMutable();
	Map& getRedMapMutable();
	Map& getBlueMapMutable();
	Phase& getPhaseMutable();
	Team& getCurrentTeamMutable();
	double& getTimeLastMoveMutable();

	Game& setPlayers(const std::vector<Player> & players);
	Game& setRedMap(const Map& redMap);
	Game& setBlueMap(const Map& blueMap);
	Game& setPhase(const Phase& phase);
	Game& setCurrentTeam(const Team& currentTeam);
	Game& setTimeLastMove(const double& timeLastMove);

	/*custom_methods_begin*//*custom_methods_end*/

	bool hasPlayers() const;
	bool hasRedMap() const;
	bool hasBlueMap() const;
	bool hasPhase() const;
	bool hasCurrentTeam() const;
	bool hasTimeLastMove() const;

	Game& unsetPlayers();
	Game& unsetRedMap();
	Game& unsetBlueMap();
	Game& unsetPhase();
	Game& unsetCurrentTeam();
	Game& unsetTimeLastMove();

	bool operator==(const Game& other) const;
	bool operator!=(const Game& other) const;


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
public:
	template<typename ReaderType, typename ReadContextType>
	void _readField(const short fieldId, ReadContextType& context, ReaderType& reader) {
		switch (fieldId) {
		case _field_players_id:
			reader.readField(_field_players_metadata(), context, getPlayersMutable());
			break;
		case _field_redMap_id:
			reader.readField(_field_redMap_metadata(), context, getRedMapMutable());
			break;
		case _field_blueMap_id:
			reader.readField(_field_blueMap_metadata(), context, getBlueMapMutable());
			break;
		case _field_phase_id:
			reader.readField(_field_phase_metadata(), context, getPhaseMutable());
			break;
		case _field_currentTeam_id:
			reader.readField(_field_currentTeam_metadata(), context, getCurrentTeamMutable());
			break;
		case _field_timeLastMove_id:
			reader.readField(_field_timeLastMove_metadata(), context, getTimeLastMoveMutable());
			break;
		default:
			reader.handleUnknownField(fieldId, context);
			break;
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) const {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 6);
				visitor.visit(getPlayers(), _field_players_metadata());
				visitor.visit(getRedMap(), _field_redMap_metadata());
				visitor.visit(getBlueMap(), _field_blueMap_metadata());
				visitor.visit(getPhase(), _field_phase_metadata());
				visitor.visit(getCurrentTeam(), _field_currentTeam_metadata());
				visitor.visit(getTimeLastMove(), _field_timeLastMove_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPlayersSet(mgen::SHALLOW))
					visitor.visit(getPlayers(), _field_players_metadata());
				if (_isRedMapSet(mgen::SHALLOW))
					visitor.visit(getRedMap(), _field_redMap_metadata());
				if (_isBlueMapSet(mgen::SHALLOW))
					visitor.visit(getBlueMap(), _field_blueMap_metadata());
				if (_isPhaseSet(mgen::SHALLOW))
					visitor.visit(getPhase(), _field_phase_metadata());
				if (_isCurrentTeamSet(mgen::SHALLOW))
					visitor.visit(getCurrentTeam(), _field_currentTeam_metadata());
				if (_isTimeLastMoveSet(mgen::SHALLOW))
					visitor.visit(getTimeLastMove(), _field_timeLastMove_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 6);
				visitor.visit(getPlayersMutable(), _field_players_metadata());
				visitor.visit(getRedMapMutable(), _field_redMap_metadata());
				visitor.visit(getBlueMapMutable(), _field_blueMap_metadata());
				visitor.visit(getPhaseMutable(), _field_phase_metadata());
				visitor.visit(getCurrentTeamMutable(), _field_currentTeam_metadata());
				visitor.visit(getTimeLastMoveMutable(), _field_timeLastMove_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPlayersSet(mgen::SHALLOW))
					visitor.visit(getPlayersMutable(), _field_players_metadata());
				if (_isRedMapSet(mgen::SHALLOW))
					visitor.visit(getRedMapMutable(), _field_redMap_metadata());
				if (_isBlueMapSet(mgen::SHALLOW))
					visitor.visit(getBlueMapMutable(), _field_blueMap_metadata());
				if (_isPhaseSet(mgen::SHALLOW))
					visitor.visit(getPhaseMutable(), _field_phase_metadata());
				if (_isCurrentTeamSet(mgen::SHALLOW))
					visitor.visit(getCurrentTeamMutable(), _field_currentTeam_metadata());
				if (_isTimeLastMoveSet(mgen::SHALLOW))
					visitor.visit(getTimeLastMoveMutable(), _field_timeLastMove_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	const mgen::Field * _fieldById(const short id) const;
	const mgen::Field * _fieldByName(const std::string& name) const;
	const long long _typeId() const;
	const short _typeId16Bit() const;
	const std::string& _typeId16BitBase64() const;
	const std::string& _typeName() const;

	const std::vector<long long>& _typeIds() const;
	const std::vector<short>& _typeIds16Bit() const;
	const std::vector<std::string>& _typeIds16BitBase64() const;
	const std::string& _typeIds16BitBase64String() const;
	const std::vector<std::string>& _typeNames() const;

	const std::vector<mgen::Field>& _fieldMetadatas() const;

	bool _isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const;

	Game& _setPlayersSet(const bool state, const mgen::FieldSetDepth depth);
	Game& _setRedMapSet(const bool state, const mgen::FieldSetDepth depth);
	Game& _setBlueMapSet(const bool state, const mgen::FieldSetDepth depth);
	Game& _setPhaseSet(const bool state, const mgen::FieldSetDepth depth);
	Game& _setCurrentTeamSet(const bool state, const mgen::FieldSetDepth depth);
	Game& _setTimeLastMoveSet(const bool state, const mgen::FieldSetDepth depth);

	Game& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isPlayersSet(const mgen::FieldSetDepth depth) const;
	bool _isRedMapSet(const mgen::FieldSetDepth depth) const;
	bool _isBlueMapSet(const mgen::FieldSetDepth depth) const;
	bool _isPhaseSet(const mgen::FieldSetDepth depth) const;
	bool _isCurrentTeamSet(const mgen::FieldSetDepth depth) const;
	bool _isTimeLastMoveSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Game * _deepCopy() const;

	static mgen::MGenBase * _newInstance();

							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
	static const long long _type_id = 1644051945579161717LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -20523;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_players_metadata();
	static const mgen::Field& _field_redMap_metadata();
	static const mgen::Field& _field_blueMap_metadata();
	static const mgen::Field& _field_phase_metadata();
	static const mgen::Field& _field_currentTeam_metadata();
	static const mgen::Field& _field_timeLastMove_metadata();

	static const short _field_players_id = 29583;
	static const short _field_redMap_id = 21290;
	static const short _field_blueMap_id = -19206;
	static const short _field_phase_id = 7625;
	static const short _field_currentTeam_id = -14726;
	static const short _field_timeLastMove_id = 22636;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Game

} // End namespace state
} // End namespace battleship

#endif
