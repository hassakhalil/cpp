#ifndef INT_H
#define INT_H

#include <iostream>

class Int {
    std::string input;
    public:
    Int();
    Int(std::string input);
    Int(const Int& c);
    Int& operator = (const Int& c);
    ~Int();
    int s2i(std::string s)const;
    float s2f(std::string s)const;
    double s2d(std::string s)const;
    char s2c(std::string s)const;
};
//add insertion operator overload
#endif