#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(100);
        std::vector<int> elements(100, 121);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.insertn(elements.begin(),elements.end(),(int)elements.size());
        //test
        //sp.addNumber(80);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
return 0;
}