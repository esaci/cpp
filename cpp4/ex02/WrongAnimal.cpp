#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ):type("Default"){std::cout << "WrongAnimal Default Constructor " << std::endl;}
WrongAnimal::WrongAnimal(WrongAnimal const &arg):type(arg.type){std::cout << "WrongAnimal Copy Constructor " << type << std::endl;}
WrongAnimal::~WrongAnimal( void ){std::cout << "WrongAnimal Destructor for " << type << " called" << std::endl;}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &arg){type = arg.type;return(*this);}
WrongAnimal::WrongAnimal(std::string const &arg):type(arg){std::cout << "WrongAnimal Constructor for " << type << std::endl;}

std::string const &WrongAnimal::getType( void ) const{return (type);}
void	WrongAnimal::makeSound( void ) const{std::cout << "IM A WRONGANIMAL AHHHHHHHHHHHHHH!" << std::endl;}
