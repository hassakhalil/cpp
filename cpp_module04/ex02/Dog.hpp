#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog :public Animal{
    private:
    Brain* brain;
    public:
    Dog();
    Dog(const Dog& a);
    Dog& operator = (const Dog& c);
    ~Dog();
    void makeSound()const;
};
#endif