#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"

class Cure: AMateria
{
	public:
		Cure( void );
		virtual ~Cure( void );
		Cure(Cure const &);
		Cure	&operator=(Cure const &);
		virtual AMateria	*clone( void ) const;
		virtual void		use(ICharacter	&target);
};

#endif