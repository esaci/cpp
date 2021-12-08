#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: virtual public Animal
{
	private:
		Brain *idea;
	public:
		Cat( void );
		Cat(Cat const &arg);
		virtual ~Cat( void );
		Cat &operator=(Cat const &arg);
		virtual void	makeSound( void ) const;
		Brain const &getBrain( void ) const;
};

#endif