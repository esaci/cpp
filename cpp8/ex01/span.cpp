#include "span.hpp"

Span::Span( void ): _vector(new std::vector<int>()), _N(0), _index(0){}
Span::Span(unsigned int &arg): _vector(new std::vector<int>(arg)), _N(arg), _index(0){}
Span::Span(Span const &arg): _vector(new std::vector<int>(*arg._vector)), _N(arg._N), _index(arg._index){}
Span::~Span( void ){}

const char *Span::OutofBoundException::what( void ) const throw()
{
	return ("Span: No space left in Span");
}
Span	&Span::operator=(Span const &arg)
{
	delete _vector;
	_vector = new std::vector<int>(*arg._vector);
	_N = arg._N;
	_index = arg._index;
	return (*this);
}

void	Span::addNumber(int &arg)
{
	if (_index == (_N - 1))
		throw OutofBoundException();
	_vector->push_back(arg);
	_index++;
}

int		&Span::shortestSpan( void )
{
	
}