#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"
#include "Form.hpp"
class RobotomyRequestForm : public Form{
    void execute(Bureaucrat const & executor) const;
};
#endif