#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class  Weapon {
    std::string type;
    public:
    Weapon(std::string type);
    ~Weapon();
    std::string& getType();
    void setType(std::string new_type);
};
#endif