#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string p_type;
	public:
		AMateria(std::string const &);
		AMateria( void );
		AMateria(AMateria const &);
		virtual ~AMateria( void );
		AMateria &operator=(AMateria const &);
		std::string const &getType( void ) const;
		virtual AMateria	*clone( void ) const = 0;
		virtual	void	use(ICharacter &) = 0;
};

#endif