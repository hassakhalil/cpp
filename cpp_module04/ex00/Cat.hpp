#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat :public Animal{
    public:
    Cat();
    Cat(const Cat& a);
    Cat& operator = (const Cat& c);
    virtual ~Cat();
    void makeSound()const;
};
#endif