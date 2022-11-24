#include "Zombie.hpp"

Zombie::Zombie(std::string n){
    this->name = n;
}

Zombie::~Zombie(){
    //destructor
   std::cout<<"zombie "<<this->name<<" destroyed"<<std::endl;
}

void Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}