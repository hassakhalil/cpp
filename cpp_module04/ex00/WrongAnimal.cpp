#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal default constuctor called"<<std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
    std::cout<<"WrongAnimal copy constuctor called"<<std::endl;
    this->type = a.type;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& c){
    std::cout<<"WrongAnimal copy assignment operator called"<<std::endl;
    this->type = c.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal destructor called"<<std::endl;
}

std::string WrongAnimal::getType()const{
    return this->type;
}

void WrongAnimal::makeSound()const{
    std::cout<<this->type<<" sound"<<std::endl;
}