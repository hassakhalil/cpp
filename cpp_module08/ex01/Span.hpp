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
    void insertn(std::vector<int> elements);
};
#endif