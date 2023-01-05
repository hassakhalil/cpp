#ifndef EASYFIND_H
#define EASYFIND_H
#include <iostream>
#include <algorithm>

template<typename T>
void easyfind(T cont, int n){
    if (find(cont.begin(), cont.end(), n) != cont.end())
        std::cout<<"Element found"<<std::endl;
    else
    {
        std::exception e;
        throw e;
    }
}

#endif