#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ):p_type(""){std::cout << "AMateria Default Constructor" << std::endl;}
AMateria::AMateria(AMateria const &arg):p_type(arg.p_type){std::cout << "AMateria Copy Constructor of " << p_type << std::endl;}
AMateria::AMateria(std::string const &arg):p_type(arg){std::cout << "AMateria " << arg << " Constructor" << std::endl;}
AMateria::~AMateria( void ){std::cout << "AMateria Destructor for " << p_type << std::endl;}

AMateria &AMateria::operator=(AMateria const &arg){p_type = arg.p_type; return (*this);}
void	AMateria::use(ICharacter &target){std::cout << "* use on " << target.getName() << " *" << std::endl;}
std::string	const &AMateria::getType( void ) const {return (this->p_type);}