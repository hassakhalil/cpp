#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog default constuctor called"<<std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& a)
{
    std::cout<<"Dog copy constuctor called"<<std::endl;
    this->type = a.type;
}

Dog& Dog::operator = (const Dog& c){
    std::cout<<"Dog copy assignment operator called"<<std::endl;
    this->type = c.type;
    return *this;
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called"<<std::endl;
}