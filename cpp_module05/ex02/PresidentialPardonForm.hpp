#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"
#include "Form.hpp"
class PresidentialPardonForm : public Form{
    std::string target;
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string);
    PresidentialPardonForm(const PresidentialPardonForm& f);
    PresidentialPardonForm& operator = (const PresidentialPardonForm& f);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;
};
#endif