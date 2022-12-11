#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ScavTrap.hpp"

class  FragTrap :protected ScavTrap{
    public:
    FragTrap();
    FragTrap(std::string& name);
    FragTrap(const FragTrap& c);
    FragTrap& operator = (const FragTrap& c);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif