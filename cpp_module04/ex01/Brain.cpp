#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain default constuctor called"<<std::endl;
}


Brain::Brain(const Brain& b)
{
    std::cout<<"Brain copy constuctor called"<<std::endl;
    for (int i = 0;i < 100; i++){
        this->ideas[i] = b.ideas[i];
    }
}

Brain& Brain::operator = (const Brain& c){
    std::cout<<"Brain copy assignment operator called"<<std::endl;
    for (int i = 0;i < 100; i++){
        this->ideas[i] = c.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called"<<std::endl;
}