#ifndef EASYFIND_H
#define EASYFIND_H
#include <iostream>
#include <algorithm>

template<typename T>
void easyfind(T cont, int n){
//find the first occurrence of (int n) in (T cont)
    //else->throw an exception or return an error
    if (find(cont.begin(), cont.end(), n) != cont.end())
        std::cout<<"Element found"<<std::endl;
    else
    {
        std::exception e;
        throw e;
    }
}

#endif