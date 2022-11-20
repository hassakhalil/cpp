#include <iostream>


int main()
{
	char buff[1000];
	std::string str1 ("SEARCH");
  	std::string str2 ("ADD");
	std::string str3 ("EXIT");
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT)--> ";
		std::cin >>buff;
		if (str1.compare(buff) == 0){
			///diplay all contacts in shrot mode 
			std::cout <<"Dispaly |contacts |in | short |mode "<<std::endl;
			// ask for index
			std::cout <<"Enter index ->>";
			std::cin >>buff;
			//check index
			//display full informaton about index
			std::cout <<"Dispaly all info about index " <<buff<<std::endl;
		}
		else if (str2.compare(buff) == 0)
		{
			std::cout << "first name : ";
			std::cin >>buff;
			std::cout << "last name : ";
			std::cin >>buff;
			std::cout << "nickname : ";
			std::cin >>buff;
			std::cout << "phone number : ";
			std::cin >>buff;
			std::cout << "darkest secret : ";
			std::cin >>buff;
		}
		else if (str3.compare(buff) == 0){
			return (1);
		}
		else
			std::cout << "Wrong coommand"<<std::endl;
 	}
}