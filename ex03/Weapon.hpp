#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		// Basic constructor
		Weapon();
		// Parameterized constructor
		Weapon(const std::string &newType);
		// Destructor
		~Weapon();

		std::string getType();
		void setType(const std::string &type);
};

#endif