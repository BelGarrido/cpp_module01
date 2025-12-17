#include "Zombie.hpp"

//shows stack allocation: Zombie appear, announce itself and then gets destroy automatically
void randomChump( std::string &name ){
  Zombie z1(name);
  z1.announce();
}
