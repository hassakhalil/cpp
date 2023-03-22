#include "PmergeMe.hpp"
#include <iostream>
int main(int ac, char **av){
    if (ac <= 2){
        std::cout << "Error" << std::endl;
        return 1;
    }
    try{
        PmergeMe a(ac, av);
    }
    catch(std::exception& e){
        std::cout << "Error" << std::endl;
        return 1;
    }
    return 0;
}