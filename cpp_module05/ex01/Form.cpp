#include "Form.hpp"

Form::Form():name("Default_name"), sign(0), grade_sign(150),grade_exec(150){
     std::cout<<"Form default constructor called"<<std::endl;
}

Form::Form(std::string n, int gs, int ge): name(n), sign(0), grade_sign(gs), grade_exec(ge){
    std::cout<<"Form constructor called"<<std::endl;
    if (this->grade_sign > 150 || this->grade_exec >150)
        throw this->l;
    if (this->grade_sign < 1 || this->grade_exec <1)
        throw this->h;

}

Form::Form(const Form& f): name(f.name), sign(0), grade_sign(f.grade_sign), grade_exec(f.grade_exec){
    std::cout<<"Form copy constructor called"<<std::endl;
}

Form& Form::operator = (const Form& f){
    std::cout<<"Form copy assignment operator called"<<std::endl;
    this->sign = f.sign;
    return *this;
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
    b.signForm(*this);
    if (b.GetGrade() > this->grade_sign)
        throw this->l;
    this->sign = 1;
}

std::ostream& operator << (std::ostream& os, const Form& f){
    os<<f.GetName()<<", Form status (signed or not) "<<f.GetSign()<<", grade required to sign it "<<f.GetGrade_sign()<<", grade required to execute it "<<f.GetGrade_exec()<<std::endl;
    return os;
}


const char *Form::GradeTooHighException::what()const throw(){
    return "GradeTooHigh";
}

const char *Form::GradeTooLowException::what()const throw(){
    return "GradeTooLow";
}