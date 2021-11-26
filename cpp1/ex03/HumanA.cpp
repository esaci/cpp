#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpnref): _name(name), _wpn(wpnref){}
HumanA::~HumanA( void ){}
void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->_wpn.getType() << std::endl;
}