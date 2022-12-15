#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
class Bureaucrat{
    protected:
    const std::string name;
    int grade;
    public:
    Bureaucrat();
    Bureaucrat(int grade, std::string name);
    Bureaucrat(const Bureaucrat& b);
    Bureaucrat& operator = (const Bureaucrat& b);
    ~Bureaucrat();
    std::string GetName();
    int GetGrade();
    void IncrimentGrade(int i);
    void DecrementGrade(int i);

};
//overload << operator here
#endif