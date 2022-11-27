#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = 0;
    this->name = name;
    return;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
    this->weapon = &new_weapon; 
}

void    HumanB::attack()
{
    if (this->weapon)
        std::cout<<this->name<<" attacks with their "<<this->weapon->getType() <<std::endl;
    else
       std::cout<<this->name<<" has no weapon "<<std::endl; 
}