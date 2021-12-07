#include "Cat.hpp"

Cat::Cat( void ):Animal("Cat"), idea(new Brain()){std::cout << "Cat Default Constructor" << std::endl;}
Cat::Cat(Cat const &arg): Animal(arg), idea(new Brain(*arg.idea)){std::cout << "Cat Copy Constructor with " << type << std::endl;}
Cat::~Cat( void ){std::cout << "Cat Destructor for " << type << std::endl; delete idea;}
Cat &Cat::operator=(Cat const &arg){Animal::operator=(arg);delete idea;idea = new Brain(*arg.idea); return(*this);}

void	Cat::makeSound( void ) const{std::cout << "Miaouuuuu Im a Cat ! Miaouuu !" << std::endl;}

Brain const &Cat::getBrain( void ) const{return (*idea);}