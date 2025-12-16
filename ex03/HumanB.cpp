#include "HumanB.hpp"

//PARAMETERIZED CONSTRUCTOR (NAME AND WEAPON)
HumanB::HumanB(const std::string &name, Weapon &weapon){
    _name = name;
    _weapon = &weapon;
}

//PARAMETERIZED CONSTRUCTOR (NAME)
HumanB::HumanB(const std::string &name){
    _name = name;
    _weapon = NULL;
}

// DESTRUCTOR
HumanB::~HumanB(){

}

void HumanB::attack(){
    if(_weapon != NULL)
	    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon){
	_weapon = &newWeapon;
}
