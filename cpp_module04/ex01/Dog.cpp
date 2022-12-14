#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog default constuctor called"<<std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& a)
{
    std::cout<<"Dog copy constuctor called"<<std::endl;
    this->type = a.type;
    for(int i = 0;i < 100;i++){
        this->brain->setidea(a.brain->getidea(i), i);
    }
}

Dog& Dog::operator = (const Dog& c){
    std::cout<<"Dog copy assignment operator called"<<std::endl;
    this->type = c.type;
    for(int i = 0;i < 100;i++){
        this->brain->setidea(c.brain->getidea(i), i);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called"<<std::endl;
    delete brain;
}

void Dog::makeSound()const{
    std::cout<<"Dog sound"<<std::endl;
}