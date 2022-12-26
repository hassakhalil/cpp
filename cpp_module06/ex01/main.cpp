#include "DataStructure.hpp"
#include <cstdint>

uintptr_t serialize(DataStructure* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

DataStructure* deserialize(uintptr_t raw){
    return reinterpret_cast<DataStructure*>(raw);
}
int main(){
    DataStructure obj(10, 100.001, "hello world");
    DataStructure *d1 = &obj;
    uintptr_t v = serialize(d1);
    DataStructure *dd = deserialize(v);
    std::cout<<"x = "<<dd->getint()<<std::endl;
    std::cout<<"y = "<<dd->getdouble()<<std::endl;
    std::cout<<"s = "<<dd->getstr()<<std::endl;

}