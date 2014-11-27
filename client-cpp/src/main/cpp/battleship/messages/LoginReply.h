/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-12 20:36:02 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_MESSAGES_LOGINREPLY
#define BATTLESHIP_MESSAGES_LOGINREPLY

#include "battleship/messages/Connection.h"
#include "battleship/state/Team.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

class LoginReply : public Connection /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_uuid;
	bool m_result;
	std::string m_failReason;
	battleship::state::Team m_team;
	bool _m_uuid_isSet;
	bool _m_result_isSet;
	bool _m_failReason_isSet;
	bool _m_team_isSet;

public:
	LoginReply();
	LoginReply(const std::string& uuid,
			const bool& result,
			const std::string& failReason,
			const battleship::state::Team& team);
	virtual ~LoginReply();

	const std::string& getUuid() const;
	const bool& getResult() const;
	const std::string& getFailReason() const;
	const battleship::state::Team& getTeam() const;

	std::string& getUuidMutable();
	bool& getResultMutable();
	std::string& getFailReasonMutable();
	battleship::state::Team& getTeamMutable();

	LoginReply& setUuid(const std::string& uuid);
	LoginReply& setResult(const bool& result);
	LoginReply& setFailReason(const std::string& failReason);
	LoginReply& setTeam(const battleship::state::Team& team);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasUuid() const;
	bool hasResult() const;
	bool hasFailReason() const;
	bool hasTeam() const;

	LoginReply& unsetUuid();
	LoginReply& unsetResult();
	LoginReply& unsetFailReason();
	LoginReply& unsetTeam();

	bool operator==(const LoginReply& other) const;
	bool operator!=(const LoginReply& other) const;


							
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
		case _field_result_id:
			reader.readField(_field_result_metadata(), context, getResultMutable());
			break;
		case _field_failReason_id:
			reader.readField(_field_failReason_metadata(), context, getFailReasonMutable());
			break;
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
				visitor.beginVisit(*this, 4);
				visitor.visit(getUuid(), _field_uuid_metadata());
				visitor.visit(getResult(), _field_result_metadata());
				visitor.visit(getFailReason(), _field_failReason_metadata());
				visitor.visit(getTeam(), _field_team_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isUuidSet(mgen::SHALLOW))
					visitor.visit(getUuid(), _field_uuid_metadata());
				if (_isResultSet(mgen::SHALLOW))
					visitor.visit(getResult(), _field_result_metadata());
				if (_isFailReasonSet(mgen::SHALLOW))
					visitor.visit(getFailReason(), _field_failReason_metadata());
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
				visitor.beginVisit(*this, 4);
				visitor.visit(getUuidMutable(), _field_uuid_metadata());
				visitor.visit(getResultMutable(), _field_result_metadata());
				visitor.visit(getFailReasonMutable(), _field_failReason_metadata());
				visitor.visit(getTeamMutable(), _field_team_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isUuidSet(mgen::SHALLOW))
					visitor.visit(getUuidMutable(), _field_uuid_metadata());
				if (_isResultSet(mgen::SHALLOW))
					visitor.visit(getResultMutable(), _field_result_metadata());
				if (_isFailReasonSet(mgen::SHALLOW))
					visitor.visit(getFailReasonMutable(), _field_failReason_metadata());
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

	LoginReply& _setUuidSet(const bool state, const mgen::FieldSetDepth depth);
	LoginReply& _setResultSet(const bool state, const mgen::FieldSetDepth depth);
	LoginReply& _setFailReasonSet(const bool state, const mgen::FieldSetDepth depth);
	LoginReply& _setTeamSet(const bool state, const mgen::FieldSetDepth depth);

	LoginReply& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isUuidSet(const mgen::FieldSetDepth depth) const;
	bool _isResultSet(const mgen::FieldSetDepth depth) const;
	bool _isFailReasonSet(const mgen::FieldSetDepth depth) const;
	bool _isTeamSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	LoginReply * _deepCopy() const;

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
		  
	static const long long _type_id = 1638563683387667720LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -9758;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_uuid_metadata();
	static const mgen::Field& _field_result_metadata();
	static const mgen::Field& _field_failReason_metadata();
	static const mgen::Field& _field_team_metadata();

	static const short _field_uuid_id = -11112;
	static const short _field_result_id = 24642;
	static const short _field_failReason_id = 1610;
	static const short _field_team_id = -1585;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class LoginReply

} // End namespace messages
} // End namespace battleship

#endif
