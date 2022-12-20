#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"
#include "Form.hpp"
class ShrubberyCreationForm : public Form{
    void execute(Bureaucrat const & executor) const;
};
#endif