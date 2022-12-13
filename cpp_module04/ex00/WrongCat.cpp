#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat default constuctor called"<<std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& a)
{
    std::cout<<"WrongCat copy constuctor called"<<std::endl;
    this->type = a.type;
}

WrongCat& WrongCat::operator = (const WrongCat& c){
    std::cout<<"WrongCat copy assignment operator called"<<std::endl;
    this->type = c.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat destructor called"<<std::endl;
}
