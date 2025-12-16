#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;
		
	public:
		// de
		HumanB();
		// Parameterized constructor
		HumanB(const std::string &name, Weapon &newWeapon);
		HumanB(const std::string &name);
        // Destructor
		~HumanB();

		void attack();
    void setWeapon(Weapon &newWeapon);
    
};

#endif