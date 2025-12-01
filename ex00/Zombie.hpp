#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string _name;
    void announce( void );
    Zombie();

    // Parameterized constructor
    Zombie(std::string &name);

    // Destructor
    ~Zombie();
public:
    Zombie* newZombie( std::string &name );
    void randomChump( std::string &name );
    // Default constructor
   
};

#endif
