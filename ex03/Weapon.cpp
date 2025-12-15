#include "Weapon.hpp"

// DEFAULT CONSTRUCTOR
Weapon::Weapon(){
	_type = "Default";
}

// PARAMETERIZED CONSTRUCTOR
Weapon::Weapon(const std::string &type){
	_type = type;
}

// DESTRUCTOR
Weapon::~Weapon(){

}

const std::string &Weapon::getType() const{
	return _type;
}

// ORIGINAL GETTYPE FUNCTION
/* std::string Weapon::getType(){
	return _type;
} */

void Weapon::setType(const std::string &type){
	_type = type;
}
