#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
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
    std::cout<<this->name<<" attacks with their "<<this->weapon->getType() <<std::endl;
}