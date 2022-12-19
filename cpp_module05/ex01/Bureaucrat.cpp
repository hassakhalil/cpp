#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("Default_name"), grade(150){
    std::cout<<"Bureaucrat default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(int g, std::string n):name(n), grade(g)
{
    if (g < 1)
        throw this->h;
    else if (g > 150)
        throw this->l;
    std::cout<<"Bureaucrat constructor called"<<std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat& b):name(b.name), grade(b.grade){
    std::cout<<"Bureaucrat copy constructor called"<<std::endl;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& b){
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;
    this->grade = b.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout<<"Bureaucrat destructor called"<<std::endl;
}

std::string Bureaucrat::GetName()const{
    return this->name;
}

int Bureaucrat::GetGrade()const{
    return this->grade;
}

void Bureaucrat::IncrimentGrade(int i)
{
    if (this->grade - i <= 0)
        throw this->h;
    this->grade-=i;
}

void Bureaucrat::DecrementGrade(int i)
{
    if (this->grade + i > 150)
        throw this->l;
    this->grade+=i;
}


std::ostream& operator << (std::ostream& os, const Bureaucrat& f)
{
    os<<f.GetName()<<", bureaucrat grade "<<f.GetGrade()<<std::endl;
    return os;
}

void Bureaucrat::signForm(const Form& f){
    if(f.GetGrade_sign() < this->GetGrade())
        std::cout<<this->name<<" couldn’t sign "<<f.GetName()<<" because grade too low"<<std::endl;
    else
        std::cout<<this->name<<" signed "<<f.GetName()<<std::endl;
}