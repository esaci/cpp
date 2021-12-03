#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		Dog( void );
		Dog(Dog const &arg);
		~Dog( void );
		Dog &operator=(Dog const &arg);
		virtual void makeSound(void) const;
};

#endif