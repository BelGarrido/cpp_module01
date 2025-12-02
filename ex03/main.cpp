#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		std::cout << "checkpoint" << std::endl;
		HumanB jim("Jim");
		std::cout << "checkpoint1" << std::endl;
		jim.setWeapon(club);
		std::cout << "checkpoint1" << std::endl;
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}