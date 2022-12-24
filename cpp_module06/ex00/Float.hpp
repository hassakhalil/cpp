#ifndef FLOAT_H
#define FLOAT_H

#include <iostream>
#include <sstream>
class Float {
    float value;
    public:
    Float();
    Float(std::string input);
    Float(const Float& c);
    Float& operator = (const Float& c);
    ~Float();
    void setvalue(std::string str);
    float getvalue()const;
};
//add insertion operator overload
std::ostream& operator << (std::ostream& os, const Float& i);
#endif