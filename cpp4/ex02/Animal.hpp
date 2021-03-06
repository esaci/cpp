#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal( void );
		Animal(Animal const &arg);
		virtual ~Animal( void );
		Animal &operator=(Animal const &arg);
		std::string const&getType( void ) const;
		virtual void	makeSound( void ) const = 0;
	protected:
		std::string type;
};

#endif