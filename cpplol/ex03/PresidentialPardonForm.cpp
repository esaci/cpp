#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ):Form("PresidentialPardon", 25, 5), target("Default"){std::cout << "PresidentialPardonForm Default Constructor" << std::endl;}
PresidentialPardonForm::PresidentialPardonForm(std::string const &Name):Form("PresidentialPardon", 25, 5), target(Name){std::cout << "PresidentialPardonForm Constructor" << std::endl;}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &arg):Form(arg), target(arg.target){std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &arg)
{
	Form::operator=(arg);
	target = arg.target;
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm( void ){std::cout << "PresidentialPardonForm Destructor" << std::endl;} 

void	PresidentialPardonForm::executeform(Bureaucrat const &) const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}