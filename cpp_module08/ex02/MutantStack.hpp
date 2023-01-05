#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack :public std::stack<T>{
    //add iterator
    //canonical form
    public:
    class iterator{
        public:
         iterator& operator++() {return ++MutantStack::c;}
        iterator operator++(int) {return MutantStack::c++;}
        bool operator==(iterator other) const {return *MutantStack::c == *other;}
        bool operator!=(iterator other) const {return !(*MutantStack::c == *other);}
        iterator& operator*() const {return *MutantStack::c;}
    };
    iterator begin(){return this->c.begin();}
    iterator end(){return this->c.end();}
};


#endif