#include "Zombie.hpp"

int main(void){
	std::string zombie1 = "Foo(1)";
	std::string zombie2 = "Loo(2)";
	randomChump(zombie1);

	Zombie *z2 = newZombie(zombie2);
	z2->announce();
	std::cout << z2->getName() << ": created using newZombie()" << std::endl;
	delete(z2);
}

// zombie1 created using randomChump (stack) -- no need to be deleted manually, the destructor is called when the functions ends
// zombie2 created using newZombie (heap) -- needs to be deleted manually using delete, the destructor is called then
