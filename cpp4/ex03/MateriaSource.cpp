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
MateriaSource::~MateriaSource( void ){std::cout << "MateriaSource Destructor" << std::endl;}

void MateriaSource::learnMateria(AMateria *arg)
{
	if (!arg)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (!tmp[i])
		{
			tmp[i] = arg;
			break;
		}
	}
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