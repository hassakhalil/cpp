#include "Intern.hpp"

Intern::Intern(){
    std::cout<<"Intern default constructor called"<<std::endl;
}

Intern::Intern(const Intern& i){
    std::cout<<"Intern copy constructor called"<<std::endl;
}

Intern& Intern::operator = (const Intern& f){
    std::cout<<"Intern copy assignment operator called"<<std::endl;
}

Intern::~Intern(){
    std::cout<<"Intern destructor called"<<std::endl;
}

Form *Intern::makeForm(std::string f,std::string t){

}