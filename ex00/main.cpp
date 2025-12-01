#include "Zombie.hpp"
#include "Zombie.h"

int main(void){
	std::string zombie1 = "Foo";
	std::string zombie2 = "Loo";
	randomChump(zombie1);

	Zombie *z = newZombie(zombie2);
	z->announce();
	std::cout << "Zombie created using newZombie()" << std::endl;
	delete(z);
}

// zombie1 created using randomChump (stack) -- no need to be deleted manually, the destructor is called when the functions ends
// zombie2 crested using newZombie (heap) -- needs to be deleted manually using delete, the destructor is called then
