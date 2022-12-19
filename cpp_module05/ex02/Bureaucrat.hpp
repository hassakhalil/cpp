#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

class Form;
#include <iostream>
#include "Form.hpp"

class Bureaucrat{
    protected:
    const std::string name;
    int grade;
    public:
    class GradeTooHighException : public std::exception{
        public:
        const char *what()const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
        const char *what()const throw();
    };
    GradeTooHighException h;
    GradeTooLowException l;
    Bureaucrat();
    Bureaucrat(int grade, std::string name);
    Bureaucrat(const Bureaucrat& b);
    Bureaucrat& operator = (const Bureaucrat& b);
    ~Bureaucrat();
    std::string GetName()const;
    int GetGrade()const;
    void IncrimentGrade(int i);
    void DecrementGrade(int i);
    void signForm(const Form& f);
};

std::ostream& operator << (std::ostream& os, const Bureaucrat& f);
#endif