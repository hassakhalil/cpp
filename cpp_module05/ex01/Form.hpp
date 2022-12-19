#ifndef FORM_H
#define FORM_H

class Bureaucrat;

#include <iostream>
#include "Bureaucrat.hpp"
class Form{
    private:
    const std::string name;
    bool sign;
    const int grade_sign;
    const int grade_exec;
    public:
    class GradeTooHighException : public std::exception{
        public:
        const char *what()const _NOEXCEPT{return "GradeTooHigh";} 
    };
    class GradeTooLowException : public std::exception{
        public:
        const char *what()const _NOEXCEPT{return  "GradeTooLow";} 
    };
    GradeTooHighException h;
    GradeTooLowException l;
    Form();
    Form(std::string n, int gs, int ge);
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