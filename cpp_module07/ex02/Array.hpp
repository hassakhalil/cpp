#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array{
    T* arr;
    int siz;
    public:
    Array();
    Array(unsigned int n);
    Array(const Array<T>& f);
    Array& operator = (const Array& f);
    ~Array();
    T& operator [](int);
    int size()const;
};

template <typename T>
int Array<T>::size()const{
    return this->siz;
}

template <typename T>
Array<T>::Array(){
    std::cout<<"default constructor called"<<std::endl;
    this->arr = 0;
    this->siz = 0;
}

template <typename T>
Array<T>::Array(unsigned int n){
    std::cout<<"constructor called"<<std::endl;
    this->siz = n;
    this->arr = new T[n];
    for (int i = 0; i < (int)n ; i++)
    {
        this->arr[i] = 0;
    }
}

template <typename T>
Array<T>::Array(const Array<T>& f){
    std::cout<<"copy constructor called"<<std::endl;
    this->siz = f.siz;
    this->arr = new T[f.siz];
    for (int i =0;i<f.siz;i++){
        this->arr[i]=f.arr[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator = (const Array<T>& f){
    if (this->arr)
        delete [] this->arr;
    this->siz = f.siz;
    this->arr = new T[f.siz];
    for (int i =0;i<f.siz;i++){
        this->arr[i]=f.arr[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array(){
    if (this->arr){
        delete [] this->arr;
    }
}

template <typename T>
T& Array<T>::operator [](int index){
    if (index >= this->siz || index < 0)
    {
        std::exception e;
        throw e;
    }
    return this->arr[index];
}

#endif