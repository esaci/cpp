#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class	Fixed
{
	private:
		int	_RawBits;
		static int	_NbrBit;
	public:
		Fixed(float const value);
		Fixed(int const value);
		Fixed(Fixed const &f);
		Fixed( void );
		~Fixed( void );
		Fixed	&operator=(Fixed const &arg);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &arg);

#endif
