#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->name = "Default_name";
    this->hit = 10;
    this->damage = 0;
    this->energy = 10;
    std::cout<<"ClapTrap default constuctor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string& name){
    this->name = name;
    this->hit = 10;
    this->damage = 0;
    this->energy = 10;
    std::cout<<"ClapTrap constuctor called"<<std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& c){
    std::cout<<"ClapTrap copy assignment operator called"<<std::endl;    
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
    return *this;
}
ClapTrap::ClapTrap(const ClapTrap& c){
    std::cout<<"ClapTrap copy constuctor called"<<std::endl;
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
}

ClapTrap::~ClapTrap(){
     std::cout<<"ClapTrap destuctor called"<<std::endl;
}
void ClapTrap::attack(const std::string& target){
    if (this->energy <= 0)
        std::cout<<"ClapTrap "<<this->name<<" cant attack, energy is 0"<<std::endl;
    if (this->hit <=0)
        std::cout<<"ClapTrap "<<this->name<<" cant attack health point is 0"<<std::endl;
    else
    {
        std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<this->damage<<" points of damage!"<<std::endl;
        this->energy--;
    }
}
void ClapTrap::takeDamage(unsigned int amount){

    if (this->energy <= 0)
        std::cout<<"ClapTrap "<<this->name<<" cant take damage, energy is 0"<<std::endl;
    if (this->hit <=0)
        std::cout<<"ClapTrap "<<this->name<<" cant take damage health point is 0"<<std::endl;
    else
    {
        std::cout<<"ClapTrap "<<this->name<<" took "<<amount<<" amount of damage"<<std::endl;
        this->hit -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount){
    if (this->energy <= 0)
        std::cout<<"ClapTrap "<<this->name<<" cant cant be repaired, energy is 0"<<std::endl;
    if (this->hit <=0)
        std::cout<<"ClapTrap "<<this->name<<" cant cant be repaired health point is 0"<<std::endl;
    else
    {
        this->hit += amount;
        std::cout<<"ClapTrap "<<this->name<<" repairs + "<<amount<<std::endl;
        this->energy--;
    }
}