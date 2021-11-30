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
	this->setRawBits(roundf(value * (float)(1 << Fixed::_NbrBit)));
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

Fixed	Fixed::operator+(Fixed const &arg){return(Fixed(this->toFloat() + arg.toFloat()));}
Fixed	Fixed::operator-(Fixed const &arg){return(Fixed(this->toFloat() - arg.toFloat()));}
Fixed	Fixed::operator/(Fixed const &arg){return(Fixed(this->toFloat() / arg.toFloat()));}
Fixed	Fixed::operator*(Fixed const &arg){return(Fixed(this->toFloat() * arg.toFloat()));}

bool	Fixed::operator>(Fixed const &arg) const{return(this->_RawBits > arg._RawBits);}
bool	Fixed::operator>=(Fixed const &arg) const{return(this->_RawBits >= arg._RawBits);}
bool	Fixed::operator<(Fixed const &arg) const{return(this->_RawBits < arg._RawBits);}
bool	Fixed::operator<=(Fixed const &arg) const{return(this->_RawBits <= arg._RawBits);}
bool	Fixed::operator!=(Fixed const &arg) const{return(this->_RawBits != arg._RawBits);}
bool	Fixed::operator==(Fixed const &arg) const{return(this->_RawBits == arg._RawBits);}

Fixed	Fixed::operator++( void )
{
	this->_RawBits++;
	return (*this);
}

Fixed	Fixed::operator--( void )
{
	this->_RawBits--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp (*this);
	this->_RawBits++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp (*this);
	this->_RawBits--;
	return (tmp);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &arg)
{
	o << arg.toFloat();
	return (o);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}


const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}


Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (b > a)
		return (b);
	return (a);
}


const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (b > a)
		return (b);
	return (a);
}