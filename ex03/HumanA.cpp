#include "HumanA.hpp"

// Basic constructor
HumanA::HumanA(){

}

// Parameterized constructor (name and weapon)
HumanA::HumanA(const std::string &name, Weapon &weapon){
    _name = name;
    _weapon = weapon;
}

// Destructor
HumanA::~HumanA(){

}

void HumanA::attack(){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

