#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"
class WrongCat:public WrongAnimal{
    public:
    WrongCat();
    WrongCat(const WrongCat& a);
    WrongCat& operator = (const WrongCat& c);
    ~WrongCat();
};

#endif