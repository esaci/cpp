#include "FragTrap.hpp"

FragTrap::FragTrap( void ):ClapTrap("Default", 100, 100, 30){std::cout << "FragTrap Default Constructor " << Name << " called o_o" << std::endl;}
FragTrap::FragTrap(std::string const &arg):ClapTrap(arg, 100, 100, 30){std::cout << "FragTrap Constructor " << Name << " called o_o" << std::endl;}
FragTrap::FragTrap(FragTrap const &arg):ClapTrap(arg){std::cout << "FragTrap copy Constructor " << Name << " called o_o" << std::endl;}
FragTrap::~FragTrap( void ){std::cout << "FragTrap Destructor " << Name << " called o_o" << std::endl;}

FragTrap	&FragTrap::operator=(FragTrap const &arg)
{
	ClapTrap::operator=(arg);
	return (*this);
}

void	FragTrap::attack(std::string const &arg){std::cout << "FragTrap attacks " << arg << " o_o" << std::endl;}
void	FragTrap::highFivesGuys( void ){std::cout << "High Five ! o_o" << std::endl;}
