#include "WrongCat.hpp"

WrongCat::WrongCat( void ):WrongAnimal("WrongCat"){std::cout << "WrongCat Constructor for " << type << std::endl;}
WrongCat::WrongCat(WrongCat const &arg):WrongAnimal(arg){std::cout << "WrongCat Copy Constructor for " << type << std::endl;}
WrongCat::~WrongCat( void ){std::cout << "WrongCat Destructor for " << type << std::endl;}
WrongCat &WrongCat::operator=(WrongCat const &arg)
{
	type = arg.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const{std::cout << "Miaouuuu im a fake Cat !" << std::endl;}