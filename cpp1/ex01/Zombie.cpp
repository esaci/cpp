#include "Zombie.hpp"

void	Zombie::annonce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void )
{
}

Zombie::Zombie(std::string name): _name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is DEAD !" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}