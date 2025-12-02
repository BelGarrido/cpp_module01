#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon &weaponREF;
		
	public:
		// Basic constructor
		//HumanA();
		// Parameterized constructor
		HumanA(const std::string &name, Weapon &newWeapon);
		// Destructor
		~HumanA();

		void attack();
};

#endif