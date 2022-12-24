#ifndef CHAR_H
#define CHAR_H

#include <iostream>
#include <sstream>
class Char {
    int value;
    public:
    Char();
    Char(std::string input);
    Char(const Char& c);
    Char& operator = (const Char& c);
    ~Char();
    void setvalue(std::string str);
    char getvalue()const;
};
//add insertion operator overload
std::ostream& operator << (std::ostream& os, const Char& i);
#endif