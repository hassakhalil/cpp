#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int main(int ac, char **av){
    //check if file exists
    //check if file is valid (date format / price format) line by line
    //check if database file exists and valid
    //convert
    std::ifstream file;
    std::string buff;
    float value;
    file.open(av[1]);
    if (ac != 2 || !file)
    {
        std::cout<<"Error: could not open file."<<std::endl;
        return 1;
    }
    try{
    BitcoinExchange b;
        std::getline(file, buff);
        while (!std::getline(file, buff).eof())
        {
            //check date
            std::getline(file, buff, '|');
            
        }
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    file.close();
    return 0;
}

