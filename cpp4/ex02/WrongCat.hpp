#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat(WrongCat const	&);
	~WrongCat( void );
	WrongCat	&operator=(WrongCat const &);
	void	makeSound( void ) const;
};

#endif