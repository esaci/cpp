#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{/* 
	const Animal *all[100];
	int	i;

	for(i = 0; i < 50; i++)
		all[i] = new Dog();
	for(i = 50; i < 100;i++)
		all[i] = new Cat();
	for(i = 0; i < 100; i++)
	{
		std::cout << "Animal number: " << i << std::endl;
		all[i]->makeSound();
		delete	all[i];
	}
	std::cout << "Second Test ---------------------------------------------------" << std::endl;
	const	Dog *vDog = new Dog();
	const	Cat *vCat = new Cat();
	const	Dog cDog(*vDog);
	const	Cat cCat(*vCat);
	Dog fcDog;
	Cat fcCat;
	
	fcDog = cDog;
	fcCat = cCat;
	delete vCat;
	delete vDog;
	std::cout << "Troisieme Test --------------------------------------------------" << std::endl;
	Dog test;
	{
		Dog test2 = test;
	}
	Dog pardon;
	pardon = test; */
	Animal *ptr = new Dog();
	Animal *ptr2 = new Cat();
	*ptr = *ptr2;
	delete ptr;
	delete ptr2;
	return (0);
}