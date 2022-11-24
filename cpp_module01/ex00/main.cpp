#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
    randomChump("stack zombieeeee");
    Zombie* z = newZombie("heap zombieeeeee");
    delete z;
};