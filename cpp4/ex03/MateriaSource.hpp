#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria *tmp[4];
	public:
		MateriaSource( void );
		MateriaSource(MateriaSource const &);
		MateriaSource &operator=(MateriaSource const &);
		virtual ~MateriaSource( void );
		virtual	void learnMateria(AMateria *);
		virtual AMateria *createMateria(std::string const &);
};

#endif