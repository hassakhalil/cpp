#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const std::string& expression){
    //debug
    std::cout<<expression<<std::endl;
    //end debug
}

RPN::RPN(const RPN& other){this->c = other.c;}

RPN& RPN::operator = (const RPN& other){this->c = other.c;return *this;}

RPN::~RPN(){}