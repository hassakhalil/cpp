#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T, typename U, typename V>
void iter(T add, U len, V fct){
    for(U i = 0; i<len ; i++)
    {
        fct((*add)[i]);
    }
}
#endif