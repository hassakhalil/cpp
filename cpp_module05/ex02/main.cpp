#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    //test
    try
    {
        ShrubberyCreationForm s("home");
        Bureaucrat b(1,"b");
        Bureaucrat a(140,"a");
        s.beSigned(b);
        s.execute(b);
        PresidentialPardonForm p("xxx");
        p.beSigned(a);
        p.execute(a);
        RobotomyRequestForm  r("yyyy"); 
        r.beSigned(b);
        r.execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception caught ---->"<< e.what() << '\n';
    }
    
}