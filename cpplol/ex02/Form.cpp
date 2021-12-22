#include "Form.hpp"

Form::Form( void ):Name("DefaultForm"), Signed(0), NoteToSign(75), NoteToExecute(50){std::cout << "Form Default Constructor" << std::endl;}
Form::Form(Form const &arg):Name(arg.Name), Signed(arg.Signed), NoteToSign(arg.NoteToSign), NoteToExecute(arg.NoteToExecute){std::cout << "Form Copy Constructor on " << Name << std::endl;}
Form::~Form( void ){std::cout << "Form Destructor" << std::endl;}

Form &Form::operator=(Form const &arg)
{
	Signed = arg.Signed;
	return (*this);
}

const char *Form::GradeTooHighException::what( void ) const throw()
{
	return ("Form: Grade is too High!");
}
const char *Form::GradeTooLowException::what( void ) const throw()
{
	return ("Form: Grade is too Low!");
}

const char *Form::GradeTooHighEException::what( void ) const throw()
{
	return ("Form: Grade is too High to Execute !");
}

const char *Form::GradeTooLowEException::what( void ) const throw()
{
	return ("Form: Grade is too Low to Execute !");
}

const char *Form::FormNotSignedException::what( void ) const throw()
{
	return ("Form: Form can't be executed, not Signed !");
}

Form::Form(std::string const &N, int const &N2, int const &N3):Name(N), Signed(0), NoteToSign(N2), NoteToExecute(N3)
{
	if (N2 < 1 || N3 < 1)
		throw Form::GradeTooHighException();
	if (N2 > 150 || N3 > 150)
		throw Form::GradeTooLowException();
}

std::string const &Form::getName( void ) const{return (Name);}
bool const &Form::getSigned( void ) const{return (Signed);}
int	const &Form::getNoteToSign( void ) const{return(NoteToSign);}
int	const &Form::getNoteToExecute( void ) const{return (NoteToExecute);}

void	Form::beSigned(Bureaucrat const &arg)
{
	if (arg.getGrade() > NoteToSign)
		throw Form::GradeTooLowException();
	Signed = 1;
}

std::ostream &operator<<(std::ostream &arg, Form const &B){arg << "ID : Form " << B.getName() << " Statut " << B.getSigned()<< " avec une Note de Signature  " << B.getNoteToSign() << " et une Note d'execution " << B.getNoteToExecute(); return (arg);}

void	Form::execute(const Bureaucrat &executor) const
{
	if (!Signed)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > NoteToExecute)
		throw Form::GradeTooLowEException();
	executeform(executor);
}

