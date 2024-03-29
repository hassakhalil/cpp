#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
      std::ifstream file;
            std::string date;
            std::string value_str;
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
                value = std::strtod(value_str.c_str(),NULL);
                c.insert(std::pair<std::string,double>(date,value));

            }
            file.close();
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src){this->c = src.c;}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & other){this->c = other.c;return *this;}

double BitcoinExchange::lb(std::string date){
    double res=0;
    if (c.find(date) != c.end())
        res = c[date];
    else if (date < c.begin()->first)
        res = c.begin()->second;
    else
    {
        std::map<std::string,float>::iterator it = c.begin();
        while (it != c.end())
        {
            if (it->first < date)
                res = it->second;
            it++;
        }
    }
    return res;
}

