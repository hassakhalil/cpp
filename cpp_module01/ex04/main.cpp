#include <iostream>
#include <fstream>
int main(int ac, char* av[])
{
    if (ac == 4)
    {
        std::string new_file = av[1];
        std::string line;
        std::fstream fs;
        std::fstream fs1;
        fs.open (av[1], std::fstream::in);
        new_file += ".replace";
        fs1.open (new_file, std::fstream::out);
        //open filename(argv[1])
        //create filneame.replace
        //copy filename content into filename.replace replacing every occurence of 
        //argv[2](s1) with argv[3] (s2)
      
        while(!std::getline(fs,line).eof())
        {
            std::cout<<line<<std::endl;
            fs1<<line<<std::endl;
        }
        std::cout<<line<<std::endl;
        fs1<<line<<std::endl;
    }
}