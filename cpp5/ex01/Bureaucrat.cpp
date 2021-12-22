#include "Bureaucrat.hpp"
#include "Form.hpp"

const char *Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Grade is too High !");
}
const char *Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Grade is too Low !");
}
Bureaucrat::Bureaucrat( void ):Name("DefaultName"), Note(1){std::cout << "Bureaucrat Default Constructor" << std::endl;}
Bureaucrat::Bureaucrat(Bureaucrat const &arg):Name(arg.Name), Note(arg.Note){std::cout << "Bureaucrat Copy Constructor on " << Name << std::endl;}
Bureaucrat::Bureaucrat(std::string const &arg, int const &i):Name(arg)
{
	if (i < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (i > 150)
		throw Bureaucrat::GradeTooLowException();
	Note = i;
	std::cout << "Bureaucrat Constructor of " << Name << " with a Note of " << Note << std::endl;
}

Bureaucrat::~Bureaucrat( void ){std::cout << "Bureaucrat Destructor of " << Name << std::endl;}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &arg)
{
	Note = arg.Note;
	return (*this);
}

std::string const Bureaucrat::getName( void ) const{return(this->Name);}
int			const &Bureaucrat::getGrade( void ) const{return(this->Note);}

void	Bureaucrat::setDecrementerNote( void )
{
	if (Note < 150)
		Note++;
}

void	Bureaucrat::setIncrementerNote( void )
{
	if (Note > 1)
		Note--;
}

std::ostream &operator<<(std::ostream &arg, Bureaucrat const &B){arg << "ID : Bureaucrat " << B.getName() << " avec une Note de " << B.getGrade(); return (arg);}

void	Bureaucrat::signForm(Form &arg)
{
	try
	{
		arg.beSigned(*this);
		std::cout << Name << " signs " << arg.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << Name << " cannot sign " << arg.getName() << std::endl;
	}
}
