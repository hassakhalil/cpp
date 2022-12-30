#include "Span.hpp"

Span::Span(){
    std::cout<<"default constructor called"<<std::endl;
}

Span::Span(unsigned int n){
    std::cout<<"constructor called"<<std::endl;
    this->vect.reserve(n);
}

Span::Span(const Span& s){
    std::cout<<"copy constructor called"<<std::endl;
    for (int i = 0 ; i < (int)s.vect.size() ; i++){
        this->vect.push_back(s.vect[i]);
    }
}

Span& Span::operator=(const Span& s){
    std::cout<<"copy assignment operator called"<<std::endl;
    this->vect = s.vect;
    return *this;
}

Span::~Span(){
    std::cout<<"destructor called"<<std::endl;
}

void Span::addNumber(int num){
    if (this->vect.size() +1 <= this->vect.capacity())
        this->vect.push_back(num);
    else
    {
        std::exception e;
        throw e;
    }
}

int Span::shortestSpan(){
    if (this->vect.size() <= 1)
    {
        std::exception e;
        throw e;
    }
    std::sort(this->vect.begin(), this->vect.end());
    int i = 0;
    int shortest = this->vect[i + 1] - this->vect[i];
    for (i = 0; i < (int)this->vect.size() - 1; i++){
        int d = this->vect[i + 1] - this->vect[i];
        if (d < shortest)
            shortest = d;
    }
    return shortest;
}

int Span::longestSpan(){
    if (this->vect.size() <= 1)
    {
        std::exception e;
        throw e;
    }
    return *std::max_element(this->vect.begin(), this->vect.end()) - *std::min_element(this->vect.begin(), this->vect.end());
}

//insert multiple elements at the same time
void Span::insertn(std::vector<int> elements){
    if (this->vect.size() + elements.size() <= this->vect.capacity())
        this->vect.insert(this->vect.begin(), elements.begin(),elements.end());
    else
    {
        std::exception e;
        throw e;
    }
}