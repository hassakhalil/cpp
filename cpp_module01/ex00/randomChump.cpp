#include "Zombie.hpp"

void randomChump(std::string name)
{
    //It creates a zombie, name it, and the zombie announces itself
    Zombie z;
    z.name_zombie(name);
    z.announce();
}