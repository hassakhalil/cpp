#ifndef INTERN_H
#define INTERN_H
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
    Form* forms[3];
    std::string names[3];
    public:
    Intern();
    Intern(const Intern& i);
    Intern& operator = (const Intern& f);
    ~Intern();
    Form *makeForm(std::string f,std::string t);
};
#endif