#ifndef SPAN_H
#define SPAN_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <array>

class Span{
    std::vector<int> vect;
    public:
    Span();
    Span(unsigned int n);
    Span(const Span& s);
    Span& operator = (const Span& s);
    ~Span();
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    template<typename  T>
    void insertn(T start,T end ,int size);
};

//insert multiple elements at the same time
template< typename T >
void Span::insertn(T start, T end ,int size){
    if (this->vect.size() + size <= this->vect.capacity())
        this->vect.insert(this->vect.begin(), start, end);
    else
    {
        std::exception e;
        throw e;
    }
}
#endif