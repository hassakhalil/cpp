#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
    std::cout<<"ShrubberyCreationForm default constructor called"<<std::endl;
    this->target = "Default_value";
    //d grades: sign 145, exec 137
//Create a file <target>_shrubbery in the working directory, and writes ASCII trees
//inside it.
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string t){
    std::cout<<"ShrubberyCreationForm constructor called"<<std::endl;
    this->target = t;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f){
     std::cout<<"ShrubberyCreationForm copy constructor called"<<std::endl;
     this->target = f.target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& f){
    std::cout<<"ShrubberyCreationForm copy assignment operator called"<<std::endl;
    this->target = f.target;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout<<"ShrubberyCreationForm destructor called"<<std::endl;
}
//void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    //You have to check that the form is signed and that the grade of the bureaucrat
// attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
// Whether you want to check the requirements in every concrete class or in the base
// class (then call another function to execute the form) is up to you. However, one way is
// prettier than the other one.
//}