#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string const Name;
		int	Note;
	public:
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
		Bureaucrat( void );
		Bureaucrat(Bureaucrat const &);
		Bureaucrat(std::string const &, int const &);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &);
		std::string const getName( void ) const;
		int	const &getGrade( void ) const;
		void	setIncrementerNote( void );
		void	setDecrementerNote( void );
};

std::ostream &operator<<(std::ostream &arg, Bureaucrat const &B);

#endif