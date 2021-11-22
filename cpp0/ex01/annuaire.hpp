#ifndef ANNUAIRE_HPP
# define ANNUAIRE_HPP
#include <iostream>
#include <string.h>
#include "contact.hpp"

class annuaire
{
	public:
		annuaire(void);
		~annuaire(void);
		void	search( void );
		void	add( void );
	private:
		int	nbr_contact;
		class contact list[10];
};
#endif