#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>

class WrongAnimal{
    protected:
    std::string type;
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& a);
    WrongAnimal& operator = (const WrongAnimal& c);
    virtual ~WrongAnimal();
    std::string getType()const;
    void makeSound()const;
};

#endif