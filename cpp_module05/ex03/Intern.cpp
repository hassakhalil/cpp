#include "Intern.hpp"

Intern::Intern(){
    std::cout<<"Intern default constructor called"<<std::endl;
    this->names[0] = "robotomy request";
    this->names[1] = "shrubbery creation";
    this->names[2] = "presidential pardon";

    this->forms[0] = new RobotomyRequestForm();
    this->forms[1] = new ShrubberyCreationForm();
    this->forms[2] = new PresidentialPardonForm();
}

Intern::Intern(const Intern& i){
    std::cout<<"Intern copy constructor called"<<std::endl;
    this->names[0] = i.names[0];
    this->names[1] = i.names[1];
    this->names[2] = i.names[2];

    this->forms[0] = new RobotomyRequestForm();
    this->forms[1] = new ShrubberyCreationForm();
    this->forms[2] = new PresidentialPardonForm();
}

Intern& Intern::operator = (const Intern& i){
    std::cout<<"Intern copy assignment operator called"<<std::endl;
    this->names[0] = i.names[0];
    this->names[1] = i.names[1];
    this->names[2] = i.names[2];

    this->forms[0] = new RobotomyRequestForm();
    this->forms[1] = new ShrubberyCreationForm();
    this->forms[2] = new PresidentialPardonForm();
    return *this;
}

Intern::~Intern(){
    std::cout<<"Intern destructor called"<<std::endl;
    delete this->forms[0];
    delete this->forms[1];
    delete this->forms[2];
}

Form *Intern::makeForm(std::string f,std::string t){
    for (int i = 0; i < 3; i++)
    {
        if (f == this->names[i])
        {
            std::cout<<"Intern creates "<<f<<std::endl;
            this->forms[i]->SetTarget(t);
            return this->forms[i];
        }     
    }
    std::cout<<"Error :cant create "<<f<<std::endl;
    return 0;
}