#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon _weapon;
		
	public:
		// Basic constructor
		HumanA();
		// Parameterized constructor
		HumanA(std::string name, Weapon _weapon);
		// Destructor
		~HumanA();

		void attack();
};

#endif