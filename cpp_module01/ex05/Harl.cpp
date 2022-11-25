#include "Harl.hpp"

Harl::Harl()
{
    return;
}

Harl::~Harl()
{
    return;
}

void Harl::complain(std::string level)
{
    //point to the functions
    //create an array to names and array to functions
    void(*function)() = level;
    this->level();
}