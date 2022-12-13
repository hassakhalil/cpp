#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"Animal default constuctor called"<<std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& a)
{
    std::cout<<"Animal copy constuctor called"<<std::endl;
    this->type = a.type;
}

Animal& Animal::operator = (const Animal& c){
    std::cout<<"Animal copy assignment operator called"<<std::endl;
    this->type = c.type;
    return *this;
}

Animal::~Animal()
{
    std::cout<<"Animal destructor called"<<std::endl;
}

std::string Animal::getType()const{
    return this->type;
}
