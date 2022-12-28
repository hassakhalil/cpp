#include "Array.hpp"

int main()
{
    try
    {
        Array<double> a(10);
        Array<int> b;
        std::cout<<"b size = "<<b.size()<<std::endl;
        b[0];
        std::cout<<a.size()<<std::endl;
        int j = 0;
        for (int i = 0;i<10;i++)
        {
            a[i] = (double)j++/2;
            std::cout<<"a["<<i<<"] == "<<a[i]<<std::endl;
        }
        a[-1];
        a[j];
    }
    catch(std::exception& e)
    {
        std::cerr << "exception :invalid index" <<std::endl;
    }
    
}