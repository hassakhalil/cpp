#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
    std::cout<<"PresidentialPardonForm default constructor called"<<std::endl;
    this->target = "Default_value";
}
PresidentialPardonForm::PresidentialPardonForm(std::string t){
    std::cout<<"PresidentialPardonForm constructor called"<<std::endl;
    this->target = t;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& f){
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
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    //You have to check that the form is signed and that the grade of the bureaucrat
// attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
// Whether you want to check the requirements in every concrete class or in the base
// class (then call another function to execute the form) is up to you. However, one way is
// prettier than the other one.
}
