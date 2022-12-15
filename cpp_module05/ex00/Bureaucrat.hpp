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
    std::string GetName()const;
    int GetGrade()const;
    void IncrimentGrade(int i);
    void DecrementGrade(int i);

};
//overload << operator here
std::ostream& operator << (std::ostream& os, const Bureaucrat& f);
#endif