#ifndef DOUBLE_H
#define DOUBLE_H

#include <iostream>
#include <sstream>
class Double {
    double value;
    public:
    Double();
    Double(std::string input);
    Double(const Double& c);
    Double& operator = (const Double& c);
    ~Double();
    void setvalue(std::string str);
    double getvalue()const;
};
//add insertion operator overload
std::ostream& operator << (std::ostream& os, const Double& i);
#endif