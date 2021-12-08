#include "Character.hpp"

Character::~Character( void )
{

	std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (tmp[i])
			delete tmp[i];
	}
}

Character::Character( void )
{
	for(int i = 0; i < 4; i++)
		tmp[i] = NULL;
	std::cout << "Character Default Constructor" << std::endl;
}

Character::Character(Character const &arg)
{
	for(int i = 0; i < 4; i++)
	{
		if (arg.tmp[i])
			tmp[i] = arg.tmp[i]->clone();
		else
			tmp[i] = NULL;
	}
	std::cout << "Character Copy Constructor" << std::endl;
}

Character::Character(std::string const &arg)
{
	Name = arg;
	for(int i = 0; i < 4; i++)
		tmp[i] = NULL;
	std::cout << "Character Constructor" << std::endl;
}

Character &Character::operator=(Character const &arg)
{
	std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (tmp[i])
			delete tmp[i];
		if (arg.tmp[i])
			tmp[i] = arg.tmp[i]->clone();
		else
			tmp[i] = NULL;
	}
	return (*this);
}

std::string	const &Character::getName( void ) const{return(this->Name);}

void	Character::equip(AMateria *arg)
{
	int i;

	for(i = 0; i < 4; i++)
	{
		if (!tmp[i])
		{
			tmp[i] = arg;
			return ;
		}
	}
	if (i == 4)
	{
		if (arg)
			delete arg;
		std::cout << "Character " << Name << " already has 4 Materia !" << std::endl;
	}
}

void	Character::unequip(int idx)
{

	if (idx < 0 || idx > 3 || !tmp[idx])
	{
		return ;
	}
	tmp[idx] = NULL;
}

void	Character::use(int idx, ICharacter &arg)
{

	if (idx < 0 || idx > 3 || !tmp[idx])
	{
		return ;
	}
	tmp[idx]->use(arg);
}