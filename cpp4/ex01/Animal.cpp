#include "Animal.hpp"


Animal::Animal( void ): type("Animal"){std::cout << "Default Animal Constructor" << std::endl;}
Animal::Animal(Animal const &arg): type(arg.type){std::cout << "Copy Animal Construcor for " << type << std::endl;}
Animal::~Animal( void ){std::cout << "Animal Destructor for " << type << std::endl;}

Animal &Animal::operator=(Animal const &arg){type = arg.type; return (*this);}

Animal::Animal(std::string const &ty): type(ty){std::cout << "Animal Constructor for a type " << type << std::endl;}

std::string const &Animal::getType( void ) const{return (type);}

void	Animal::makeSound( void ) const{std::cout << "I'm an Animal AGROU !" << std::endl;}