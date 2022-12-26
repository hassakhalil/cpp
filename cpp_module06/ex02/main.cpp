#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <exception>

Base *generate(void){
    Base *ptr;
    int i = rand()%3;
    if (i == 0)
        ptr = new A;
    else if (i == 1)
        ptr = new B;
    else
        ptr = new C;
     return ptr;
}

void identify(Base* p){
    std::cout<<"type of the object :";
    if (dynamic_cast<A*>(p))
        std::cout<<"A"<<std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout<<"B"<<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout<<"C"<<std::endl;
    else
        std::cout<<"not found"<<std::endl;
}

void identify(Base& p){
    std::cout<<"type of the object :";
    try{
        A& ptr = dynamic_cast<A&>(p);
        p = ptr;
        std::cout<<"A"<<std::endl;
    }
    catch (std::exception& e){
    }
    try{
        B& ptr = dynamic_cast<B&>(p);
        p = ptr;
        std::cout<<"B"<<std::endl;
    }
    catch (std::exception& e){
    }
    try{
        C& ptr = dynamic_cast<C&>(p);
        p = ptr;
        std::cout<<"C"<<std::endl;
    }
    catch (std::exception& e){
    }
}

int main()
{
    srand(time(NULL));
    Base* ptr=  generate();
    Base& ref = *ptr;
    identify(ptr);
    identify(ref);
}
