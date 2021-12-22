#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm( void ):Form("RobotomyRequest", 72, 45), target("Default"){std::cout << "RobotomyRequestForm Default Constructor" << std::endl;}
RobotomyRequestForm::RobotomyRequestForm(std::string const &Name):Form("RobotomyRequest", 72, 45), target(Name){std::cout << "RobotomyRequestForm Constructor" << std::endl;}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &arg):Form(arg), target(arg.target){std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &arg)
{
	Form::operator=(arg);
	target = arg.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void ){std::cout << "RobotomyRequestForm Destructor" << std::endl;}

void	RobotomyRequestForm::executeform(Bureaucrat const &) const
{
	srand(time(NULL));
	int v =  rand() % 10;

	std::cout << "DRrerw eDRRRRsdf" << std::endl;
	if (v < 5)
		std::cout << target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << target << " robotomization is a failure." << std::endl;
}
