#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form{
    std::string target;
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm& f);
    ShrubberyCreationForm& operator = (const ShrubberyCreationForm& f);
    ~ShrubberyCreationForm();
    void PrintTree();
    void execute(Bureaucrat const & executor) const;
};

#endif