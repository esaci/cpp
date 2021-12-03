#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat: virtual public Animal
{
	public:
		Cat( void );
		Cat(Cat const &arg);
		~Cat( void );
		Cat &operator=(Cat const &arg);
		virtual void	makeSound( void ) const;
};

#endif