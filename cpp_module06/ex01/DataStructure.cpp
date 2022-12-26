#include "DataStructure.hpp"

DataStructure::DataStructure(){

}

DataStructure::DataStructure(int x, double y, std::string s){
    this->x = x;
    this->y = y;
    this->s = s;
}
DataStructure::DataStructure(const DataStructure& d){
    this->x = d.x;
    this->y = d.y;
    this->s = d.s;
}
DataStructure& DataStructure::operator = (const DataStructure& d){
    this->x = d.x;
    this->y = d.y;
    this->s = d.s;
    return *this;
}
DataStructure::~DataStructure(){

}
int DataStructure::getint()const{
    return this->x;
}
double DataStructure::getdouble()const{
    return this->y;
}
std::string DataStructure::getstr()const{
    return this->s;
}
