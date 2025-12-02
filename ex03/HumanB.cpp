#include "HumanB.hpp"

// Basic constructor
HumanB::HumanB(){
    _name = "";
    weapon = NULL;
}

// Parameterized constructor (name and weapon)
HumanB::HumanB(const std::string &name, Weapon &newWeapon){
    _name = name;
    *weapon = newWeapon;
}

// Parameterized constructor (name)
HumanB::HumanB(const std::string &name){
    _name = name;
    weapon = NULL;
}

// Destructor
HumanB::~HumanB(){

}

void HumanB::attack(){
    if(weapon)
	    std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << _name << " no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(Weapon newWeapon){
	*weapon = newWeapon;
}
