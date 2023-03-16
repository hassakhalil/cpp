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
            //debug
            // std::cout<<"----------------------------------------- buff = "<<buff<<std::endl;
            //end debug
            if (buff > b.c.rbegin()->first || buff < b.c.begin()->first){
                int i= buff.find('\n')+1;
                std::cout<<"Error: bad input => "<<buff.substr(0,i-1)<<std::endl;
                // std::getline(file,buff,'|');
                //debug
                // std::cout<<" buffer after error ====================    "<<buff<<std::endl;
                // end debug
                // continue;
                buff = buff.substr(i,buff.size() - i);
            }
            std::getline(file,value_str);
            value = std::stod(value_str);
            //debug
            // std::cout<<"----------------------------------------------- value == "<<value<<std::endl;
            //end debug
            if (value > 1000)
                std::cout<<"Error: too large a number."<<std::endl;
            else if (value < 0)
                std::cout<<"Error: not a positive number."<<std::endl;
            else
            {
                // std::cout << std::setprecision(7);
                //debug
                // std::cout<<"*************************************************************** buff = "<<buff<<std::endl;
                //end debuf
                if (b.c.find(buff)!=b.c.end())
                {
                    //debbug
                    // std::cout<<"=======================buff found in database ----------> "<<buff<<std::endl;
                    //end debug
                    std::cout<<buff<<" => "<<value<<" = "<<value*b.c[buff]<<std::endl;
                }
                else
                {
                    //debbug
                    // std::cout<<"=======================buff  not found in database +++++++++++++> "<<buff<<std::endl;
                    //end debug
                    std::cout<<buff<<" => "<<value<<" = "<<value*(b.c.lower_bound(buff)->second)<<std::endl;}
            }
        }
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    file.close();
    return 0;
}

