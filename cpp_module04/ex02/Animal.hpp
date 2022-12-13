#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const Animal& a);
    Animal& operator = (const Animal& c);
    virtual ~Animal();
    std::string getType()const;
    virtual void makeSound()const = 0;
};

#endif