#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
public:
	AMateria(std::string const &);
	AMateria( void );
	AMateria(AMateria const &);
	~AMateria( void );
	AMateria const &operator=(AMateria const &);
	virtual AMateria	*clone( void ) const = 0;
	virtual	void	use(ICharacter	&);
};

#endif