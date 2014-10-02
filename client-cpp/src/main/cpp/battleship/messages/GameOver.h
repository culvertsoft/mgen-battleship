/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_MESSAGES_GAMEOVER
#define BATTLESHIP_MESSAGES_GAMEOVER

#include "battleship/messages/PhaseChange.h"
#include "battleship/state/Team.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

class GameOver : public PhaseChange /*custom_ifcs_begin*//*custom_ifcs_end*/ {
private:
	battleship::state::Team m_winner;
	std::string m_reason;
	bool _m_winner_isSet;
	bool _m_reason_isSet;

public:
	GameOver();
	GameOver(const battleship::state::Phase& phase,
			const battleship::state::Team& winner,
			const std::string& reason);
	virtual ~GameOver();

	const battleship::state::Team& getWinner() const;
	const std::string& getReason() const;

	battleship::state::Team& getWinnerMutable();
	std::string& getReasonMutable();

	GameOver& setPhase(const battleship::state::Phase& phase);
	GameOver& setWinner(const battleship::state::Team& winner);
	GameOver& setReason(const std::string& reason);

	/*custom_methods_begin*//*custom_methods_end*/

	bool hasWinner() const;
	bool hasReason() const;

	GameOver& unsetPhase();
	GameOver& unsetWinner();
	GameOver& unsetReason();

	bool operator==(const GameOver& other) const;
	bool operator!=(const GameOver& other) const;


							
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
		case _field_phase_id:
			reader.readField(_field_phase_metadata(), context, getPhaseMutable());
			break;
		case _field_winner_id:
			reader.readField(_field_winner_metadata(), context, getWinnerMutable());
			break;
		case _field_reason_id:
			reader.readField(_field_reason_metadata(), context, getReasonMutable());
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
				visitor.visit(getPhase(), _field_phase_metadata());
				visitor.visit(getWinner(), _field_winner_metadata());
				visitor.visit(getReason(), _field_reason_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPhaseSet(mgen::SHALLOW))
					visitor.visit(getPhase(), _field_phase_metadata());
				if (_isWinnerSet(mgen::SHALLOW))
					visitor.visit(getWinner(), _field_winner_metadata());
				if (_isReasonSet(mgen::SHALLOW))
					visitor.visit(getReason(), _field_reason_metadata());
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
				visitor.visit(getPhaseMutable(), _field_phase_metadata());
				visitor.visit(getWinnerMutable(), _field_winner_metadata());
				visitor.visit(getReasonMutable(), _field_reason_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPhaseSet(mgen::SHALLOW))
					visitor.visit(getPhaseMutable(), _field_phase_metadata());
				if (_isWinnerSet(mgen::SHALLOW))
					visitor.visit(getWinnerMutable(), _field_winner_metadata());
				if (_isReasonSet(mgen::SHALLOW))
					visitor.visit(getReasonMutable(), _field_reason_metadata());
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

	GameOver& _setWinnerSet(const bool state, const mgen::FieldSetDepth depth);
	GameOver& _setReasonSet(const bool state, const mgen::FieldSetDepth depth);

	GameOver& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isWinnerSet(const mgen::FieldSetDepth depth) const;
	bool _isReasonSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	GameOver * _deepCopy() const;

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
		  
	static const long long _type_id = 4978160568720679319LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -2120;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_winner_metadata();
	static const mgen::Field& _field_reason_metadata();

	static const short _field_winner_id = -7291;
	static const short _field_reason_id = -15867;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class GameOver

} // End namespace messages
} // End namespace battleship

#endif
