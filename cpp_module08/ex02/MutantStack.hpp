#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack :public std::stack<T>{
    public:
    MutantStack();
    MutantStack(const MutantStack& m);
    MutantStack& operator =(const MutantStack& m);
    ~MutantStack();
    class iterator{
        T *value;
        public:
        iterator();
        iterator(const iterator& i);
        iterator& operator =(const iterator& i);
        ~iterator();
        void setValue(T& val);
        iterator& operator++();
        iterator operator-- ();
        bool operator==(iterator other) const;
        bool operator!=(iterator other) const;
        T operator*() const ;
    };
    iterator begin();
    iterator end();
};

template <typename T>
MutantStack<T>::MutantStack(){
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& m){
    *this = m;
}
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& m){
    *this = m;
    return *this;
}
template <typename T>
MutantStack<T>::~MutantStack(){
}

template <typename T>
MutantStack<T>::iterator::iterator(){
    this->value = 0;
}
template <typename T>
MutantStack<T>::iterator::iterator(const MutantStack<T>::iterator& i){
    this->value = i.value;
}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator =(const MutantStack<T>::iterator& i){
    this->value = i.value;
    return *this;
}

template <typename T>
MutantStack<T>::iterator::~iterator(){

}

template <typename T>
void MutantStack<T>::iterator::setValue(T& val){
            this->value = &val;
}
template <typename T>

typename MutantStack<T>::iterator& MutantStack<T>::iterator::operator++() {
        ++this->value;
        return *this;
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator-- (){
        --this->value;
        return *this;
}
template <typename T>
bool MutantStack<T>::iterator::operator==(MutantStack<T>::iterator other) const {
    return this->value == other.value;
}
template <typename T>
bool MutantStack<T>::iterator::operator!=(MutantStack<T>::iterator other) const {
    return !(this->value == other.value);}
template <typename T>
T  MutantStack<T>::iterator::operator*() const {
    return *this->value;}
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
        iterator it;
        it.setValue(*this->c.begin());
        return it;}
template<typename T>

typename MutantStack<T>::iterator MutantStack<T>::end(){
        iterator it;
        it.setValue(*this->c.end());
        return it;}
#endif