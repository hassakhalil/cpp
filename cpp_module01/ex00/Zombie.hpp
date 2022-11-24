#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
    std::string name;
    public:
    Zombie(std::string n);
    ~Zombie(void);
    void announce(void);
};
#endif