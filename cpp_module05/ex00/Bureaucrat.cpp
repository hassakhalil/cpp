#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout<<"Bureaucrat default constructor called"<<std::endl;
    this->name = "Default_name";
    this->grade = 150;
}

Bureaucrat::Bureaucrat(int g, std::string n)
{
    //if (g > 150 || g < 1)
            //else ->exception
    std::cout<<"Bureaucrat constructor called"<<std::endl;
    this->name = n;
    this->grade = g;
}


Bureaucrat::Bureaucrat(const Bureaucrat& b){
    std::cout<<"Bureaucrat copy constructor called"<<std::endl;
    this->name = b.name;
    this->grade = b.grade;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& b){
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;
    this->name = b.name;
    this->grade = b.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout<<"Bureaucrat destructor called"<<std::endl;
}

std::string Bureaucrat::GetName(){
    return this->name;
}

int Bureaucrat::GetGrade(){
    return this->grade;
}

void Bureaucrat::IncrimentGrade(int i)
{
    if (this->grade - i > 0)
        this->grade-=i;
    //else ->exception
}

void Bureaucrat::DecrementGrade(int i)
{
    if (this->grade + i <= 150)
        this->grade+=i;
        //else ->exception
}
