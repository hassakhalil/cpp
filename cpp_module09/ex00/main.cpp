#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

bool check_date_format(std::string str){

//debug
// std::cout<<"(main::check_date_format) str = "<<str<<std::endl;
//debug
//dont forget to check numbers in date
    int under=2;
    int l=8;
    for (size_t i=0;i<str.length();i++){
        if (isdigit(str[i]))
            l--;
        else if (str[i]=='-')
            under--;
        else if (str[i]!=' ')
        {
            std::cout<<"Error: bad input => "<<str<<std::endl;
            return false;
        }
    }
    if (l!=0 || under!=0){
        std::cout<<"Error: bad input => "<<str<<std::endl;
        return false;
    }
    return true;
}

bool check_value_format(std::string str){
    try{
        double value = std::strtod(str.c_str(),NULL);
        if (value > 1000)
            std::cout<<"Error: too large a number."<<std::endl;
        else if (value < 0)
            std::cout<<"Error: not a positive number."<<std::endl;
        else
            return true;
        return false;
    }
    catch(const std::exception& e){
        std::cout<<"Error: bad input => "<<str<<std::endl;
        return false;
    }
}

int main(int ac, char **av){
    std::ifstream file;
    std::string buff;

    if (ac != 2)
    {
        std::cout<<"Error: could not open file."<<std::endl;
        return 1;  
    }
    file.open(av[1]);
    if (!file){
        std::cout<<"Error: could not open file."<<std::endl;
        return 1;  
    }
    BitcoinExchange b;
    //read first line
    std::getline(file, buff);
    //read line
    while (!std::getline(file, buff).eof())
    {
        //split line into date and value
        //check date----------------
        if (check_date_format(buff.substr(0,buff.find('|'))))
        {
            if(check_value_format(buff.substr(buff.find('|')+1,buff.size() - buff.find('|') - 1)))
                std::cout<<buff.substr(0,buff.find('|'))<<" => "<<buff.substr(buff.find('|')+1,buff.size() - buff.find('|') - 1)<<" = "<<std::strtod(buff.substr(buff.find('|')+1,buff.size() - buff.find('|') - 1).c_str(),NULL)*((--b.c.lower_bound(buff.substr(0,buff.find('|'))))->second)<<std::endl;
        }
        // if (buff > b.c.rbegin()->first || buff < b.c.begin()->first){
        //     int i= buff.find('\n')+1;
        //     std::cout<<"Error: bad input => "<<buff.substr(0,i-1)<<std::endl;
        //     buff = buff.substr(i,buff.size() - i);
        // }
        // //check value-------------
        // std::getline(file,value_str);
        // value = std::strtod(value_str.c_str(),NULL);
        // if (value > 1000)
        //     std::cout<<"Error: too large a number."<<std::endl;
        // else if (value < 0)
        //     std::cout<<"Error: not a positive number."<<std::endl;
        // else
        // {
        //     std::cout << std::setprecision(6);
        //     std::cout<<buff<<" => "<<value<<" = "<<value*((--b.c.lower_bound(buff))->second)<<std::endl;
        // }
    }
    file.close();
    return 0;
}

