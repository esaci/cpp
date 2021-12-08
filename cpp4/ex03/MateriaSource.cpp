#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for(int i = 0; i < 4; i++)
		tmp[i] = NULL;
	std::cout << "MateriaSource Default Constructor" << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const &arg)
{
	for(int i = 0; i < 4; i++)
		tmp[i] = arg.tmp[i];
	std::cout << "MateriaSource Copy Constructor" << std::endl;
}
MateriaSource	&MateriaSource::operator=(MateriaSource const &arg)
{
	for(int i = 0; i < 4; i++)
		tmp[i] = arg.tmp[i];
	return (*this);
}
MateriaSource::~MateriaSource( void )
{
	for(int i = 0; i < 4; i++)
	{
		if (tmp[i])
			delete(tmp[i]);
	}
	std::cout << "MateriaSource Destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria *arg)
{
	int i;
	if (!arg)
		return ;
	for(i = 0; i < 4; i++)
	{
		if (!tmp[i])
		{
			tmp[i] = arg;
			break;
		}
	}
	if (i == 4)
		std::cout << "MateriaSource already learned 4 Materia !" << std::endl;
}


AMateria *MateriaSource::createMateria(std::string const &arg)
{
	for(int i = 0; i < 4; i++)
	{
		if (tmp[i])
		{
			if (tmp[i]->getType() == arg)
				return (tmp[i]->clone());
		}
	}
	return (0);
}