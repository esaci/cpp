#include "Ice.hpp"

Ice::Ice( void ){p_type = "ice";std::cout << "Ice Default Constructor" << std::endl;}
Ice::Ice(Ice const &arg){p_type = arg.p_type;std::cout << "Ice Copy Constructor" << std::endl;}
Ice::~Ice( void ){std::cout << "Ice Destructor" << std::endl;}
Ice	&Ice::operator=(Ice const &arg){}

AMateria	*Ice::clone( void ) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target){std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;}