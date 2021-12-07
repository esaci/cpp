#ifndef	ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice: AMateria
{
	public:
		Ice( void );
		Ice(Ice const &);
		~Ice( void );
		Ice	&operator=(Ice const &);
		AMateria	*clone( void ) const;
		void		use(ICharacter	&target);
};

#endif