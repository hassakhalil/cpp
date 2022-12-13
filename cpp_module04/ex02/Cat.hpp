#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"

class Cat :public Animal{
    private:
    Brain* brain;
    public:
    Cat();
    Cat(const Cat& a);
    Cat& operator = (const Cat& c);
    ~Cat();
    void makeSound()const;
};
#endif