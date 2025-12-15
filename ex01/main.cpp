#include "Zombie.hpp"

int main(void){
	int N = 10;
  // zombieHorde returns a pointer to the first Zombie in the array
	Zombie *horde =	zombieHorde(N, "Foo");
	int i = 0;
  // Loop through each Zombie in the horde
	while(i < N){
		horde[i].announce();
  	// Print the zombie number and its memory address
		// (horde + i) shows how pointer arithmetic works with arrays
		std::cout << "Zombie nº " << i + 1 << ": Memory address: " << horde + i << std::endl;
		i++;
	}
  // delete[] must be used because memory was allocated with new[]
	delete[] horde;
}

// Every zombie object occupies 32 bytes, so every memory address are 32 bytes appart from each other
