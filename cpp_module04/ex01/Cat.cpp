#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat default constuctor called"<<std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& a)
{
    std::cout<<"Cat copy constuctor called"<<std::endl;
    this->type = a.type;
    for(int i = 0;i < 100;i++){
        this->brain->setidea(a.brain->getidea(i), i);
    }
}

Cat& Cat::operator = (const Cat& c){
    std::cout<<"Cat copy assignment operator called"<<std::endl;
    this->type = c.type;
    for(int i = 0;i < 100;i++){
        this->brain->setidea(c.brain->getidea(i), i);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout<<"Cat destructor called"<<std::endl;
    delete brain;
}

void Cat::makeSound()const{
    std::cout<<"Cat sound"<<std::endl;
}