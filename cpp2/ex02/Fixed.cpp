#include "Fixed.hpp"

int Fixed::_NbrBit = 8;

float	Fixed::toFloat( void ) const
{
	float res = this->getRawBits() >> Fixed::_NbrBit;
	res = float((float)this->getRawBits() / (float)(1 << Fixed::_NbrBit));
	return (res);
}

Fixed::Fixed(float const value)
{
	this->setRawBits(value * (float)(1 << Fixed::_NbrBit));
}

Fixed::Fixed(int const value)
{
	int newvalue = value << Fixed::_NbrBit;

	this->setRawBits(newvalue);
}
Fixed::Fixed( void ): _RawBits(0){}
Fixed::Fixed(Fixed const &f)
{
	this->_RawBits = f.getRawBits();
}
Fixed::~Fixed( void ){}
int		Fixed::getRawBits( void ) const{return(this->_RawBits);}
void	Fixed::setRawBits(int const raw){this->_RawBits = raw;}

Fixed	&Fixed::operator=(Fixed const &arg)
{
	this->_RawBits = arg._RawBits;
	return (*this);
}

int		Fixed::toInt( void ) const
{
	int i;
	float j = this->toFloat();
	i = roundf(j);
	return (i);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &arg)
{
	o << arg.toFloat();
	return (o);
}
