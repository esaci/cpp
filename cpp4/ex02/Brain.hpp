#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
protected:
	std::string	ideas[100];
public:
	Brain( void );
	Brain(Brain	const &);
	virtual ~Brain( void );
	Brain	&operator=(Brain const&);
	void setIdeas(std::string const &);
	void showIdeas( void );
};



#endif