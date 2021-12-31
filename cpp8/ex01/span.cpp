#include "span.hpp"

Span::Span( void ): _vector(new std::vector<int>[0]()), _N(0){}
Span::Span(unsigned int arg): _vector(new std::vector<int>[arg]), _N(arg){}
Span::Span(int arg): _vector(new std::vector<int>[arg]), _N(static_cast<unsigned int>(arg)){}
Span::Span(Span const &arg): _vector(new std::vector<int>(*arg._vector)), _N(arg._N){}
Span::~Span( void ){delete [] _vector;}

const char *Span::OutofBoundException::what( void ) const throw()
{
	return ("Span: No space left in Span");
}
const char *Span::ShortSize::what( void ) const throw()
{
	return ("Span: Too small to calcul span");
}
Span	&Span::operator=(Span const &arg)
{
	delete _vector;
	_vector = new std::vector<int>(*arg._vector);
	_N = arg._N;
	return (*this);
}

void	Span::addNumber(int arg)
{
	if (_vector->size() == _N)
		throw OutofBoundException();
	_vector->push_back(arg);
}

unsigned int		Span::longestSpan( void )
{
	std::sort(_vector->begin(), _vector->end());
	std::vector<int>::iterator it = _vector->begin();
	std::vector<int>::iterator ite = _vector->end();

	return (static_cast<unsigned int>(*(--ite) - *it));
}

unsigned int		Span::shortestSpan( void )
{
	std::vector<int>::iterator it = _vector->begin();
	std::vector<int>::iterator ite = _vector->end();
	unsigned int res;
	unsigned int tmp;
	std::sort(_vector->begin(), _vector->end());

	if (_vector->size() < 2)
		throw	ShortSize();
	res = *(it + 1) - *it;
	for(; (it + 1) != ite; it++)
	{
		if (!res)
			return (res);
		tmp = static_cast<unsigned int>(*(it + 1) - *it);
		if (tmp < res)
			res = tmp;
	}
	return (res);
}

unsigned int	&Span::getsizeLimit( void )
{
	return (_N);
}

std::vector<int>	&Span::getVector( void )
{
	return (*_vector);
}
