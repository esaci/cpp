#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ):tmp({NULL, NULL, NULL, NULL}){std::cout << "MateriaSource Default Constructor" << std::endl;}
MateriaSource::MateriaSource(MateriaSource const &arg){std::cout << "MateriaSource Copy Constructor" << std::endl;}
MateriaSource	&MateriaSource::operator=(MateriaSource const &arg){(void)arg;}
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
}