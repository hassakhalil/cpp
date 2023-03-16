#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int main(int ac, char **av){
    std::ifstream file;
    std::string buff;
    std::string value_str;
    double value;

    if (ac != 2)
    {
        std::cout<<"Error: could not open file."<<std::endl;
        return 1;  
    }
    file.open(av[1]);
    if (!file){
        std::cout<<"Error: could not open file."<<std::endl;
        return 1;  
    }
    try{
        BitcoinExchange b;
        std::getline(file, buff);
        while (!std::getline(file, buff,'|').eof())
        {
            if (buff > b.c.rbegin()->first || buff < b.c.begin()->first)
            {
                std::cout<<"Error: bad input => "<<buff<<std::endl;
            }
            else{ 
                std::getline(file,value_str);
                value = std::stod(value_str);
                if (value > 1000)
                    std::cout<<"Error: too large a number."<<std::endl;
                else if (value < 0)
                    std::cout<<"Error: not a positive number."<<std::endl;
                else
                {
                    std::cout << std::setprecision(7);
                    if (b.c.count(buff))
                        std::cout<<buff<<" => "<<value<<" = "<<value*b.c[buff]<<std::endl;
                    else
                        std::cout<<buff<<" => "<<value<<" = "<<value*(b.c.lower_bound(buff)->second)<<std::endl;
                }
            }
        }
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    file.close();
    return 0;
}

