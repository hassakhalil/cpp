#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->n = 0;
}

void PhoneBook::ADD(){
	std::cout << "first name : ";
	std::cin >>this->contacts[n].first_name;
	std::cout << "last name : ";
	std::cin >>this->contacts[n].last_name;
	std::cout << "nickname : ";
	std::cin >>this->contacts[n].nickname;
	std::cout << "phone number : ";
	std::cin >>this->contacts[n].phone_number;
	std::cout << "darkest secret : ";
	std::cin >>this->contacts[n].darkest_secret;
	//debug
	std::cout <<"contacts["<<this->n<<"].first_name = "<<this->contacts[n].first_name<<std::endl;
	std::cout <<"contacts["<<this->n<<"].last_name = "<<this->contacts[n].last_name<<std::endl;
	std::cout <<"contacts["<<this->n<<"].nickname = "<<this->contacts[n].nickname<<std::endl;
	std::cout <<"contacts["<<this->n<<"].phone_number = "<<this->contacts[n].phone_number<<std::endl;
	std::cout <<"contacts["<<this->n<<"].darkest_secret = "<<this->contacts[n].darkest_secret<<std::endl;
	//end debug
	this->n++;
	if (this->n == 8)
		this->n = 0;
}

void PhoneBook::SEARCH(){
	//display short mode
	//ask for index
	//check index
	//display contact info or error
	std::cout << "hello from {SEARCH} "<<std::endl;
}

int main()
{
	char buff[1000];
	PhoneBook phoneb;
	std::string str1 ("SEARCH");
  	std::string str2 ("ADD");
	std::string str3 ("EXIT");
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT)--> ";
		std::cin >>buff;
		if (str1.compare(buff) == 0)
			phoneb.SEARCH();
		else if (str2.compare(buff) == 0){
			phoneb.ADD();
		}
		else if (str3.compare(buff) == 0)
			return (1);
		else
			std::cout << "Wrong coommand"<<std::endl;
 	}
}