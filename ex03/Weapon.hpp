#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {

	private:
		std::string _type;

	public:
		// DEFAULT CONSTRUCTOR
		Weapon();
		// PARAMETERIZED CONSTRUCTOR
		Weapon(const std::string &type);
		// DESTRUCTOR
		~Weapon();

		//std::string getType();
    const std::string &getType() const;
		void setType(const std::string &type);
};

#endif