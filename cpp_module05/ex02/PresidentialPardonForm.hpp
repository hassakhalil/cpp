#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"
#include "Form.hpp"
class PresidentialPardonForm : public Form{
    void execute(Bureaucrat const & executor) const;
};
#endif