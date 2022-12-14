#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain default constuctor called"<<std::endl;
}


Brain::Brain(const Brain& b)
{
    std::cout<<"Brain copy constuctor called"<<std::endl;
   for (int i = 0;i < 100; i++){
        this->ideas[i] = b.getidea(i);
    }
}

Brain& Brain::operator = (const Brain& c){
    std::cout<<"Brain copy assignment operator called"<<std::endl;
    for (int i = 0;i < 100; i++){
        this->ideas[i] = c.getidea(i);
    }
    return *this;
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called"<<std::endl;
}

std::string Brain::getidea(int index)const{
    return this->ideas[index];
}

void Brain::setidea(std::string s, int index){
    this->ideas[index] = s;
}