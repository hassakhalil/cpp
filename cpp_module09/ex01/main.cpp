#include "RPN.hpp"
#include <cctype>

int main(int ac, char **av){
    if (ac != 2)
    {
        std::cout<<"Error: bad input"<<std::endl;
        return 1;    
    }
    RPN s(av[1]);
}