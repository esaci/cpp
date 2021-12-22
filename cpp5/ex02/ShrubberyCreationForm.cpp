#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form("Shrubbery", 145, 137), target("Default"){std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &Name): Form("Shrubbery", 145, 137), target(Name){std::cout << "ShrubberyCreationForm Constructor" << std::endl;}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &arg):Form(arg), target(arg.target){std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &arg)
{
	Form::operator=(arg);
	target = arg.target;
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm( void ){std::cout << "ShrubberyCreationForm Destructor" << std::endl;}
void	ShrubberyCreationForm::executeform(Bureaucrat const &executor) const
{
	(void)executor;
	std::string test(target);
	test = test + "_shrubbery";
	std::ofstream outfile(test.c_str());
	outfile << "       _-_" << std::endl;
	outfile << "    /~~   ~~\\ " << std::endl;
	outfile << " /~~         ~~\\ " << std::endl;
	outfile << "{               }" << std::endl;
	outfile << " \\  _-     -_  /" << std::endl;
	outfile << "      \\\\ //  ~ " << std::endl;
	outfile << "_- -   | | _- _" << std::endl;
	outfile << "  _ -  | |   -_" << std::endl;
	outfile << "      // \\\\ " << std::endl;
	outfile.close();
}
