#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
      std::ifstream file;
            std::string date;
            std::string value_str;
            // std::stringstream ss;
            double value;
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
                value = std::stod(value_str);
                //debug
                // std::cout << std::setprecision(7);
                // std::cout<<"value_str =  "<<value_str<<std::endl;
                // std::cout<<"value =  "<<value<<std::endl;
                //end debug
                c.insert(std::pair<std::string,double>(date,value));

            }
            //read line by line
            //insert in map
            file.close();
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src){this->c = src.c;}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & other){this->c = other.c;return *this;}
