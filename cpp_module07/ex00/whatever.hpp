#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>
T max(T x, T y){
    if (x ==y)
        return y;
    else
        return (x > y) ? x:y;
}

template <typename T>
T min(T x, T y){
    if (x ==y)
        return y;
    else
        return (x > y) ? y:x;
}

template <typename T>
void   swap(T &x, T &y){
    T tmp = x;
    x = y;
    y = tmp;
}
#endif