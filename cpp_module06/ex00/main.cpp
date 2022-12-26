#include "Int.hpp"
#include "Char.hpp"
#include "Float.hpp"
#include "Double.hpp"
//handle down cast

bool invalid_input(std::string s){
  if (s.size() != 1)
  {
    if (s=="nan"|| s=="-inf"||s=="+inf")
        return 0;
    else
    {
      int f = 0;
      int p = 0;
      for (int i=0;i<(int)s.size();i++)
      {
        if (s[i] == 'f')
        {
          if (i + 1 != (int)s.size())
            return 1;
          f++;
        }
        else if (s[i]=='.')
          p++;
        else if (s[i] > 57|| s[i] < 48)//is not digit
          return 1;
      }
      if (f > 1 || p > 1)
        return 1;
    }
  }
  return 0;
}

int main(int ac, char* av[]){
  if (ac == 2 && !invalid_input(av[1]))
  {
    std::string s = av[1];
    if (s.size() == 1 && (s[0] > '9' || s[0] < '0'))
    {
      Char a(s);
      std::cout<<"[ char ]-----------"<<std::endl;
      std::cout<<a;
    }
    else if (s == "nan")
    {
            std::cout<<"char: impossible"<<std::endl; 
            std::cout<<"int: impossible"<<std::endl; 
            std::cout<<"float: nanf"<<std::endl; 
            std::cout<<"double: nan"<<std::endl;
    }
    else if (s == "+inf"|| s == "-inf")
    {
            std::cout<<"char: impossible"<<std::endl; 
            std::cout<<"int: impossible"<<std::endl; 
            std::cout<<"float: "<<s<<std::endl; 
            std::cout<<"double: "<<s<<std::endl;

    }
    else if (s.find('f', 0) != std::string::npos)
    {
        s = s.substr(0, s.size()-1);
        Float c(s);
        std::cout<<"[ float ]------------"<<std::endl;
        std::cout<<c;
    }
    else if (s.find('.', 0) != std::string::npos){
      Double e(s);
      std::cout<<"[ double ]-----------"<<std::endl;
      std::cout<<e;
    }
    else{
      Int b(s);
      std::cout<<"[ int ]------------"<<std::endl;
      std::cout<<b;
    }
    return 0;
  }
  std::cout<<"please enter one valid argument"<<std::endl;
  return 0;
}