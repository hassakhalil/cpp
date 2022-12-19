#include "Form.hpp"

int main(){
    //test here
    try
    {
        Form a("form_A", 30, 20);
        Form b("form_A", 100, 100);
        Bureaucrat c(1, "c");
        Bureaucrat d(101, "d");
        a.beSigned(c);
        b.beSigned(d);
        //c.IncrimentGrade(0);
        std::cout<<a<<b;
    }
    catch (std::exception& e)
    {
        std::cout<<"exception caught "<<e.what()<<std::endl;
    }
}