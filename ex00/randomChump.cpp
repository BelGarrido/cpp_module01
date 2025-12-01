#include "Zombie.hpp"

void Zombie::randomChump( std::string &name ){
    Zombie z1(name);
    z1.announce();
}