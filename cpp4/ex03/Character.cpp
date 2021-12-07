#include "Character.hpp"

Character::~Character( void )
{
	AMateria *tmp[] = {Inv0, Inv1, Inv2, Inv3};

	std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (tmp[i])
			delete tmp[i];
	}
}

Character::Character( void ){std::cout << "Character Default Constructor" << std::endl;}
Character::Character(Character const &arg):ICharacter(arg){std::cout << "Character Copy Constructor" << std::endl;}
Character::Character(std::string const &arg){Name = arg;std::cout << "Character Constructor" << std::endl;}
Character &Character::operator=(Character const &arg)
{
	AMateria *tmp[] = {Inv0, Inv1, Inv2, Inv3};
	AMateria *tmp2[] = {arg.Inv0, arg.Inv1, arg.Inv2, arg.Inv3};
	std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (tmp[i])
			delete tmp[i];
		tmp[i] = tmp2[i]->clone();
	}
}

std::string	const &Character::getName( void ) const{return(this->Name);}

void	Character::equip(AMateria *arg)
{
	int i;
	AMateria *tmp[] = {Inv0, Inv1, Inv2, Inv3};
	for(i = 0; i < 4; i++)
	{
		if (!tmp[i])
		{
			tmp[i] = arg;
			break;
		}
	}
	if (i == 4)
		std::cout << "Character " << Name << "already has 4 Materia !" << std::endl;
}

void	Character::unequip(int idx)
{
	AMateria *tmp[] = {Inv0, Inv1, Inv2, Inv3};

	if (idx < 0 || idx > 3 || !tmp[idx])
	{
		return ;
	}
	tmp[idx] = NULL;
}

void	Character::use(int idx, ICharacter &arg)
{
	AMateria *tmp[] = {Inv0, Inv1, Inv2, Inv3};

	if (idx < 0 || idx > 3 || !tmp[idx])
	{
		return ;
	}
	tmp[idx]->use();
}