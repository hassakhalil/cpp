#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
    std::cout<<"PresidentialPardonForm default constructor called"<<std::endl;
    this->target = "Default_value";
//      Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
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
    if (this->GetSign())
    {
        if (executor.GetGrade() <=137)
            std::cout<<"PresidentialPardonForm executed"<<std::endl;
        else
            throw this->l;
    }
    else
        throw this->s;
}

 void PresidentialPardonForm::inform()const{
    std::cout<<this->target<<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
 }
