#include "Bureaucrat.hpp"

int main( void )
{
	try
	{
		Bureaucrat test;
		std::cout << test << std::endl;
		Bureaucrat test2("Elias", 150);
		std::cout << test2 << std::endl;
		Bureaucrat test3("Batman", 151);
		std::cout << test3 << std::endl;
		Bureaucrat test4("Elias2", 12);
		std::cout << test4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat test5("Esaci", 1);
		std::cout << test5 << std::endl;
		Bureaucrat test6("Esa", 0);
		std::cout << test6 << std::endl;
		Bureaucrat test7("Eoui", 100);
		std::cout << test7 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}