/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2014-11-12 20:36:02 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef BATTLESHIP_MESSAGES_SHIPPLACEMENT
#define BATTLESHIP_MESSAGES_SHIPPLACEMENT

#include "battleship/messages/GameInput.h"
#include "battleship/state/Ship.h"
/* custom_includes_begin *//* custom_includes_end */

namespace battleship {
namespace messages {

class ShipPlacement : public GameInput /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::vector<battleship::state::Ship>  m_ships;
	bool _m_ships_isSet;

public:
	ShipPlacement();
	ShipPlacement(const std::vector<battleship::state::Ship> & ships);
	virtual ~ShipPlacement();

	const std::vector<battleship::state::Ship> & getShips() const;

	std::vector<battleship::state::Ship> & getShipsMutable();

	ShipPlacement& setShips(const std::vector<battleship::state::Ship> & ships);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasShips() const;

	ShipPlacement& unsetShips();

	bool operator==(const ShipPlacement& other) const;
	bool operator!=(const ShipPlacement& other) const;


							
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
		case _field_ships_id:
			reader.readField(_field_ships_metadata(), context, getShipsMutable());
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
				visitor.visit(getShips(), _field_ships_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isShipsSet(mgen::SHALLOW))
					visitor.visit(getShips(), _field_ships_metadata());
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
				visitor.visit(getShipsMutable(), _field_ships_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isShipsSet(mgen::SHALLOW))
					visitor.visit(getShipsMutable(), _field_ships_metadata());
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

	ShipPlacement& _setShipsSet(const bool state, const mgen::FieldSetDepth depth);

	ShipPlacement& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isShipsSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	ShipPlacement * _deepCopy() const;

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
		  
	static const long long _type_id = 8410045829630410805LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -6905;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_ships_metadata();

	static const short _field_ships_id = 32030;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class ShipPlacement

} // End namespace messages
} // End namespace battleship

#endif
