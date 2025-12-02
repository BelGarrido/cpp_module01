#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *weapon;
		
	public:
		// Basic constructor
		HumanB();
		// Parameterized constructor
		HumanB(const std::string &name, Weapon &weapon);
		HumanB(const std::string &name);
        // Destructor
		~HumanB();

		void attack();
        void setWeapon(Weapon type);
    
};

#endif