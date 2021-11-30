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
		Fixed(Fixed const &f);
		Fixed( void );
		~Fixed( void );
		Fixed &operator=(Fixed const &arg);
		int	getRawBits( void ) const;
		void	setRawBits(int const raw);
};

#endif
