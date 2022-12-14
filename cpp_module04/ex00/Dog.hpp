#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"

class Dog :public Animal{
    public:
    Dog();
    Dog(const Dog& a);
    Dog& operator = (const Dog& c);
    virtual ~Dog();
    void makeSound()const;
};
#endif