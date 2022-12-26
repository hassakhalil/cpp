#ifndef INT_H
#define INT_H

#include <iostream>
#include <sstream>
#include <limits>
class Int {
    int value;
    public:
    Int();
    Int(std::string input);
    Int(const Int& c);
    Int& operator = (const Int& c);
    ~Int();
    void setvalue(std::string str);
    int getvalue()const;
};
//add insertion operator overload
std::ostream& operator << (std::ostream& os, const Int& i);
#endif