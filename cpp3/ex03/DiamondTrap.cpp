#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): FragTrap(std::string("Default") + "_clap_name"), ScavTrap(std::string("Default") + "_clap_name"), DiamondTrapName("Default")
{
	this->Hitpoints = 100;
	this-> = 30;	
}

DiamondTrap::DiamondTrap(std::string &arg): FragTrap(arg + "_clap_name"), ScavTrap(arg), DiamondTrapName(arg)
{
	HitPoints = 100;
	Attack_damage = 30;	
}

DiamondTrap::~DiamondTrap( void ){std::cout << "DiamondTrap Destructor " << Name << " called o_o" << std::endl;}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &arg)
{
	ClapTrap::operator=(arg);
	DiamondTrapName = arg.DiamondTrapName;
	return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap const &arg)
{
	this = arg;
}