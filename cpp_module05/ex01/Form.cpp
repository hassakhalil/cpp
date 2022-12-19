#include "Form.hpp"

Form::Form():name("Default_name"), sign(0), grade_sign(0),grade_exec(0){
     std::cout<<"Form default constructor called"<<std::endl;
}

Form::Form(const Form& f): name(f.name), sign(f.sign), grade_sign(f.grade_sign), grade_exec(f.grade_exec){
    std::cout<<"Form copy constructor called"<<std::endl;
}

Form& Form::operator = (const Form& f){
    std::cout<<"Form copy assignment operator called"<<std::endl;
    this->sign = f.sign;
}

Form::~Form()
{
    std::cout<<"Form destructor called"<<std::endl;
}

std::string Form::GetName()const{
    return this->name;
}

bool Form::GetSign()const{
    return this->sign;
}

int Form::GetGrade_sign()const{
    return this->grade_sign;
}

int Form::GetGrade_exec()const{
    return this->grade_exec;
}

void Form::beSigned(Bureaucrat b){
    //do some stuff here
}

std::ostream& operator << (std::ostream& os, const Form& f){
//do some stuff here
}