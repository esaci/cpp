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
		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		Fixed(float const value);
		Fixed(int const value);
		Fixed(Fixed const &f);
		Fixed( void );
		~Fixed( void );
		Fixed	&operator=(Fixed const &arg);
		Fixed	operator+(Fixed const &arg) const;
		Fixed	operator-(Fixed const &arg) const;
		Fixed	operator*(Fixed const &arg) const;
		Fixed	operator/(Fixed const &arg) const;
		bool	operator==(Fixed const &arg) const;
		bool	operator!=(Fixed const &arg) const;
		bool	operator>(Fixed const &arg) const;
		bool	operator>=(Fixed const &arg) const;
		bool	operator<(Fixed const &arg) const;
		bool	operator<=(Fixed const &arg) const;
		Fixed	operator++( void );
		Fixed	operator--( void );
		Fixed	operator++(int);
		Fixed	operator--(int);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &arg);

#endif
