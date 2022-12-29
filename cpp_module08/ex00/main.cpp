#include "easyfind.hpp"
#include <vector>

int main(){

    try
    {
        std::vector<int> vect;
        vect.push_back(1);
        vect.push_back(2);
        vect.push_back(13);
        vect.push_back(15);
        vect.push_back(17);
        vect.push_back(100);
        easyfind(vect, 15);
        easyfind(vect, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}