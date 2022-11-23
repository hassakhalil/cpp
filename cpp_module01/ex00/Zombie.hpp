#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
    std::string name;
    public:
    Zombie(void);
    ~Zombie(void);
    void name_zombie(std::string n);
    void announce(void);
};
#endif