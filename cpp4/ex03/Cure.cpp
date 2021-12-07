#include "Cure.hpp"

Cure::Cure( void ){p_type = "cure";std::cout << "Cure Default Constructor" << std::endl;}
Cure::Cure(Cure const &arg){p_type = arg.p_type;std::cout << "Cure Copy Constructor" << std::endl;}
Cure::~Cure( void ){std::cout << "Cure Destructor" << std::endl;}
Cure	&Cure::operator=(Cure const &arg){p_type = arg.p_type;}
AMateria	*Cure::clone( void ) const
{
	return (new Cure());
}

void	Cure::use(ICharacter &targer){std::cout << "* heals" << targer.getName() << "'s wounds *" << std::endl;}