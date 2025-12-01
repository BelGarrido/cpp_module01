#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
	std::string _name;

public:
	void announce( void );
	Zombie();

	// Parameterized constructor
	Zombie(std::string &name);

	// Destructor
	~Zombie();
};

#endif
