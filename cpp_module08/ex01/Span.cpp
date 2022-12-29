#include "Span.hpp"

Span::Span(){
    std::cout<<"default constructor called"<<std::endl;
    this->numbers = 0;
    this->n = 0;
    this->empty = n;
}

Span::Span(unsigned int n){
    std::cout<<"constructor called"<<std::endl;
    this->numbers = new int[n];
    this->n = n;
    this->empty = n;
}

Span::Span(const Span& s){
    std::cout<<"copy constructor called"<<std::endl;
    this->numbers = new int[s.n];
    this->n = s.n;
    this->empty = s.empty;
    for (int i= 0; i<s.n;i++){
        this->numbers[i] = s.numbers[i];
    }   
}

Span& Span::operator=(const Span& s){
    std::cout<<"copy assignment operator called"<<std::endl;
    if (this->numbers)
        delete [] this->numbers;
    this->numbers = new int[s.n];
    this->n = s.n;
    this->empty = s.empty;
    for (int i= 0; i<s.n;i++){
        this->numbers[i] = s.numbers[i];
    }   
    return *this;
}

Span::~Span(){
    std::cout<<"destructor called"<<std::endl;
    if (this->numbers)
        delete [] this->numbers;
}

void Span::addNumber(int num){
    if (this->empty)
    {
        this->numbers[this->n - this->empty] = num;
        this->empty--;
    }
    else
    {
        std::exception e;
        throw e;
    }
}

int Span::shortestSpan(){
    if (this->empty == this->n || this->empty == this->n - 1)
    {
        std::exception e;
        throw e;
    }
    //find out shortest span
}

int Span::longestSpan(){
    if (this->empty == this->n || this->empty == this->n - 1)
    {
        std::exception e;
        throw e;
    }
    //find out shortest span
}