#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const std::string& e){
    //debug
    std::cout<<e<<std::endl;
    //end debug
    for (int i=0;i<(int)e.length();i++){
        if (e[i]!=' '&& e[i]!= '+' && e[i]!='-' && e[i]!='*' && e[i]!='/' && (e[i] > '9' || e[i] < '0'))
        {
            std::cout<<"Error: Bad token"<<std::endl;
            std::cout <<"e["<<i<<"] = "<<e[i]<<std::endl;
            return;
        }
    }
}

RPN::RPN(const RPN& other){this->c = other.c;}

RPN& RPN::operator = (const RPN& other){this->c = other.c;return *this;}

RPN::~RPN(){}