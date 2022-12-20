#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
    std::cout<<"RobotomyRequestForm default constructor called"<<std::endl;
    this->target = "Default_value";
}
RobotomyRequestForm::RobotomyRequestForm(std::string t){
    std::cout<<"RobotomyRequestForm constructor called"<<std::endl;
    this->target = t;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f){
     std::cout<<"RobotomyRequestForm copy constructor called"<<std::endl;
     this->target = f.target;
}
RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& f){
    std::cout<<"RobotomyRequestForm copy assignment operator called"<<std::endl;
    this->target = f.target;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout<<"RobotomyRequestForm destructor called"<<std::endl;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    //You have to check that the form is signed and that the grade of the bureaucrat
// attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
// Whether you want to check the requirements in every concrete class or in the base
// class (then call another function to execute the form) is up to you. However, one way is
// prettier than the other one.
}