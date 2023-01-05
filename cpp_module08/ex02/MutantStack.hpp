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
        // template <typename T>
    class iterator: public std::iterator
    {
 
    };
    // iterator begin() {return iterator(FROM);}
    // iterator end() {return iterator(TO >= FROM? TO+1 : TO-1);}
    // MutantStack();
    // MutantStack(const MutantStack& s);
    // MutantStack& operator = (const MutantStack& s);
    // ~MutantStack();
    std::iterator begin() { return this->c.begin(); }
    std::iterator end() { return this->c.end(); }
};


#endif