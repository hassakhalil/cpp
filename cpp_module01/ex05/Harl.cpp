#include "Harl.hpp"

void Harl::debug(void){
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void Harl::info(void){
    std::cout<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning(void){
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void){
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

Harl::Harl()
{
    this->array1[0] = "DEBUG";
    this->array1[1] = "INFO";
    this->array1[2] = "WARNING";
    this->array1[3] = "ERROR";
    this->array2[0] = this->debug;
    this->array2[1] = this->info;
    this->array2[2] = this->warning;
    this->array2[3] = this->error;
}

Harl::~Harl()
{
    return;
}

void Harl::complain(std::string level)
{
    int i;
    for (i = 0; i < 4; i++){
        if (!level.compare(this->array1[i]))
            break;
    }
    if (i != 4)
        this->array2[i]();
    else
        std::cout<<"error"<<std::endl;
}