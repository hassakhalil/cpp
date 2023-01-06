#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout<<"------------MutantStack output------------"<<std::endl;
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout<< mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
std::cout<<"------------std::list output------------"<<std::endl;
std::list<int> ls;
ls.push_back(5);
ls.push_back(17);
std::cout << *ls.begin() << std::endl;
ls.pop_back();
std::cout<< ls.size() << std::endl;
ls.push_back(3);
ls.push_back(5);
ls.push_back(737);
//[...]
ls.push_back(0);
std::list<int>::iterator it2 = ls.begin();
std::list<int>::iterator ite2 = ls.end();
++it2;
--it2;
while (it2 != ite2)
{
std::cout << *it2 << std::endl;
++it2;
}
return 0;
}