#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		Form	*CreatePresidentionalPardon(std::string const &target);
		Form	*CreateRobotmyRequest(std::string const &target);
		Form	*CreateShruberyCreation(std::string const &target);
	public:
		Intern( void );
		Intern(const Intern &);
		Intern  &operator=(Intern const &);
		virtual ~Intern( void );
		Form	*makeForm(std::string const &Name, std::string const &target);
};
