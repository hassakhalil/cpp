#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->name = "Default_name";
    this->hit = 10;
    this->damage = 0;
    this->energy = 10;
    std::cout<<"Default constuctor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string& name){
    this->name = name;
    this->hit = 10;
    this->damage = 0;
    this->energy = 10;
    std::cout<<"constuctor called"<<std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& c){
    std::cout<<"Copy assignment operator called"<<std::endl;    
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
    return *this;
}
ClapTrap::ClapTrap(const ClapTrap& c){
    std::cout<<"Copy constuctor called"<<std::endl;
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
}

ClapTrap::~ClapTrap(){
     std::cout<<"Destuctor called"<<std::endl;
}
void ClapTrap::attack(const std::string& target){
    this->energy--;
    std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<this->damage<<" points of damage!"<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
    std::cout<<"ClapTrap "<<this->name<<" took "<<amount<<" amount of damage"<<std::endl;
    this->hit -= amount;
}
void ClapTrap::beRepaired(unsigned int amount){
    this->hit += amount;
    std::cout<<"ClapTrap "<<this->name<<" repaired + "<<amount<<std::endl;
    this->energy--;
}