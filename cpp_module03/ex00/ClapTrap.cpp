#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
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

ClapTrap::ClapTrap(const ClapTrap& c){
    std::cout<<"Copy constuctor called"<<std::endl;
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
}
ClapTrap& ClapTrap::operator = (const ClapTrap& c){
    std::cout<<"Copy assignment operator called"<<std::endl;
    *this(c);
    return *this;
}

ClapTrap::~ClapTrap(){
        std::cout<<"Destuctor called"<<std::endl;
}
void ClapTrap::attack(const std::string& target){}
void ClapTrap::takeDamage(unsigned int amount){}
void ClapTrap::beRepaired(unsigned int amount){}