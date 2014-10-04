/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-09-11 17:52:12 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_MESSAGES_FIRERESULT
#define BATTLESHIP_MESSAGES_FIRERESULT

#include "battleship/messages/GameInfo.h"
#include "battleship/state/Team.h"
#include "battleship/state/Vec2.h"
/*custom_includes_begin*//*custom_includes_end*/

namespace battleship {
namespace messages {

class FireResult : public GameInfo /*custom_ifcs_begin*//*custom_ifcs_end*/ {
private:
	bool m_hit;
	battleship::state::Vec2 m_position;
	battleship::state::Team m_firingTeam;
	bool _m_hit_isSet;
	bool _m_position_isSet;
	bool _m_firingTeam_isSet;

public:
	FireResult();
	FireResult(const bool& hit,
			const battleship::state::Vec2& position,
			const battleship::state::Team& firingTeam);
	virtual ~FireResult();

	const bool& getHit() const;
	const battleship::state::Vec2& getPosition() const;
	const battleship::state::Team& getFiringTeam() const;

	bool& getHitMutable();
	battleship::state::Vec2& getPositionMutable();
	battleship::state::Team& getFiringTeamMutable();

	FireResult& setHit(const bool& hit);
	FireResult& setPosition(const battleship::state::Vec2& position);
	FireResult& setFiringTeam(const battleship::state::Team& firingTeam);

	/*custom_methods_begin*//*custom_methods_end*/

	bool hasHit() const;
	bool hasPosition() const;
	bool hasFiringTeam() const;

	FireResult& unsetHit();
	FireResult& unsetPosition();
	FireResult& unsetFiringTeam();

	bool operator==(const FireResult& other) const;
	bool operator!=(const FireResult& other) const;


							
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
		case _field_hit_id:
			reader.readField(_field_hit_metadata(), context, getHitMutable());
			break;
		case _field_position_id:
			reader.readField(_field_position_metadata(), context, getPositionMutable());
			break;
		case _field_firingTeam_id:
			reader.readField(_field_firingTeam_metadata(), context, getFiringTeamMutable());
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
				visitor.visit(getHit(), _field_hit_metadata());
				visitor.visit(getPosition(), _field_position_metadata());
				visitor.visit(getFiringTeam(), _field_firingTeam_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isHitSet(mgen::SHALLOW))
					visitor.visit(getHit(), _field_hit_metadata());
				if (_isPositionSet(mgen::SHALLOW))
					visitor.visit(getPosition(), _field_position_metadata());
				if (_isFiringTeamSet(mgen::SHALLOW))
					visitor.visit(getFiringTeam(), _field_firingTeam_metadata());
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
				visitor.visit(getHitMutable(), _field_hit_metadata());
				visitor.visit(getPositionMutable(), _field_position_metadata());
				visitor.visit(getFiringTeamMutable(), _field_firingTeam_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isHitSet(mgen::SHALLOW))
					visitor.visit(getHitMutable(), _field_hit_metadata());
				if (_isPositionSet(mgen::SHALLOW))
					visitor.visit(getPositionMutable(), _field_position_metadata());
				if (_isFiringTeamSet(mgen::SHALLOW))
					visitor.visit(getFiringTeamMutable(), _field_firingTeam_metadata());
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

	FireResult& _setHitSet(const bool state, const mgen::FieldSetDepth depth);
	FireResult& _setPositionSet(const bool state, const mgen::FieldSetDepth depth);
	FireResult& _setFiringTeamSet(const bool state, const mgen::FieldSetDepth depth);

	FireResult& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isHitSet(const mgen::FieldSetDepth depth) const;
	bool _isPositionSet(const mgen::FieldSetDepth depth) const;
	bool _isFiringTeamSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	FireResult * _deepCopy() const;

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
		  
	static const long long _type_id = 8695181952916377338LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 31228;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_hit_metadata();
	static const mgen::Field& _field_position_metadata();
	static const mgen::Field& _field_firingTeam_metadata();

	static const short _field_hit_id = 29175;
	static const short _field_position_id = -26337;
	static const short _field_firingTeam_id = -20506;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class FireResult

} // End namespace messages
} // End namespace battleship

#endif
