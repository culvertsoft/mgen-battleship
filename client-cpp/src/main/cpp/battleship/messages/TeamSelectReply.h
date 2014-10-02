/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_MESSAGES_TEAMSELECTREPLY
#define BATTLESHIP_MESSAGES_TEAMSELECTREPLY

#include "battleship/messages/Connection.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

class TeamSelectReply : public Connection /*custom_ifcs_begin*//*custom_ifcs_end*/ {
private:
	bool m_result;
	std::string m_failReason;
	bool _m_result_isSet;
	bool _m_failReason_isSet;

public:
	TeamSelectReply();
	TeamSelectReply(const bool& result,
			const std::string& failReason);
	virtual ~TeamSelectReply();

	const bool& getResult() const;
	const std::string& getFailReason() const;

	bool& getResultMutable();
	std::string& getFailReasonMutable();

	TeamSelectReply& setResult(const bool& result);
	TeamSelectReply& setFailReason(const std::string& failReason);

	/*custom_methods_begin*//*custom_methods_end*/

	bool hasResult() const;
	bool hasFailReason() const;

	TeamSelectReply& unsetResult();
	TeamSelectReply& unsetFailReason();

	bool operator==(const TeamSelectReply& other) const;
	bool operator!=(const TeamSelectReply& other) const;


							
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
		case _field_result_id:
			reader.readField(_field_result_metadata(), context, getResultMutable());
			break;
		case _field_failReason_id:
			reader.readField(_field_failReason_metadata(), context, getFailReasonMutable());
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
				visitor.visit(getResult(), _field_result_metadata());
				visitor.visit(getFailReason(), _field_failReason_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isResultSet(mgen::SHALLOW))
					visitor.visit(getResult(), _field_result_metadata());
				if (_isFailReasonSet(mgen::SHALLOW))
					visitor.visit(getFailReason(), _field_failReason_metadata());
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
				visitor.visit(getResultMutable(), _field_result_metadata());
				visitor.visit(getFailReasonMutable(), _field_failReason_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isResultSet(mgen::SHALLOW))
					visitor.visit(getResultMutable(), _field_result_metadata());
				if (_isFailReasonSet(mgen::SHALLOW))
					visitor.visit(getFailReasonMutable(), _field_failReason_metadata());
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

	TeamSelectReply& _setResultSet(const bool state, const mgen::FieldSetDepth depth);
	TeamSelectReply& _setFailReasonSet(const bool state, const mgen::FieldSetDepth depth);

	TeamSelectReply& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isResultSet(const mgen::FieldSetDepth depth) const;
	bool _isFailReasonSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	TeamSelectReply * _deepCopy() const;

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
		  
	static const long long _type_id = 7126685645384091317LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -9272;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_result_metadata();
	static const mgen::Field& _field_failReason_metadata();

	static const short _field_result_id = 24642;
	static const short _field_failReason_id = 1610;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class TeamSelectReply

} // End namespace messages
} // End namespace battleship

#endif
