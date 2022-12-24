#include "Char.hpp"

Char::Char(){
    std::cout<<"Char defualt constructor called"<<std::endl;
}
Char::Char(std::string input){
    std::cout<<"Char constructor called"<<std::endl;
        this->setvalue(input);
}
Char::Char(const Char& c){
    std::cout<<"Char copy constructor called"<<std::endl;
    this->value = c.value;
    
}
Char& Char::operator = (const Char& c){
    std::cout<<"Char copy assignment operator called"<<std::endl;
    this->value = c.value;
    return *this;
}

Char::~Char(){
    std::cout<<"Char destructor called"<<std::endl;

}

void Char::setvalue(std::string str){
    std::stringstream ss;
    ss<<str;
    ss>>this->value;
}

char Char::getvalue()const {
    return this->value;
}

std::ostream& operator << (std::ostream& os, const Char& i){
    os<<"char: "<<i.getvalue()<<std::endl;
    os<<"int: "<<static_cast<int>(i.getvalue())<<std::endl;
    os<<"float: "<<static_cast<float>(i.getvalue())<<"f"<<std::endl;
    os<<"double: "<<static_cast<double>(i.getvalue())<<std::endl;
    return os;
}