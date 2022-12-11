#include "FragTrap.hpp"


FragTrap::FragTrap(){
    std::cout<<"FragTrap default constuctor called"<<std::endl;
    this->name = "Default_name";
    this->hit = 100;
    this->damage = 30;
    this->energy = 100;
}

 FragTrap::FragTrap(std::string& name){
    std::cout<<"FragTrap constuctor called"<<std::endl;
    this->name = name;
    this->hit = 100;
    this->damage = 30;
    this->energy = 100;
}

FragTrap& FragTrap::operator = (const FragTrap& c){
    std::cout<<"FragTrap copy assignment operator called"<<std::endl;    
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
    return *this;
}

FragTrap::FragTrap(const FragTrap& c){
    std::cout<<"FragTrap copy constuctor called"<<std::endl;
    this->name = c.name;
    this->hit = c.hit;
    this->damage = c.damage;
    this->energy = c.energy;
}

FragTrap::~FragTrap(){
    std::cout<<"FragTrap destuctor called"<<std::endl;
}

void  FragTrap::highFivesGuys(void){
    std::cout<<"FragTrap "<<this->name<<": high five"<<std::endl;
}