#include "Double.hpp"

Double::Double(){
    std::cout<<"Double defualt constructor called"<<std::endl;
}
Double::Double(std::string input){
    std::cout<<"Double constructor called"<<std::endl;
        this->setvalue(input);
}
Double::Double(const Double& c){
    std::cout<<"Double copy constructor called"<<std::endl;
    this->value = c.value;
    
}
Double& Double::operator = (const Double& c){
    std::cout<<"Double copy assignment operator called"<<std::endl;
    this->value = c.value;
    return *this;
}

Double::~Double(){
    std::cout<<"Double destructor called"<<std::endl;

}

void Double::setvalue(std::string str){
    std::stringstream ss;
    ss<<str;
    ss>>this->value;
}

double Double::getvalue()const {
    return this->value;
}

std::ostream& operator << (std::ostream& os, const Double& i){
    os<<"char: ";
    if (i.getvalue() > 128 || i.getvalue() < 0)
        os<<"impossible"<<std::endl;
    else
        os<<static_cast<char>(i.getvalue())<<std::endl;
    os<<"int: "<<static_cast<int>(i.getvalue())<<std::endl;
    os<<"float: "<<static_cast<float>(i.getvalue())<<"f"<<std::endl;
    os<<"double: "<<i.getvalue()<<std::endl;
    return os;
}