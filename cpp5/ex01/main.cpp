#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	try
	{
		Bureaucrat test;
		std::cout << test << std::endl;
		Bureaucrat test2("Elias", 131);
		std::cout << test2 << std::endl;
		Bureaucrat test3("Batman", 150);
		std::cout << test3 << std::endl;
		Bureaucrat test4("Elias2", 12);
		std::cout << test4 << std::endl;
		Form	f("EliasForm1", 141, 100);
		Form	f2("EliasForm2", 141, 100);
		Form	f3("EliasForm3", 141, 100);
		std::cout << f << std::endl;
		test2.signForm(f);
		std::cout << f << std::endl;
		f2.beSigned(test3);
		f3.beSigned(test2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat test5("Esaci", 1);
		std::cout << test5 << std::endl;
		Bureaucrat test6("Esas", 10);
		std::cout << test6 << std::endl;
		Bureaucrat test7("Esa", 1);
		std::cout << test7 << std::endl;
		Form	f4("EliasForm4", 5, 100);
		Form	f5("EliasForm5", 5, 100);
		std::cout << f5 << std::endl;
		test5.signForm(f4);
		test6.signForm(f5);
		std::cout << f5<< std::endl;
		test7.signForm(f5);
		std::cout << f5<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}