#include "HumanB.hpp"

// Basic constructor
HumanB::HumanB(){
    _name = "";
}

// Parameterized constructor (name and weapon)
HumanB::HumanB(const std::string &name, Weapon &weapon){
    _name = name;
    _weapon = &weapon;
}

// Parameterized constructor (name)
HumanB::HumanB(const std::string &name){
    _name = name;
    _weapon = NULL;
}

// Destructor
HumanB::~HumanB(){

}

void HumanB::attack(){
    if(_weapon != NULL)
	    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon){
	_weapon = &newWeapon;
}
