#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string &name ){
    Zombie *z = new Zombie(name);
    return z;
}

/* First problem:
new Zombie z(name);
That’s not what you think it is. That syntax is illegal. If you meant Zombie* z = new Zombie(name);, then great, but your snippet as written won’t even compile.

Second problem:
You wrote:

return z;
But if z is meant to be a pointer, fine. If you intended it to be a stack object, then you're returning it by value, which is not what the exercise wants. The whole point of newZombie in this project is that it returns a dynamically allocated Zombie* the caller must eventually delete.
 */

/* You cannot create a stack object and return it as a pointer. 
You cannot use that funky new Zombie z(name) syntax. 
And you definitely can’t hand the caller an object that self-destructs the moment the function ends.
Even zombies need a stable place to rot. */