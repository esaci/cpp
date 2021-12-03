#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"){std::cout << "Dog Default Constructor" << std::endl;}
Dog::Dog(Dog const &arg):Animal(arg){std::cout << "Dog Copy Constructor for " << type << std::endl;}
Dog::~Dog( void ){std::cout << "Dog Destructor for " << type << std::endl;}
Dog &Dog::operator=(Dog const &arg){Animal::operator=(arg);return (*this);}

void	Dog::makeSound( void ) const{std::cout << "Wooof Woooof Im a Dog Woof !" << std::endl;}