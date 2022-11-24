#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {
    Weapon* weapon;
    std::string name;
    public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon& new_weapon);
    void attack();
};
#endif