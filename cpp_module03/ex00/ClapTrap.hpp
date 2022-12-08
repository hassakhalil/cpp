#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{
    std::string name;
    unsigned int hit;
    unsigned int energy;
    unsigned int damage;
    public:
    ClapTrap();
    ClapTrap(std::string& target);
    ClapTrap(const ClapTrap& c);
    ClapTrap& operator = (const ClapTrap& c);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif