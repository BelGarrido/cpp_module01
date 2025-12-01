#include "Weapon.hpp"

// Default constructor
Weapon::Weapon(){
	_type = "Default";
}

// Parameterized constructor
Weapon::Weapon(std::string &type){
	_type = type;
}
// Destructor
Weapon::~Weapon(){

}

// Functions
std::string Weapon::getType(){
	return _type;
}
void Weapon::setType(std::string &type){
	_type = type;
}