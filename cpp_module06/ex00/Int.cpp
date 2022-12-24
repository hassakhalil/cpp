#include "Int.hpp"

Int::Int(){
    std::cout<<"Int defualt constructor called"<<std::endl;
    this->input = "default_value";
}
Int::Int(std::string input){
    std::cout<<"Int constructor called"<<std::endl;
    this->input = input;
}
Int::Int(const Int& c){
    std::cout<<"Int copy constructor called"<<std::endl;
    this->input = c.input;
}
Int& Int::operator = (const Int& c){
    std::cout<<"Int copy assignment operator called"<<std::endl;
    this->input = c.input;
}
Int::~Int(){
    std::cout<<"Int destructor called"<<std::endl;

}
int Int::s2i(std::string s)const{

}
float Int::s2f(std::string s)const{

}
double Int::s2d(std::string s)const{

}
char Int::s2c(std::string s)const{

}