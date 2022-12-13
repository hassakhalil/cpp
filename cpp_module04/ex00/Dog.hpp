#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"

class Dog :public Animal{
    public:
    Dog();
    Dog(const Dog& a);
    Dog& operator = (const Dog& c);
    ~Dog();
    void makeSound()const;
};
#endif