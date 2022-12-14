#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
class Brain{
    protected:
    std::string ideas[100];
    public:
    Brain();
    Brain(const Brain& b);
    Brain& operator = (const Brain& b);
    ~Brain();
    std::string getidea(int idex)const;
    void setidea(std::string s, int index);
};
#endif