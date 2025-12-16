#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	private:
		std::string _name;
		Weapon &weaponREF;
		
	public:
		// PARAMETERIZED CONSTRUCTOR
		HumanA(const std::string &name, Weapon &newWeapon);
		// DESTRUCTOR
		~HumanA();

		void attack();
};

#endif
