#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _wpn(NULL){}
HumanB::~HumanB( void ){}

void	HumanB::setWeapon(Weapon &wpn)
{
	this->_wpn = &(wpn);
}

void	HumanB::attack( void )
{
	if (!_wpn)
		std::cout << this->_name << " can't attack, need a weapon !" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << (*this->_wpn).getType() << std::endl;
}
