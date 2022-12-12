#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal& i(*j);
const WrongAnimal* l = new WrongAnimal();
const WrongAnimal* k = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i.getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;

i.makeSound(); //will output the cat sound!
j->makeSound();
l->makeSound();
meta->makeSound();
k->makeSound();
//...
return 0;
}