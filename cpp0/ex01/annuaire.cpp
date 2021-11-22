#include "annuaire.hpp"
#include <stdlib.h>

annuaire::annuaire(void)
{
	this->nbr_contact = 0;
}
annuaire::~annuaire( void )
{}
void	annuaire::add(void)
{
	int i;
	int j;
	static int lol = 0;

	if (this->nbr_contact > 7)
	{
		std::cout << "MEMOIRE PLEINE(TAILLE 8), ECRITURE DES INFOS SUR LE CONTACT LE PLUS ANCIEN" << std::endl;
		this->nbr_contact = lol;
		lol = (lol + 1) % 8;
	}
	std::string tmp(" of the new contact: ");
	std::string ask[] = {"First Name" + tmp, "Last Name" + tmp, "Nickname" + tmp, 
	"Phone Number" + tmp, "Darkest Secrect" + tmp};
	std::string ptr[5];
	for(i = 0, j = 0; i < 5; i++, j++)
	{
		std::cout << ask[i];
		std::getline(std::cin, ptr[i]);
	}

	this->list[this->nbr_contact].define(ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
	this->nbr_contact++;
	if (lol)
		this->nbr_contact = 8;
}

void	annuaire::search(void)
{
	int	i;
	std::string ptr;

	std::cout << "|" << std::setw(10) << std::right << "Index"<< "|";
	std::cout << std::setw(10) << std::right << "First Name"<< "|";
	std::cout << std::setw(10) << std::right << "Last name"<< "|";
	std::cout << std::setw(10) << std::right << "Nickname"<< "|";
	std::cout << std::endl;
	for(i=0; i < nbr_contact; i++)
		this->list[i].print(i);
	std::cout << "Choisis l'index du contact qui t'interesse : ";
	std::getline (std::cin, ptr);
	for (i=0; i < nbr_contact; i++)
	{
		if (i == atoi(ptr.c_str()))
		{
			this->list[i].full_print(i);
			return;
		}
	}
	std::cout << "Index invalide" << std::endl;

}