#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H

#include <iostream>

class DataStructure {
    int x;
    double y;
    std::string s;
    public:
    DataStructure();
    DataStructure(int x, double y, std::string s);
    DataStructure(const DataStructure& d);
    DataStructure& operator = (const DataStructure& c);
    ~DataStructure();
    int getint()const;
    double getdouble()const;
    std::string getstr()const;
};
#endif