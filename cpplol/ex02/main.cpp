#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
	{
		Form	*f = new ShrubberyCreationForm("test1");
		Form	*f2 = new ShrubberyCreationForm("test2");
		Form	*f3 = new ShrubberyCreationForm("test1");
		
		Bureaucrat test2("Elias", 131);
		Bureaucrat test3("Batman", 138);
		Bureaucrat test4("Elias2", 12);
		
		try
		{
			std::cout << *f << std::endl;
			test2.signForm(*f);
			f->execute(test2);
			test2.executeForm(*f);
			std::cout << *f2 << std::endl;
			test3.executeForm(*f2);
			test3.signForm(*f2);
			test3.executeForm(*f2);
			std::cout << *f2 << std::endl;
			f2->execute(test3);
			f3->beSigned(test2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete f;
		delete f2;
		delete f3;
	}
	std::cout << "-----------------------------------------------------------------------------------" << std::endl;
	{
		Form	*f = new RobotomyRequestForm("test1");
		Form	*f2 = new RobotomyRequestForm("test2");
		Form	*f3 = new RobotomyRequestForm("test1");
		
		Bureaucrat test2("Elias", 30);
		Bureaucrat test3("Batman", 46);
		Bureaucrat test4("Elias2", 12);
		
		try
		{
			std::cout << *f << std::endl;
			test2.signForm(*f);
			f->execute(test2);
			test2.executeForm(*f);
			std::cout << *f2 << std::endl;
			test3.executeForm(*f2);
			test3.signForm(*f2);
			test3.executeForm(*f2);
			std::cout << *f2 << std::endl;
			f2->execute(test3);
			f3->beSigned(test2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete f;
		delete f2;
		delete f3;
	}
	std::cout << "-----------------------------------------------------------------------------------" << std::endl;
	{
		Form	*f = new PresidentialPardonForm("test1");
		Form	*f2 = new PresidentialPardonForm("test2");
		Form	*f3 = new PresidentialPardonForm("test1");
		
		Bureaucrat test2("Elias", 4);
		Bureaucrat test3("Batman", 6);
		Bureaucrat test4("Elias2", 12);
		
		try
		{
			Bureaucrat test2("Elias", 4);
			Bureaucrat test3("Batman", 6);
			Bureaucrat test4("Elias2", 12);
			std::cout << *f << std::endl;
			test2.signForm(*f);
			f->execute(test2);
			test2.executeForm(*f);
			std::cout << *f2 << std::endl;
			test3.executeForm(*f2);
			test3.signForm(*f2);
			test3.executeForm(*f2);
			std::cout << *f2 << std::endl;
			f2->execute(test3);
			f3->beSigned(test2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete f;
		delete f2;
		delete f3;
	}
	return (0);
}