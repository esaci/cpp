#include "Ice.hpp"

Ice::Ice( void ){std::cout << "Ice Default Constructor" << std::endl;}
Ice::Ice(Ice const &arg){std::cout << "Ice Copy Constructor" << std::endl;}
Ice::~Ice( void ){std::cout << "Ice Destructor" << std::endl;}
Ice	&Ice::operator=(Ice const &arg){}
AMateria	*Ice::clone( void ) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &targer){std::cout << "* shoots an ice bolt at " << targer.getName() << std::endl;}