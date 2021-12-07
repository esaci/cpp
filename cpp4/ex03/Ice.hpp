#ifndef	ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: virtual public AMateria
{
	public:
		Ice( void );
		Ice(Ice const &);
		virtual ~Ice( void );
		Ice	&operator=(Ice const &);
		virtual AMateria	*clone( void ) const;
		virtual void		use(ICharacter	&target);
};

#endif