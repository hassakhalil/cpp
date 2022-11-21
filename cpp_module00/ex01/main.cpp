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
	this->index++;
	if (this->index == 8)
		this->index = 0;
}

void PhoneBook::SEARCH(){

	if (this->n == 0)
		std::cout<<"No contacts yet"<<std::endl;
	else
	{
		//display short mode
		// index | first name | last name | nickname
		for(int j = 0; j < n ; j++)
		{
			std::cout<<j<<"         ";
			std::cout<<" | ";
			int k = 0;
			while (this->contacts[j].first_name[k])
			{
				if (k == 10 && this->contacts[j].first_name[k+1])
				{
					std::cout<<".";
					break;
				}
				else
					std::cout<<this->contacts[j].first_name[k];
				k++;
			}
			while (k < 10){
				std::cout<<" ";
				k++;
			}
			std::cout<<" | ";
			k = 0;
			while (this->contacts[j].last_name[k])
			{
				if (k == 10 && this->contacts[j].last_name[k+1])
				{
					std::cout<<".";
					break;
				}
				else
					std::cout<<this->contacts[j].last_name[k];
				k++;
			}
			while (k < 10){
				std::cout<<" ";
				k++;
			}
			std::cout<<" | ";
			k = 0;
			while (this->contacts[j].nickname[k])
			{
				if (k == 10 && this->contacts[j].nickname[k+1])
				{
					std::cout<<".";
					break;
				}
				else
					std::cout<<this->contacts[j].nickname[k];
				k++;
			}
			while (k < 10){
				std::cout<<" ";
				k++;
			}
			std::cout<<std::endl;

		}
		//ask for index
		std::string buff;
		std::cout<<"Enter contact index :";
		std::cin >>buff;
		//check if buff is all numbers
		int i = 0;
		while (buff[i])
		{
			if (std::isdigit(buff[i]) == 0){
				std::cout<<"Wrong index"<<std::endl;
				return ;
			}
			i++;
		}
		//check index
		i = std::stoi(buff);
		if (i < 0 || this->n <= i)
			std::cout<<"Wrong index"<<std::endl;
		else
		{
			//display contact
			std::cout <<"first_name = "<<this->contacts[i].first_name<<std::endl;
			std::cout <<"last_name = "<<this->contacts[i].last_name<<std::endl;
			std::cout <<"nickname = "<<this->contacts[i].nickname<<std::endl;
			std::cout <<"phone_number = "<<this->contacts[i].phone_number<<std::endl;
			std::cout <<"darkest_secret = "<<this->contacts[i].darkest_secret<<std::endl;
		}
	}
}

int main()
{
	PhoneBook phoneb;
	std::string buff;
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