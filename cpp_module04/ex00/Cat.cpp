#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat default constuctor called"<<std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& a)
{
    std::cout<<"Cat copy constuctor called"<<std::endl;
    this->type = a.type;
}

Cat& Cat::operator = (const Cat& c){
    std::cout<<"Cat copy assignment operator called"<<std::endl;
    this->type = c.type;
    return *this;
}

Cat::~Cat()
{
    std::cout<<"Cat destructor called"<<std::endl;
}