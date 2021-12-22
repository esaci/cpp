#include "Intern.hpp"

Intern::Intern( void ){std::cout << "Intern Default Constructor" << std::endl;}
Intern::Intern(Intern const &){std::cout << "Intern Copy Constructor" << std::endl;}
Intern::~Intern( void ){std::cout << "Intern Destructor" << std::endl;}

Intern &Intern::operator=(Intern const &){return (*this);}

Form	*Intern::CreatePresidentionalPardon(std::string const &target){return (new PresidentialPardonForm(target));}
Form	*Intern::CreateRobotmyRequest(std::string const &target){return (new RobotomyRequestForm(target));}
Form	*Intern::CreateShruberyCreation(std::string const &target){return (new ShrubberyCreationForm(target));}

Form	*Intern::makeForm(std::string const &Name, std::string const &target)
{
	std::string const tmp[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form *(Intern::*tmp2[])(std::string const &) = {&Intern::CreateRobotmyRequest, &Intern::CreatePresidentionalPardon, &Intern::CreateShruberyCreation};
	int	i;

	for (i = 0; i < 3; i++)
	{
		if (Name == tmp[i])
		{
			std::cout << "Intern creates " << tmp[i] << std::endl;
			return ((this->*tmp2[i])(target));
		}
	}
	std::cerr << "Can't find " << Name << " class." << std::endl;
	return (NULL);
}
