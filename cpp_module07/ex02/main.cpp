#include "Array.hpp"

int main()
{
    try
    {
        Array<double> a(10);
        Array<double> b;
        b = a;
        std::cout << &a << std::endl;
        std::cout << &b << std::endl;
        std::cout<<"b size = "<<b.size()<<std::endl;
        // b[0];
        std::cout<<a.size()<<std::endl;
        int j = 0;
        for (int i = 0;i<10;i++)
        {
            a[i] = (double)j++/2;
            std::cout<<"a["<<i<<"] == "<<a[i]<<std::endl;
        }
        a[-1];
        // a[j];
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';//    
}
}


// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }