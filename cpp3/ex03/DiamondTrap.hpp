#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
	private:
		std::string	DiamondTrapName;
	public:
		DiamondTrap( void );
		DiamondTrap(std::string const &arg);
		DiamondTrap(DiamondTrap const &arg);
		~DiamondTrap( void );
		void	attack(std::string const &arg);
		DiamondTrap &operator=(DiamondTrap const &arg);
		std::string const &getName( void ) const;
		std::string const &getClapTrapName( void ) const;
};

#endif