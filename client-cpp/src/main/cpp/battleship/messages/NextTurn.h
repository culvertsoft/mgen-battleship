/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-10-04 14:13:29 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_MESSAGES_NEXTTURN
#define BATTLESHIP_MESSAGES_NEXTTURN

#include "battleship/messages/GameInfo.h"
#include "battleship/state/Team.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

class NextTurn : public GameInfo /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	battleship::state::Team m_team;
	double m_maxTime;
	bool _m_team_isSet;
	bool _m_maxTime_isSet;

public:
	NextTurn();
	NextTurn(const battleship::state::Team& team,
			const double& maxTime);
	virtual ~NextTurn();

	const battleship::state::Team& getTeam() const;
	const double& getMaxTime() const;

	battleship::state::Team& getTeamMutable();
	double& getMaxTimeMutable();

	NextTurn& setTeam(const battleship::state::Team& team);
	NextTurn& setMaxTime(const double& maxTime);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasTeam() const;
	bool hasMaxTime() const;

	NextTurn& unsetTeam();
	NextTurn& unsetMaxTime();

	bool operator==(const NextTurn& other) const;
	bool operator!=(const NextTurn& other) const;


							
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
		case _field_team_id:
			reader.readField(_field_team_metadata(), context, getTeamMutable());
			break;
		case _field_maxTime_id:
			reader.readField(_field_maxTime_metadata(), context, getMaxTimeMutable());
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
				visitor.beginVisit(*this, 2);
				visitor.visit(getTeam(), _field_team_metadata());
				visitor.visit(getMaxTime(), _field_maxTime_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeam(), _field_team_metadata());
				if (_isMaxTimeSet(mgen::SHALLOW))
					visitor.visit(getMaxTime(), _field_maxTime_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 2);
				visitor.visit(getTeamMutable(), _field_team_metadata());
				visitor.visit(getMaxTimeMutable(), _field_maxTime_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeamMutable(), _field_team_metadata());
				if (_isMaxTimeSet(mgen::SHALLOW))
					visitor.visit(getMaxTimeMutable(), _field_maxTime_metadata());
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

	NextTurn& _setTeamSet(const bool state, const mgen::FieldSetDepth depth);
	NextTurn& _setMaxTimeSet(const bool state, const mgen::FieldSetDepth depth);

	NextTurn& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isTeamSet(const mgen::FieldSetDepth depth) const;
	bool _isMaxTimeSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	NextTurn * _deepCopy() const;

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
		  
	static const long long _type_id = 4079438618512772748LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -29368;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_team_metadata();
	static const mgen::Field& _field_maxTime_metadata();

	static const short _field_team_id = -1585;
	static const short _field_maxTime_id = 22152;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class NextTurn

} // End namespace messages
} // End namespace battleship

#endif
