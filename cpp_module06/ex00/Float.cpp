#include "Float.hpp"

Float::Float(){
    std::cout<<"Float defualt constructor called"<<std::endl;
}
Float::Float(std::string input){
    std::cout<<"Float constructor called"<<std::endl;
        this->setvalue(input);
}
Float::Float(const Float& c){
    std::cout<<"Float copy constructor called"<<std::endl;
    this->value = c.value;
    
}
Float& Float::operator = (const Float& c){
    std::cout<<"Float copy assignment operator called"<<std::endl;
    this->value = c.value;
    return *this;
}

Float::~Float(){
    std::cout<<"Float destructor called"<<std::endl;

}

void Float::setvalue(std::string str){
    std::stringstream ss;
    ss<<str;
    ss>>this->value;
}

float Float::getvalue()const {
    return this->value;
}

std::ostream& operator << (std::ostream& os, const Float& i){
    os<<"char: ";
    if (i.getvalue() > 127 || i.getvalue() < 0)
        os<<"impossible"<<std::endl;
    else
    {
        if (isprint(i.getvalue()))
            os<<static_cast<char>(i.getvalue())<<std::endl;
        else
            os<<"Non displayable"<<std::endl;
    }
    if (i.getvalue() > (float)std::numeric_limits<int>::max() ||i.getvalue() < (float)std::numeric_limits<int>::min())
        os<<"int :impissible"<<std::endl;
    else
        os<<"int: "<<static_cast<int>(i.getvalue())<<std::endl;
    os<<"float: "<<i.getvalue()<<"f"<<std::endl;
    os<<"double: "<<i.getvalue()<<std::endl;
    return os;
}