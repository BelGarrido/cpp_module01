#include "HumanA.hpp"

// Basic constructor
/* HumanA::HumanA(){

} */

//PARAMETERIZED CONSTRUCTOR (NAME AND WEAPON)
HumanA::HumanA(const std::string &name, Weapon &newWeapon) : _name(name), weaponREF(newWeapon){
}

// DESTRUCTOR
HumanA::~HumanA(){

}

// ATTACK 
void HumanA::attack(){
	std::cout << _name << " attacks with their " << weaponREF.getType() << std::endl;
}

