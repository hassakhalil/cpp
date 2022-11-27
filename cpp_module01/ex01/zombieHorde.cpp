#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0 || name.empty())
        return 0;
    Zombie* z = new Zombie[N];
    for (int i = 0;i < N ; i++){
        z[i].name_zombie(name);
        //debug
        //z[i].announce();
        //end debug
    }
    return z;
}