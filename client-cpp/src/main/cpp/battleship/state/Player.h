/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_STATE_PLAYER
#define BATTLESHIP_STATE_PLAYER

#include "mgen/classes/MGenBase.h"
#include "battleship/state/Shot.h"
#include "battleship/state/Team.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace state {

class Player : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_uuid;
	std::string m_name;
	Team m_team;
	std::vector<Shot>  m_shots;
	bool _m_uuid_isSet;
	bool _m_name_isSet;
	bool _m_team_isSet;
	bool _m_shots_isSet;

public:
	Player();
	Player(const std::string& uuid,
			const std::string& name,
			const Team& team,
			const std::vector<Shot> & shots);
	virtual ~Player();

	const std::string& getUuid() const;
	const std::string& getName() const;
	const Team& getTeam() const;
	const std::vector<Shot> & getShots() const;

	std::string& getUuidMutable();
	std::string& getNameMutable();
	Team& getTeamMutable();
	std::vector<Shot> & getShotsMutable();

	Player& setUuid(const std::string& uuid);
	Player& setName(const std::string& name);
	Player& setTeam(const Team& team);
	Player& setShots(const std::vector<Shot> & shots);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasUuid() const;
	bool hasName() const;
	bool hasTeam() const;
	bool hasShots() const;

	Player& unsetUuid();
	Player& unsetName();
	Player& unsetTeam();
	Player& unsetShots();

	bool operator==(const Player& other) const;
	bool operator!=(const Player& other) const;


							
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
		case _field_uuid_id:
			reader.readField(_field_uuid_metadata(), context, getUuidMutable());
			break;
		case _field_name_id:
			reader.readField(_field_name_metadata(), context, getNameMutable());
			break;
		case _field_team_id:
			reader.readField(_field_team_metadata(), context, getTeamMutable());
			break;
		case _field_shots_id:
			reader.readField(_field_shots_metadata(), context, getShotsMutable());
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
				visitor.beginVisit(*this, 4);
				visitor.visit(getUuid(), _field_uuid_metadata());
				visitor.visit(getName(), _field_name_metadata());
				visitor.visit(getTeam(), _field_team_metadata());
				visitor.visit(getShots(), _field_shots_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isUuidSet(mgen::SHALLOW))
					visitor.visit(getUuid(), _field_uuid_metadata());
				if (_isNameSet(mgen::SHALLOW))
					visitor.visit(getName(), _field_name_metadata());
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeam(), _field_team_metadata());
				if (_isShotsSet(mgen::SHALLOW))
					visitor.visit(getShots(), _field_shots_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 4);
				visitor.visit(getUuidMutable(), _field_uuid_metadata());
				visitor.visit(getNameMutable(), _field_name_metadata());
				visitor.visit(getTeamMutable(), _field_team_metadata());
				visitor.visit(getShotsMutable(), _field_shots_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isUuidSet(mgen::SHALLOW))
					visitor.visit(getUuidMutable(), _field_uuid_metadata());
				if (_isNameSet(mgen::SHALLOW))
					visitor.visit(getNameMutable(), _field_name_metadata());
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeamMutable(), _field_team_metadata());
				if (_isShotsSet(mgen::SHALLOW))
					visitor.visit(getShotsMutable(), _field_shots_metadata());
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

	Player& _setUuidSet(const bool state, const mgen::FieldSetDepth depth);
	Player& _setNameSet(const bool state, const mgen::FieldSetDepth depth);
	Player& _setTeamSet(const bool state, const mgen::FieldSetDepth depth);
	Player& _setShotsSet(const bool state, const mgen::FieldSetDepth depth);

	Player& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isUuidSet(const mgen::FieldSetDepth depth) const;
	bool _isNameSet(const mgen::FieldSetDepth depth) const;
	bool _isTeamSet(const mgen::FieldSetDepth depth) const;
	bool _isShotsSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Player * _deepCopy() const;

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
		  
	static const long long _type_id = 8473431594631525139LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -18915;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_uuid_metadata();
	static const mgen::Field& _field_name_metadata();
	static const mgen::Field& _field_team_metadata();
	static const mgen::Field& _field_shots_metadata();

	static const short _field_uuid_id = -11112;
	static const short _field_name_id = -28058;
	static const short _field_team_id = -1585;
	static const short _field_shots_id = 890;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Player

} // End namespace state
} // End namespace battleship

#endif
