#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name){
  // Index used to iterate through the zombie array
	int i = 0;
  // Dynamically allocate an array of N Zombie objects on the heap
	Zombie *horde = new Zombie[N];
  // Assign the given name to each Zombie in the hord
	while(i < N){
		horde[i].setName(name);
		i++;
	}
  // Return the pointer to the first Zombie in the array
	// The caller is responsible for freeing the memory using delete[]
	return horde;
}
