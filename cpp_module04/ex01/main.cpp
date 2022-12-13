#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* l = new WrongAnimal();
const WrongAnimal* k = new WrongCat();
WrongCat h;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << h.getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
l->makeSound();
meta->makeSound();
k->makeSound();
h.makeSound();
//...
delete i;
delete j;
delete k;
delete l;
delete meta;
//debug
while(1);
//end debug
return 0;
}