#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->index = 0;
	this->n = 0;
}

void PhoneBook::ADD(){
	if (this->n < 8)
		this->n++;
	//DEBUG
	std::cout<<"number of contacts is == { "<<this->n<<" }"<<std::endl;
	//END DEBBUG
	std::cout << "first name : ";
	std::cin >>this->contacts[index].first_name;
	std::cout << "last name : ";
	std::cin >>this->contacts[index].last_name;
	std::cout << "nickname : ";
	std::cin >>this->contacts[index].nickname;
	std::cout << "phone number : ";
	std::cin >>this->contacts[index].phone_number;
	std::cout << "darkest secret : ";
	std::cin >>this->contacts[index].darkest_secret;
	//debug
	std::cout <<"contacts["<<this->index<<"].first_name = "<<this->contacts[index].first_name<<std::endl;
	std::cout <<"contacts["<<this->index<<"].last_name = "<<this->contacts[index].last_name<<std::endl;
	std::cout <<"contacts["<<this->index<<"].nickname = "<<this->contacts[index].nickname<<std::endl;
	std::cout <<"contacts["<<this->index<<"].phone_number = "<<this->contacts[index].phone_number<<std::endl;
	std::cout <<"contacts["<<this->index<<"].darkest_secret = "<<this->contacts[index].darkest_secret<<std::endl;
	//end debug
	this->index++;
	if (this->index == 8)
		this->index = 0;
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