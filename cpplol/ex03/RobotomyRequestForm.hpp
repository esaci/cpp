#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: virtual public Form
{
	private:
		std::string target;
		virtual void	executeform(Bureaucrat const &) const;
	public:
			RobotomyRequestForm( void );
			RobotomyRequestForm(std::string const &Name);
			RobotomyRequestForm( RobotomyRequestForm const &);
			RobotomyRequestForm &operator=(RobotomyRequestForm const &);
			virtual ~RobotomyRequestForm( void );
};

#endif