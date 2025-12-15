#include "Zombie.hpp"

// DEFAULT CONSTRUCTOR
Zombie::Zombie(void){
}

// PARAMETERIZED CONSTRUCTOR
Zombie::Zombie(std::string &name){
    _name = name;
	announce();
}

// DESTRUCTOR
Zombie::~Zombie(){
    std::cout << _name << ": destroyed" << std::endl;
}

void	Zombie::setName(std::string &name){
	_name = name;
}

void    Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
