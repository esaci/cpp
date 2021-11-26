#include "Zombie.hpp"

int main( void )
{
	Zombie *ptr;

	ptr = zombieHorde(10, "Elias");
	for(int i=0; i < 10; i++)
		ptr[i].annonce();
	delete [] ptr;
	return (0);
}