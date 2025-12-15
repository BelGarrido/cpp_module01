#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
	std::string _name;

public:
	void announce( void );
  std::string getName(void);

  //DEFAULT CONSTRUCTOR
	Zombie();

	// PARAMETERIZED CONSTRUCTOR
	Zombie(std::string &name);

	// DESTRUCTOR
	~Zombie();
};

#endif
