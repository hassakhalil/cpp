#include "Int.hpp"

Int::Int(){
    std::cout<<"Int defualt constructor called"<<std::endl;
}
Int::Int(std::string input){
    std::cout<<"Int constructor called"<<std::endl;
        this->setvalue(input);
}
Int::Int(const Int& c){
    std::cout<<"Int copy constructor called"<<std::endl;
    this->value = c.value;
    
}
Int& Int::operator = (const Int& c){
    std::cout<<"Int copy assignment operator called"<<std::endl;
    this->value = c.value;
    return *this;
}

Int::~Int(){
    std::cout<<"Int destructor called"<<std::endl;

}

void Int::setvalue(std::string str){
    std::stringstream ss;
    ss<<str;
    ss>>this->value;
}

int Int::getvalue()const {
    return this->value;
}

std::ostream& operator << (std::ostream& os, const Int& i){
    os<<"char: ";
    if (i.getvalue() > 127 || i.getvalue() < 0)
        os<<"impossible"<<std::endl;
    else
    {
        if (isprint(i.getvalue()))
            os<<"char: "<<static_cast<char>(i.getvalue())<<std::endl;
        else
            os<<"Non displayable"<<std::endl;
    }
    os<<"int: "<<i.getvalue()<<std::endl;
    os<<"float: "<<i.getvalue()<<"f"<<std::endl;
    os<<"double: "<<i.getvalue()<<std::endl;
    return os;
}