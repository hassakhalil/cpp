#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"
#include "Form.hpp"
class RobotomyRequestForm : public Form{
    std::string target;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(const RobotomyRequestForm& f);
    RobotomyRequestForm& operator = (const RobotomyRequestForm& f);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
};
#endif