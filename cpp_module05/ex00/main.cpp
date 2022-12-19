#include "Bureaucrat.hpp"


int main(){
    try
    {
        Bureaucrat a(15, "a");
        Bureaucrat b(150, "b");
        Bureaucrat c(1, "c");
        c.IncrimentGrade(0);
        std::cout<<a<<b<<c;
    }
    catch (std::exception& e)
    {
        std::cout<<"exception caught "<<e.what()<<std::endl;
    }
}