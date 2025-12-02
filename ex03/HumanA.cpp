#include "HumanA.hpp"

// Basic constructor
/* HumanA::HumanA(){

} */

// Parameterized constructor (name and weapon)
HumanA::HumanA(const std::string &name, Weapon &newWeapon) : _name(name), weaponREF(newWeapon){
}

// Destructor
HumanA::~HumanA(){

}

void HumanA::attack(){
	std::cout << _name << " attacks with their " << weaponREF.getType() << std::endl;
}

