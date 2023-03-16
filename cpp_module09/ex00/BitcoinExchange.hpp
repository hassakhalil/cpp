#ifndef BITCIONEXCHANGE_HPP
#define BITCIONEXCHANGE_HPP
#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <utility>

class BitcoinExchange{
    public:
        BitcoinExchange(){

            std::ifstream file;
            std::string date;
            std::string value_str;
            std::stringstream ss;
            float value;
            file.open("data.csv");
            if (!file)
            {
                std::cout<<"Error: could not open data base file"<<std::endl;
                return;
            }
            std::getline(file, date);
            while (!std::getline(file, date, ',').eof())
            {
                std::getline(file, value_str);
                // ss << value_str; 
                // ss >> value;
                _data.insert(std::pair<std::string,float>(date,std::stof(value_str)));
            }
            //read line by line
            //insert in map
            file.close();
        }
        ~BitcoinExchange(){
            //debug
            std::cout<<"destructor"<<std::endl;
            //end debug
        }
        BitcoinExchange(const BitcoinExchange& src){
            //debug
            std::cout<<"copy constructor"<<std::endl;
            //end debug
            this->_data = src._data;
        }
        BitcoinExchange & operator=(BitcoinExchange const & other){
            //debug
            std::cout<<"copy assignment operator overload"<<std::endl;
            //end debug

            _data = other._data;
            return *this;
        }
    private:
    std::map<std::string,float> _data;
};

#endif