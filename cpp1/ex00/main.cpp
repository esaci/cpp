#include "Zombie.hpp"

int main( void )
{
	Zombie l1("Batman");
	Zombie	*ptr = newZombie("elias");
	l1.annonce();
	ptr->annonce();
	randomChump("Spiderman");
	delete ptr;
	return (0);
}