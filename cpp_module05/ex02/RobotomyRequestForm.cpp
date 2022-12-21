#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
    std::cout<<"RobotomyRequestForm default constructor called"<<std::endl;
    this->target = "Default_value";
    // Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.
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
    if (this->GetSign())
    {
        if (executor.GetGrade() <=137)
            std::cout<<"RobotomyRequestForm executed"<<std::endl;
        else
            throw this->l;
    }
    else
        throw this->s;
}