#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"), idea(new Brain()){std::cout << "Dog Default Constructor" << std::endl;}
Dog::Dog(Dog const &arg):Animal(arg), idea(new Brain(*arg.idea)){std::cout << "Dog Copy Constructor for " << type << std::endl;}
Dog::~Dog( void ){std::cout << "Dog Destructor for " << type << std::endl;delete idea;}
Dog &Dog::operator=(Dog const &arg){Animal::operator=(arg);delete idea;idea = new Brain(*arg.idea);return(*this);}

void	Dog::makeSound( void ) const{std::cout << "Wooof Woooof Im a Dog Woof !" << std::endl;}

Brain const &Dog::getBrain( void ) const{return (*idea);}