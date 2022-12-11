#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout<<"ScavTrap default constuctor called"<<std::endl;
    this->name = "Default_name";
    this->hit = 100;
    this->damage = 20;
    this->energy = 50;
}

ScavTrap::ScavTrap(std::string& name){
    std::cout<<"ScavTrap constuctor called"<<std::endl;
    this->name = name;
    this->hit = 100;
    this->damage = 20;
    this->energy = 50;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& c){
    std::cout<<"ScavTrap copy assignment operator called"<<std::endl;    
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& c){
    std::cout<<"ScavTrap copy constuctor called"<<std::endl;
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
}

ScavTrap::~ScavTrap(){
    std::cout<<"ScavTrap destuctor called"<<std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->energy <= 0)
        std::cout<<"ScavTrap "<<this->name<<" cant attack, energy is 0"<<std::endl;
    if (this->hit <=0)
        std::cout<<"ScavTrap "<<this->name<<" cant attack health point is 0"<<std::endl;
    else
    {
        std::cout<<"ScavTrap "<<this->name<<" attacks "<<target<<", causing "<<this->damage<<" points of damage!"<<std::endl;
        this->energy--;
    }
}



void ScavTrap::guardGate(){
    std::cout<<"ScavTrap "<<this->name<<" is now in Gate keeper mode."<<std::endl;
}