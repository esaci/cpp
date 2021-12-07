#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain *idea;
	public:
		Dog( void );
		Dog(Dog const &arg);
		~Dog( void );
		Dog &operator=(Dog const &arg);
		virtual void makeSound(void) const;
		Brain const &getBrain( void ) const;
};

#endif