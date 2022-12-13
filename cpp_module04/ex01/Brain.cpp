#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain default constuctor called"<<std::endl;
}


Brain::Brain(const Brain& b)
{
    std::cout<<"Brain copy constuctor called"<<std::endl;
    this->ideas = b.ideas;
}

Brain& Brain::operator = (const Brain& c){
    std::cout<<"Brain copy assignment operator called"<<std::endl;
    this->ideas = c.ideas;
    return *this;
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called"<<std::endl;
}