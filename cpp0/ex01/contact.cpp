#include "contact.hpp"


contact::contact( void ): first_name("VIDE"), \
	last_name("VIDE"), nickname("VIDE"), phone_number("VIDE"), darkest_secret("VIDE")
{}

contact::contact(std::string fn, std::string ln, std::string n, std::string pn, std::string ds): first_name(fn), \
last_name(ln), nickname(n), phone_number(pn), darkest_secret(ds){
}

void	contact::define(std::string fn, std::string ln, std::string n, std::string pn, std::string ds){
	this->first_name = fn;
	this->last_name = ln;
	this->nickname = n;
	this->phone_number = pn;
	this->darkest_secret = ds;
}


contact::~contact( void )
{}

void	contact::print(int i)
{
	std::string tmp[] = {this->first_name, this->last_name, this->nickname};
	std::string temp;

	std::cout << "|" << std::setw(10) << std::right << i << "|";
	for(i=0; i < 3; i++)
	{
		temp = tmp[i];
		if (tmp[i].length() > 10)
		{
			temp.resize(10);
			temp[9] = '.';
		}
		std::cout << std::setw(10) << std::right << temp << "|";
	}
	std::cout << std::endl;
}

void	contact::full_print(int i)
{
	std::cout  << "Index : " << i << std::endl;
	std::cout << "First Name : " << this->first_name << std::endl;
	std::cout << "Last Name : " << this->last_name << std::endl;
	std::cout << "NickName : " << this->nickname << std::endl;
	std::cout << "Phone NUmber : " << this->phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->darkest_secret << std::endl;
}
