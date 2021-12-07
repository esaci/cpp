#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: virtual public ICharacter
{
	public:
		~Character( void );
		Character( void );
		Character(Character const &);
		Character(std::string const &);
		Character &operator=(Character const &);
		std::string const &getName( void ) const;
		virtual void	equip(AMateria *);
		virtual void	unequip(int);
		virtual void	use(int, ICharacter&);
};

#endif