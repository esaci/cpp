#include "Cat.hpp"

Cat::Cat( void ):Animal(){type = "Cat";std::cout << "Cat Default Constructor" << std::endl;}
Cat::Cat(Cat const &arg): Animal(arg){std::cout << "Cat Copy Constructor with " << type << std::endl;}
Cat::~Cat( void ){std::cout << "Cat Destructor for " << type << std::endl;}
Cat &Cat::operator=(Cat const &arg){Animal::operator=(arg); return (*this);}

void	Cat::makeSound( void ) const{std::cout << "Miaouuuuu Im a Cat ! Miaouuu !" << std::endl;}