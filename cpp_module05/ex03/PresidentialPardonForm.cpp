#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5){
    std::cout<<"PresidentialPardonForm default constructor called"<<std::endl;
    this->target = "Default_value";
}
PresidentialPardonForm::PresidentialPardonForm(std::string t): Form("PresidentialPardonForm", 25, 5){
    std::cout<<"PresidentialPardonForm constructor called"<<std::endl;
    this->target = t;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& f): Form("PresidentialPardonForm", 25, 5){
     std::cout<<"PresidentialPardonForm copy constructor called"<<std::endl;
     this->target = f.target;
}
PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& f){
    std::cout<<"PresidentialPardonFormorm copy assignment operator called"<<std::endl;
    this->target = f.target;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout<<"PresidentialPardonForm destructor called"<<std::endl;
}

void PresidentialPardonForm::SetTarget(std::string s){
    this->target = s;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (this->GetSign())
    {
        if (executor.GetGrade() <=137)
        {
            this->inform();
            std::cout<<"PresidentialPardonForm executed"<<std::endl;
        }
        else
            throw this->l;
    }
    else
        throw this->s;
}

 void PresidentialPardonForm::inform()const{
    std::cout<<this->target<<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
 }
