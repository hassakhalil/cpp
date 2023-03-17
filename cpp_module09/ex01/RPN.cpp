#include "RPN.hpp"

RPN::RPN(){}
int RPN::calculate(char op, int a,int b){
    int r=0;
    if (op == '+')
        r = a+b;
    else if (op == '-')
        r = a-b;
    else if (op == '*')
        r = a*b;
    else if (op == '/')
        r = a/b;
    return r;
}
bool RPN::is_operator(char c){
    if (c== '+' || c=='-' || c=='*' || c=='/')
        return true;
    return false;
}

RPN::RPN(const std::string& e){
    //debug
    // std::cout<<e<<std::endl;
    //end debug
    int a=0;
    int b=0;
    int r=0;
    for (size_t i=0;i<e.length();i++){
        if (e[i]!=' '&& !is_operator(e[i]) && !isdigit(e[i]))
        {
            std::cout<<"Error"<<std::endl;
            return;
        }
        else if (isdigit(e[i]))
            c.push(e[i]-48);
        else if (is_operator(e[i]))
        {
            if (c.empty())
            {
                std::cout<<"Error"<<std::endl;
                return;
            }
            else
            {
                b = c.top();
                c.pop();
            }
            if (c.empty())
            {
                std::cout<<"Error"<<std::endl;
                return;
            }
            else{
                a = c.top();
                c.pop();
            }
            r = calculate(e[i],a,b);
            c.push(r);
        }
    }
    if (c.size() != 1)
        std::cout<<"Error"<<std::endl;
    else
        std::cout<<c.top()<<std::endl;
}

RPN::RPN(const RPN& other){this->c = other.c;}

RPN& RPN::operator = (const RPN& other){this->c = other.c;return *this;}

RPN::~RPN(){}