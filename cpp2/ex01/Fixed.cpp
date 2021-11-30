#include "Fixed.hpp"

int Fixed::_NbrBit = 8;

float	Fixed::toFloat( void ) const
{
	float res = this->_RawBits >> Fixed::_NbrBit;
	res = float((float)this->_RawBits / (float)(1 << Fixed::_NbrBit));
	return (res);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = roundf(value * (float)(1 << Fixed::_NbrBit));
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	int newvalue = value << Fixed::_NbrBit;
	this->_RawBits = newvalue;
}
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

//Old version

/* float	Fixed::toFloat( void ) const
{
	float	res = 0;
	int		i;
	int		val;
	int		tmp;

	if (this->_RawBits < 0)
		val = -this->_RawBits;
	else
		val = this->_RawBits;
	for (i = 30; i > 7; i--)
	{
		tmp = pow(2, i);
		if (val >= tmp)
		{
			res += pow(2, i - 8);
			val -= tmp;
		}
	}
	for (i = 7; i > -1; i--)
	{
		tmp = pow(2, i);
		if (val >= tmp)
		{
			res += pow(2, (i - 8));
			val -= tmp;
		}
	}
	if (this->_RawBits < 0)
		res = -res;
	return (res);
}

Fixed::Fixed(float const value)
{
	int		i;
	float	val;
	this->_RawBits = 0;
	float	sertarien;

	if (value >= 0)
		val = value;
	else
		val = -value;
	for(i = 23; i > -1; i--)
	{
		if (val >=  pow(2, i))
		{
			this->_RawBits += pow(2, 8 + i);
			val -=  pow(2, i);
		}
	}
	val = std::modf(val, &sertarien);
	sertarien = 0;
	for(i = 7; i > -1; i--)
	{
		while (val >= pow(2, i - 8))
		{
			this->_RawBits += pow(2, i);
			val -= pow(2, i - 8);
			sertarien += pow(2, i - 8);
		}
		if (i == 0 && val >= (pow(2, i - 8) / 2))
		{
			this->_RawBits += pow(2, i);
		}
	}
	if (value < 0)
		this->_RawBits = -this->_RawBits;
}

Fixed::Fixed(int const value)
{
	this->setRawBits(value);
}
Fixed::Fixed( void ): _RawBits(0){}
Fixed::Fixed(Fixed const &f)
{
	this->_RawBits = f.getRawBits();
}
Fixed::~Fixed( void ){}
int		Fixed::getRawBits( void ) const{return(this->_RawBits);}
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
} */