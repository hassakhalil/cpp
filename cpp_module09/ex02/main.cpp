// #include "PmergeMe.hpp"
#include <iostream>
int main(int ac, char **av){

    //debug
    av[ac]=0;
    std::cout << "ac: " << ac << std::endl;
    //end debug
    if (ac <= 2){
        std::cout << "Error" << std::endl;
        return 1;
    }
    //check if all arguments are positive numbers and unique
    //display before: <numbers>
    //display after: <numbers>
    //Time to process a range of <range_size> elements with std::<container1> : <time1> us
    //Time to process a range of <range_size> elements with std::<container2> : <time2> us


}