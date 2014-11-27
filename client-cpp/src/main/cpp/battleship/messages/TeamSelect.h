/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_MESSAGES_TEAMSELECT
#define BATTLESHIP_MESSAGES_TEAMSELECT

#include "battleship/messages/Connection.h"
#include "battleship/state/Team.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

class TeamSelect : public Connection /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	battleship::state::Team m_team;
	bool _m_team_isSet;

public:
	TeamSelect();
	TeamSelect(const battleship::state::Team& team);
	virtual ~TeamSelect();

	const battleship::state::Team& getTeam() const;

	battleship::state::Team& getTeamMutable();

	TeamSelect& setTeam(const battleship::state::Team& team);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasTeam() const;

	TeamSelect& unsetTeam();

	bool operator==(const TeamSelect& other) const;
	bool operator!=(const TeamSelect& other) const;


							
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
		default:
			reader.handleUnknownField(fieldId, context);
			break;
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) const {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 1);
				visitor.visit(getTeam(), _field_team_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeam(), _field_team_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 1);
				visitor.visit(getTeamMutable(), _field_team_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeamMutable(), _field_team_metadata());
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

	TeamSelect& _setTeamSet(const bool state, const mgen::FieldSetDepth depth);

	TeamSelect& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isTeamSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	TeamSelect * _deepCopy() const;

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
		  
	static const long long _type_id = 7168550251128746873LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 14632;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_team_metadata();

	static const short _field_team_id = -1585;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class TeamSelect

} // End namespace messages
} // End namespace battleship

#endif
