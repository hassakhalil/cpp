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


class BitcoinExchange{
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& src);
        BitcoinExchange & operator=(BitcoinExchange const & other);
        std::map<std::string,float> c;
};

#endif