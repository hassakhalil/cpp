#include "iter.hpp"

// void test0(char c){
//     std::cout <<c<<std::endl;
// }

// void test1(int i) {
//     i++;
//     std::cout<<i <<" ";
// }

int main(){
    std::string s = "hello world!";
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    std::cout<<"----------test0-----------"<<std::endl;
    iter(&s, s.size(), test<char>);
    std::cout<<std::endl;
    std::cout<<"----------test1-----------"<<std::endl;
    iter(&arr, 10, test<int>);
    std::cout<<std::endl;    
}