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
		DiamondTrap	&operator=(DiamondTrap const &arg);
		void	attack( void ){ScavTrap::attack();}
};

#endif