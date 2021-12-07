#ifndef	ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

#include "AMateria.hpp"

class ICharacter
{
	protected:
		AMateria	*Inv0 = NULL;
		AMateria	*Inv1 = NULL;
		AMateria	*Inv2 = NULL;
		AMateria	*Inv3 = NULL;
		std::string Name;
	public:
		virtual	~ICharacter( void );
		virtual	std::string const &getName( void ) const = 0;
		virtual void	equip(AMateria*) = 0;
		virtual void	unequip(int) = 0;
		virtual void	use(int, ICharacter&) = 0;
};

#endif