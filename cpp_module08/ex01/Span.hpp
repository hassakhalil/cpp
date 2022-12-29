#ifndef SPAN_H
#define SPAN_H
#include <iostream>

class Span{
    //store numbers here
    int* numbers;
    int n;
    int empty;
    public:
    Span();
    Span(unsigned int n);
    Span(const Span& s);
    Span& operator = (const Span& s);
    ~Span();
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
};
#endif