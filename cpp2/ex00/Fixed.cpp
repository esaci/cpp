#include "Fixed.hpp"

int Fixed::_NbrBit = 8;

Fixed::Fixed( void ): _RawBits(0){std::cout << "Default constructor called" << std::endl;}
Fixed::Fixed(Fixed const &f): _RawBits(f._RawBits){std::cout << "Copy constructor called" << std::endl;}
Fixed::~Fixed( void ){std::cout << "Destructor called" << std::endl;}
int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_RawBits);
}
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_RawBits = raw;
}

Fixed	&Fixed::operator=(Fixed const &arg)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_RawBits = arg._RawBits;
	return (*this);
}