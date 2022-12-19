#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"
class Form{
    private:
    const std::string name;
    bool sign;
    const int grade_sign;
    const int grade_exec;
    public:
    Form();
    Form(const Form& f);
    Form& operator = (const Form& f);
    ~Form();
    std::string GetName()const;
    bool GetSign()const;
    int GetGrade_sign()const;
    int GetGrade_exec()const;
    void beSigned(Bureaucrat b);
};
std::ostream& operator << (std::ostream& os, const Form& f);
#endif