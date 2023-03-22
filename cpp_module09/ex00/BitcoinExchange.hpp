#ifndef BITCIONEXCHANGE_HPP
#define BITCIONEXCHANGE_HPP
#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <utility>
#include <iomanip>
#include <iterator>
#include <cstdlib>
#include <iterator>
#include <fstream>
#include <sstream>
#include <cstring>


class BitcoinExchange{
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& src);
        BitcoinExchange & operator=(BitcoinExchange const & other);
        double lb(std::string date);
    private:
        std::map<std::string,float> c;
};

#endif