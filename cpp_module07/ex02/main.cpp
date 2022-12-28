#include "Array.hpp"

int main()
{
    try
    {
        Array<int> a(10);
        std::cout<<a.size()<<std::endl;
        int j = 0;
        for (int i = 0;i<10;i++)
        {
            a[i] = j++;
            std::cout<<"a["<<i<<"] == "<<a[i]<<std::endl;
        }
        a[j];
    }
    catch(std::exception& e)
    {
        std::cerr << "invalid index" <<std::endl;
    }
    
}