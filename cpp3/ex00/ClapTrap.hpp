#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
	private:
		std::string	Name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;
	public:
		ClapTrap( void );
		ClapTrap(std::string const &Name);
		ClapTrap(ClapTrap const &arg);
		~ClapTrap( void );
		ClapTrap &operator=(ClapTrap const &arg);
		void	attack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif