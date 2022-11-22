#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

 void  Contact::fill_field(int index)
 {
	if (index == 0)
		std::cin >>this->first_name;
	else if (index == 1)
		std::cin >>this->last_name;
	else if (index == 2)
		std::cin >>this->nickname;
	else if (index == 3)
		std::cin >>this->phone_number;
	else if (index == 4)
		std::cin >>this->darkest_secret;
 }

std::string  Contact::get_field(int index)
{
	if (index == 0)
		return this->first_name;
	else if (index == 1)
		return this->last_name;
	else if (index == 2)
		return this->nickname;
	else if (index == 3)
		return this->phone_number;
	else
		return this->darkest_secret;
}

PhoneBook::PhoneBook(){
	this->index = 0;
	this->n = 0;
}

void PhoneBook::ADD(){
	if (this->n < 8)
		this->n++;
	std::cout << "first name : ";
	this->contacts[index].fill_field(0);
	std::cout << "last name : ";
	this->contacts[index].fill_field(1);
	std::cout << "nickname : ";
	this->contacts[index].fill_field(2);
	std::cout << "phone number : ";
	this->contacts[index].fill_field(3);
	std::cout << "darkest secret : ";
	this->contacts[index].fill_field(4);
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
			while (this->contacts[j].get_field(0)[k])
			{
				if (k == 9 && this->contacts[j].get_field(0)[k+1])
				{
					std::cout<<".";
					k++;
					break;
				}
				else
					std::cout<<this->contacts[j].get_field(0)[k];
				k++;
			}
			while (k < 10){
				std::cout<<" ";
				k++;
			}
			std::cout<<" | ";
			k = 0;
			while (this->contacts[j].get_field(1)[k])
			{
				if (k == 9 && this->contacts[j].get_field(1)[k+1])
				{
					std::cout<<".";
					k++;
					break;
				}
				else
					std::cout<<this->contacts[j].get_field(1)[k];
				k++;
			}
			while (k < 10){
				std::cout<<" ";
				k++;
			}
			std::cout<<" | ";
			k = 0;
			while (this->contacts[j].get_field(2)[k])
			{
				if (k == 9 && this->contacts[j].get_field(2)[k+1])
				{
					std::cout<<".";
					k++;
					break;
				}
				else
					std::cout<<this->contacts[j].get_field(2)[k];
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
			std::cout <<"first_name = "<<this->contacts[i].get_field(0)<<std::endl;
			std::cout <<"last_name = "<<this->contacts[i].get_field(1)<<std::endl;
			std::cout <<"nickname = "<<this->contacts[i].get_field(2)<<std::endl;
			std::cout <<"phone_number = "<<this->contacts[i].get_field(3)<<std::endl;
			std::cout <<"darkest_secret = "<<this->contacts[i].get_field(4)<<std::endl;
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
			return (0);
		else
			std::cout << "Wrong coommand"<<std::endl;
 	}
}