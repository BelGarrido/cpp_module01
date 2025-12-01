#include "Zombie.hpp"

//shows heap allocation: Return a pointer because the zombie lives until it is deleted manually
Zombie* newZombie( std::string &name ){
    Zombie *z = new Zombie(name);
    return z;
}
