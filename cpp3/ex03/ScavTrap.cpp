#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap("Default", 100, 50, 20){std::cout << "ScavTrap Default Constructor " << Name << " called ?!" << std::endl;}
ScavTrap::ScavTrap( ScavTrap const &arg): ClapTrap(arg){std::cout << "ScavTrap Copy Constructor " << Name << " called ?!" << std::endl;}
ScavTrap::ScavTrap(std::string const &arg): ClapTrap(arg, 100, 50, 20){std::cout << "ScapTrap Constructor " << Name << " called ?!" << std::endl;}
ScavTrap::ScavTrap::~ScavTrap( void ){std::cout << "ScavTrap Destructor " << Name << " called ?!" << std::endl;}
ScavTrap	&ScavTrap::operator=(ScavTrap const &arf)
{
	ClapTrap::operator=(arf);
	return (*this); 
}
void	ScavTrap::guardGate( void ) const{std::cout << "ScavTrap " << Name << " has entered in defensive mode ?!" << std::endl;}
void	ScavTrap::attack(std::string const &target) const{std::cout << "ScavTrap " << Name << " attacks " << target << " ?!" << std::endl;}
