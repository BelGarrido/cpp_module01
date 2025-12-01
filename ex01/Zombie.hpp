#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
	std::string _name;

public:

	Zombie();

	// Parameterized constructor
	Zombie(std::string &name);

	// Destructor
	~Zombie();

	void announce( void );
	void setName(std::string &name);
};

#endif
