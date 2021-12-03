#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << "------------------------------------" << std::endl;
	const WrongAnimal *Wcat = new WrongAnimal();
	const WrongAnimal *Vcat = new WrongCat();
	std::cout << Wcat->getType() << " " << std::endl;
	std::cout << Vcat->getType() << " " << std::endl;
	Wcat->makeSound(); //will output the cat sound!
	Vcat->makeSound();

	return (0);
}