#include "RPN.hpp"

RPN::RPN(){}
int RPN::calculate(char op, int a,int b){
    int result=0;
    if (op == '+')
        result = a+b;
    else if (op == '-')
        result = a-b;
    else if (op == '*')
        result = a*b;
    else if (op == '/')
        result = a/b;
    return result;
}

RPN::RPN(const std::string& e){
    //debug
    // std::cout<<e<<std::endl;
    //end debug
    for (int i=0;i<(int)e.length();i++){
        if (e[i]!=' '&& e[i]!= '+' && e[i]!='-' && e[i]!='*' && e[i]!='/' && !isdigit(e[i]))
        {
            std::cout<<"Error: Bad token"<<std::endl;
            // std::cout <<"e["<<i<<"] = "<<e[i]<<std::endl;
            return;
        }
        //add elements to stack and skip white space
        for (int i=e.length()-1;i>=0;i--){
            if (e[i] != ' ')
                c.push(e[i]);
        }
        //
        int a=0;
        int b=0;
        int r=0;
        char p;
        while (c.size() > 1){
            a= c.top()-48;
            c.pop();
            b = c.top()-48;
            //debug
            // std::cout<<" b = "<<b<<std::endl;
            //end debug

            c.pop();
            // r = calculate(c.top(),a,b);
            //debug
            // std::cout<<" r = "<<r<<std::endl;
            //end debug

            r = calculate(c.top(),a,b);
            p = r+48;
            c.push(p);
            //debug
            std::cout<<" stack size == "<<c.size()<<std::endl;
            std::cout<<"r == "<<r<<std::endl;
            //end debug
        }
        std::cout<<c.top()<<std::endl;
    }
}

RPN::RPN(const RPN& other){this->c = other.c;}

RPN& RPN::operator = (const RPN& other){this->c = other.c;return *this;}

RPN::~RPN(){}