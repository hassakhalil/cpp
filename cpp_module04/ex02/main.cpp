#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    //Animal* test = new Animal(); 
    Animal* a[10];
    for (int i = 0; i<10; i++){
        if (i%2)
            a[i] = new Cat();
        else
            a[i] = new Dog();
        a[i]->makeSound();
    }
    for (int j = 0; j <10; j++){
        delete a[j];
    }
    return 0;
}