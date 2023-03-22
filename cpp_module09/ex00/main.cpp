#include "BitcoinExchange.hpp"

bool check_date_format(std::string str){
    int under=2;
    int l=8;
    for (size_t i=0;i<str.length();i++){
        if (isdigit(str[i]))
            l--;
        else if (str[i]=='-')
            under--;
        else
        {
            std::cout<<"Error: bad input => "<<str<<std::endl;
            return false;
        }

    }
    if (l!=0 || under!=0 ){
        std::cout<<"Error: bad input => "<<str<<std::endl;
        return false;
    }
    //check if date is valid
    std::string year = str.substr(0,4);
    std::string month = str.substr(5,2);
    std::string day = str.substr(8,2);
    int y = std::atoi(year.c_str());
    int m = std::atoi(month.c_str());
    int d = std::atoi(day.c_str());
    if (y<2009 || y>2023 || m<1 || m>12 || d<1 || d>31)
    {
        std::cout<<"Error: bad input => "<<str<<std::endl;
        return false;
    }
    return true;
}

bool check_value_format(std::string str){
    try{
        if (str.empty())
        {
            std::cout<<"Error: bad input => "<<str<<std::endl;
            return false;
        }
        double value = std::strtod(str.c_str(),NULL);
        if (value > 1000)
        {
            std::cout<<"Error: too large a number."<<std::endl;
            return false;
        }
        else if (value < 0)
        {
            std::cout<<"Error: not a positive number."<<std::endl;
            return false;
        }
    }
    catch(const std::exception& e){
        std::cout<<"Error: bad input => "<<str<<std::endl;
        return false;
    }
    return true;
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
    std::getline(file,buff);
    //read line by line
    while(std::getline(file,buff).eof() == false)
    {
        std::string date;
        std::string sep;
        std::string value_str;
        std::istringstream iss(buff);
        iss>>date>>sep>>value_str;
        if (date.size()!=10 || sep.size()!=1 || sep.compare("|"))
            std::cout<<"Error: bad input => "<<buff<<std::endl;
        else if (check_date_format(date))
        {
            if (check_value_format(value_str))
            {
                double value = std::strtod(value_str.c_str(),NULL);
                std::cout<<date<<" => "<<value<<" = "<<value*b.lb(date)<<std::endl;
            }
        }
    }
    //LAST LINE
    if (buff.empty() ==false)
    {
        std::string date;
        std::string sep;
        std::string value_str;
        std::istringstream iss(buff);
        iss>>date>>sep>>value_str;
        if (date.size()!=10 || sep.size()!=1 || sep.compare("|") || value_str.size()==0)
            std::cout<<"Error: bad input => "<<buff<<std::endl;
        else if (check_date_format(date))
        {
            if (check_value_format(value_str))
            {
                double value = std::strtod(value_str.c_str(),NULL);
                std::cout<<date<<" => "<<value<<" = "<<value*b.lb(date)<<std::endl;
            }
        }
    }
    file.close();
    return 0;
}

