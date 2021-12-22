#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : virtual public Form
{
	private:
		std::string target;
		virtual void	executeform(Bureaucrat const &) const;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm(std::string const &Name);
		ShrubberyCreationForm( ShrubberyCreationForm const &);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
		virtual ~ShrubberyCreationForm( void );
};

#endif