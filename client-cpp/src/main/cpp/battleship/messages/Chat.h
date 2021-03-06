/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-27 20:24:37 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_MESSAGES_CHAT
#define BATTLESHIP_MESSAGES_CHAT

#include "battleship/messages/Connection.h"
#include "battleship/state/Team.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

class Chat : public Connection /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_text;
	battleship::state::Team m_team;
	std::string m_from;
	bool _m_text_isSet;
	bool _m_team_isSet;
	bool _m_from_isSet;

public:
	Chat();
	Chat(const std::string& text,
			const battleship::state::Team& team,
			const std::string& from);
	virtual ~Chat();

	const std::string& getText() const;
	const battleship::state::Team& getTeam() const;
	const std::string& getFrom() const;

	std::string& getTextMutable();
	battleship::state::Team& getTeamMutable();
	std::string& getFromMutable();

	Chat& setText(const std::string& text);
	Chat& setTeam(const battleship::state::Team& team);
	Chat& setFrom(const std::string& from);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasText() const;
	bool hasTeam() const;
	bool hasFrom() const;

	Chat& unsetText();
	Chat& unsetTeam();
	Chat& unsetFrom();

	bool operator==(const Chat& other) const;
	bool operator!=(const Chat& other) const;


							
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
		case _field_text_id:
			reader.readField(_field_text_metadata(), context, getTextMutable());
			break;
		case _field_team_id:
			reader.readField(_field_team_metadata(), context, getTeamMutable());
			break;
		case _field_from_id:
			reader.readField(_field_from_metadata(), context, getFromMutable());
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
				visitor.beginVisit(*this, 3);
				visitor.visit(getText(), _field_text_metadata());
				visitor.visit(getTeam(), _field_team_metadata());
				visitor.visit(getFrom(), _field_from_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isTextSet(mgen::SHALLOW))
					visitor.visit(getText(), _field_text_metadata());
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeam(), _field_team_metadata());
				if (_isFromSet(mgen::SHALLOW))
					visitor.visit(getFrom(), _field_from_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 3);
				visitor.visit(getTextMutable(), _field_text_metadata());
				visitor.visit(getTeamMutable(), _field_team_metadata());
				visitor.visit(getFromMutable(), _field_from_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isTextSet(mgen::SHALLOW))
					visitor.visit(getTextMutable(), _field_text_metadata());
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeamMutable(), _field_team_metadata());
				if (_isFromSet(mgen::SHALLOW))
					visitor.visit(getFromMutable(), _field_from_metadata());
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

	Chat& _setTextSet(const bool state, const mgen::FieldSetDepth depth);
	Chat& _setTeamSet(const bool state, const mgen::FieldSetDepth depth);
	Chat& _setFromSet(const bool state, const mgen::FieldSetDepth depth);

	Chat& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isTextSet(const mgen::FieldSetDepth depth) const;
	bool _isTeamSet(const mgen::FieldSetDepth depth) const;
	bool _isFromSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Chat * _deepCopy() const;

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
		  
	static const long long _type_id = 5570298698115942109LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 17379;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_text_metadata();
	static const mgen::Field& _field_team_metadata();
	static const mgen::Field& _field_from_metadata();

	static const short _field_text_id = -15556;
	static const short _field_team_id = -1585;
	static const short _field_from_id = -5380;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Chat

} // End namespace messages
} // End namespace battleship

#endif
