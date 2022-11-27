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
    switch (i)
    {
        case 0:
            std::cout<<"[ "<<this->array1[0]<<" ]"<<std::endl;
            this->debug();
            std::cout<<std::endl;
            i++;
        case 1:
            std::cout<<"[ "<<this->array1[1]<<" ]"<<std::endl;
            this->info();
            std::cout<<std::endl;
            i++;
        case 2:
            std::cout<<"[ "<<this->array1[2]<<" ]"<<std::endl;
            this->warning();
            std::cout<<std::endl;
            i++;
        case 3:
            std::cout<<"[ "<<this->array1[3]<<" ]"<<std::endl;
            this->error();
            std::cout<<std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl;
    }
}