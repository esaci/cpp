#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{		
	public:
		ScavTrap( void );
		ScavTrap( ScavTrap const &arg);
		ScavTrap(std::string const &arg);
		~ScavTrap( void );
		ScavTrap	&operator=(ScavTrap const &arf);
		void		guardGate( void ) const;
		void	attack(std::string const &target) const;
};



#endif