#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap :protected ClapTrap{
    public:
    ScavTrap();
    ScavTrap(std::string& name);
    ScavTrap(const ScavTrap& c);
    ScavTrap& operator = (const ScavTrap& c);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};
#endif