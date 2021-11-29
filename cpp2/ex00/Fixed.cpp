#include "Fixed.hpp"

int Fixed::_NbrBit = 8;

Fixed::Fixed( void ): _RawBits(0){}
Fixed::Fixed(Fixed &f): _RawBits(f.getRawBits()){}
Fixed::~Fixed( void ){}
int		Fixed::getRawBits( void) const{return(this->_RawBits);}
void	Fixed::setRawBits(int const raw)
{
	int	i;
	int	val;
	this->_RawBits = 0;
	int tmp;

	if (raw >= 0)
		val = raw;
	else
		val = -raw;
	for(i = 23; i > -1; i--)
	{
		tmp = pow(2, i);
		if (val >= tmp)
		{
			this->_RawBits += pow(2, 8 + i);
			val -= tmp;
		}
	}
	if (raw < 0)
		this->_RawBits = -this->_RawBits;
}

Fixed	&Fixed::operator=(Fixed const &arg)
{
	this->_RawBits = arg._RawBits;
	return (*this);
}