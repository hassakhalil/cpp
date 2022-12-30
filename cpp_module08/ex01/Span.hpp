#ifndef SPAN_H
#define SPAN_H
#include <iostream>
#include<vector>
#include <algorithm>

class Span{
    //store numbers here
    //work with vector instead
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
};
#endif