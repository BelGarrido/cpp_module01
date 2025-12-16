#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
  //Variables declared inside this block exist only within the block.
	{
		Weapon weaponType = Weapon("crude spiked club");
		HumanA bob("Bob", weaponType);
		bob.attack();
		weaponType.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon weaponType = Weapon("crude spiked club");
		HumanB jim("Jim");
    jim.attack(); //  No weapon
		jim.setWeapon(weaponType);
		jim.attack();
		weaponType.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
