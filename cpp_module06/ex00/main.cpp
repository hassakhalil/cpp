#include "Int.hpp"
#include "Char.hpp"
#include "Float.hpp"
#include "Double.hpp"


int main(int ac, char* av[]){
  if (ac == 2)
  {
    //check type(char , int , float, double)
    //convert it to type
    //convert it to other types
    //dislay result
    std::string s = av[1];
    if (s.size() == 1)
    {
      Char a(s);
      std::cout<<"[ char ]-----------"<<std::endl;
      std::cout<<a;
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

  } 
  else
    std::cout<<"please enter one valid argument"<<std::endl;
    return 0;
}