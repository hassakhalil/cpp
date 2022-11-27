#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(){
 
    Zombie* z = zombieHorde(100, "zzz");
    delete[] z;
    return (0);
}