#include "Zombie.hpp"

// CONSTRUCTOR
Zombie::Zombie(std::string &name){
  _name = name;
}

// DESTRUCTOR
Zombie::~Zombie(){
  std::cout << _name << ": destroyed" << std::endl;
}

// ANNOUNCE
void    Zombie::announce(void){
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void){
  return _name;
}
