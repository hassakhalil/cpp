#include "Zombie.hpp"

Zombie::Zombie(){
    // this->name = name;
}

Zombie::~Zombie(){
    //destructor
   std::cout<<"zombie "<<this->name<<" destroyed"<<std::endl;
}

void Zombie::name_zombie(std::string n)
{
    this->name = n;
}

void Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}