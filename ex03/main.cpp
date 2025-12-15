#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
  //Variables declared inside this block exist only within the block.
	{
		Weapon weapon = Weapon("crude spiked club");
		HumanA bob("Bob", weapon);
		bob.attack();
		weapon.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon weapon = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(weapon);
		jim.attack();
		weapon.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
