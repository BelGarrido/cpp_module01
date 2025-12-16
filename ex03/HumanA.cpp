#include "HumanA.hpp"

//PARAMETERIZED CONSTRUCTOR (NAME AND WEAPON)
// This is the only way to initialize references and const members.
// _name(name) initializes the _name member before the constructor body executes.
HumanA::HumanA(const std::string &name, Weapon &newWeapon)
  : _name(name),
  weaponREF(newWeapon){}

// DESTRUCTOR
HumanA::~HumanA(){
}

// ATTACK 
void HumanA::attack(){
	std::cout << _name << " attacks with their " << weaponREF.getType() << std::endl;
}
