#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string.h>
#include <iomanip>

class contact
{
	public:
		contact(std::string fn, std::string ln, std::string n, std::string pn, std::string ds);
		contact(void);
		~contact( void );
		void	print(int i);
		void	define(std::string fn, std::string ln, std::string n, std::string pn, std::string ds);
		void	full_print(int i);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
#endif