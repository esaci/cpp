#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
	/* const Animal test; */
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
	const	Dog fcDog = cDog;
	const	Cat fcCat = cCat;

	delete vCat;
	delete vDog;
	return (0);
}