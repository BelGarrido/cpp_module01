#include "Zombie.hpp"
#include "Zombie.h"

int main(void){

	int N = 10;
	Zombie *horde =	zombieHorde(N, "Foo");
	int i = 0;
	while(i < N){
		horde[i].announce();
		std::cout << "Zombie nº " << i + 1 <<": Memory address: "<< horde + i << std::endl;
		i++;
	}
	delete[] horde;
}

// Every zombie object occupies 32 bytes, so every memory address are 32 bytes appart from each other
