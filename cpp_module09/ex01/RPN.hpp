#ifndef RPN_H
#define RPN_H
#include <string>
#include <iostream>
#include <stack>

class RPN{
    public:
    RPN();
    RPN(const std::string& expression);
    RPN(const RPN& other);
    RPN& operator = (const RPN& other);
    ~RPN();
    std::stack<int> c;    
};

#endif