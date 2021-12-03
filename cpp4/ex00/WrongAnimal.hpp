#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal( void );
	WrongAnimal(WrongAnimal const &);
	~WrongAnimal( void );
	WrongAnimal(std::string const &);
	WrongAnimal &operator=(WrongAnimal const &);
	void	makeSound( void ) const;
	std::string const	&getType( void ) const;
};

#endif