#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72,45){
    std::cout<<"RobotomyRequestForm default constructor called"<<std::endl;
    this->target = "Default_value";
}
RobotomyRequestForm::RobotomyRequestForm(std::string t): Form("RobotomyRequestForm", 72,45){
    std::cout<<"RobotomyRequestForm constructor called"<<std::endl;
    this->target = t;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f): Form("RobotomyRequestForm", 72,45){
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

void RobotomyRequestForm::SetTarget(std::string s){
    this->target = s;
}

void RobotomyRequestForm::inform()const{
    if (std::time(0)%2)
        std::cout<<this->target<<" has been robotomized successfully"<<std::endl;
    else
        std::cout<<" the robotomy failed"<<std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (this->GetSign())
    {
        if (executor.GetGrade() <=137)
        {
            this->inform();
            std::cout<<"RobotomyRequestForm executed"<<std::endl;
        }
        else
            throw this->l;
    }
    else
        throw this->s;
}