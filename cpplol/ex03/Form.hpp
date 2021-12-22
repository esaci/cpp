#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>

class Form
{
private:
	std::string	const Name;
	bool		Signed;
	int			const NoteToSign;
	int			const NoteToExecute;
	virtual	void	executeform(Bureaucrat const &) const = 0;
public:
	Form( void );
	Form(Form const&);
	virtual ~Form( void );
	Form(std::string const &, int const &, int const &);
	Form	&operator=(Form	const &);

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what( void ) const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what( void ) const throw();
	};
	class GradeTooHighEException: public std::exception
	{
		public:
			virtual const char *what( void ) const throw();
	};
	class GradeTooLowEException: public std::exception
	{
		public:
			virtual const char *what( void ) const throw();
	};
	class FormNotSignedException: public std::exception
	{
		public:
			virtual const char *what( void ) const throw();
	};
	std::string	const &getName( void ) const;
	bool const &getSigned( void ) const;
	int	const &getNoteToSign( void ) const;
	int	const &getNoteToExecute( void ) const;
	virtual void	beSigned(Bureaucrat const &);
	void	execute(Bureaucrat const &) const;
};

std::ostream &operator<<(std::ostream &arg, Form const &B);

#endif