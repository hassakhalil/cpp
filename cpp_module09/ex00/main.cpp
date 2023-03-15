#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int main(int ac, char **av){
    //check if file exists
    //check if file is valid (date format / price format) line by line
    //check if database file exists and valid
    //convert
    std::ifstream file;
    file.open(av[1]);
    if (ac != 2 || !file)
    {
        std::cout<<"Error: could not open file."<<std::endl;
        return 1;
    }
    //debug
    std::cout<<"filename = "<<av[1]<<std::endl;
    //end debug
    BitcoinExchange b;
}

