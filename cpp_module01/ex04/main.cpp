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
        size_t n = 0;
        int flag = 0;
        fs.open (av[1], std::fstream::in);
        if (!fs.is_open())
        {
            std::cout<<"cant open file "<<av[1]<<std::endl;
            return (1);
        }
        new_file += ".replace";
        fs1.open (new_file, std::fstream::out);

        while(!std::getline(fs,line).eof())
        {
            flag = 1;
            n = line.find(av[2], 0);
            while (n != std::string::npos){
            line.erase(n, strlen(av[2]));
            line.insert(n, av[3]);
            n = line.find(av[2], n + strlen(av[3]));
            }
            std::cout<<line<<std::endl;
            fs1<<line<<std::endl;
        }
        if (flag)
        {
        n = line.find(av[2], 0);
        while (n != std::string::npos){
        line.erase(n, strlen(av[2]));
        line.insert(n, av[3]);
        n = line.find(av[2], n + strlen(av[3]));
        }
        std::cout<<line<<std::endl;
        fs1<<line<<std::endl;
        }
        fs.close();
        fs1.close();
    }
}