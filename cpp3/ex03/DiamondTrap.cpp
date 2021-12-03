#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("ElTrap_clap_name"), FragTrap("ElTrap_clap_name"), ScavTrap("ElTrap_clap_name"), DiamondTrapName("ElTrap")
{
	std::cout << "DiamondTrap Default Constructor " << DiamondTrapName << " called" << std::endl;
	this->Hitpoints = 100;
	Attack_damage = 30;	
}

DiamondTrap::DiamondTrap(std::string const &arg): ClapTrap(arg + "_clap_name"), FragTrap(arg + "_clap_name"), ScavTrap(arg + "_clap_name"), DiamondTrapName(arg)
{
	std::cout << "DiamondTrap Constructor " << DiamondTrapName << " called" << std::endl;
	Hitpoints = 100;
	Attack_damage = 30;	
}

DiamondTrap::~DiamondTrap( void ){std::cout << "DiamondTrap Destructor " << DiamondTrapName << " called " << std::endl;}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &arg)
{
	ClapTrap::operator=(arg);
	DiamondTrapName = arg.DiamondTrapName;
	return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap const &arg): ClapTrap(arg), FragTrap(arg), ScavTrap(arg), DiamondTrapName(arg.DiamondTrapName)
{
	*this = arg;
	std::cout << "DiamondTrap Copy Constructor " << DiamondTrapName << " called" << std::endl;
}

void	DiamondTrap::attack(std::string const &arg)
{
	ScavTrap::attack(arg);
}

std::string const &DiamondTrap::getName( void ) const{return(this->DiamondTrapName);}
std::string const &DiamondTrap::getClapTrapName( void ) const{return(this->Name);}
