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
    int calculate(char op, int a,int b);
    bool is_operator(char c);
    private:
    std::stack<int> c;    
};

#endif