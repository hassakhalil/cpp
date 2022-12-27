#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array{
    //private array template
    T* array;
    int size;
    public:
    Array();
    Array(unsigned int n);
    Array& operator = (const Array& f);
    //overload []
    int size()const;
};
#endif