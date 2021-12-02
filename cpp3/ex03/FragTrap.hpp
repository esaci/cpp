#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:		
		FragTrap( void );
		FragTrap(FragTrap const &arg);
		FragTrap(std::string const &name);
		~FragTrap( void );
		FragTrap	&operator=(FragTrap const &arg);
		void	attack(std::string const &arg) const;
		void	highFivesGuys( void );
};

#endif