#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		~Point( void );
		Point(Point const &arg);
		Point(Fixed const f1, Fixed const f2);
		Point &operator=(Point const &arg);
		Fixed const &getx( void ) const;
		Fixed const &gety( void ) const;

	private:
		Fixed const x;
		Fixed const y;
};

std::ostream	&operator<<(std::ostream &o, Point const &arg);
bool bsp( Point const a, Point const b, Point const c, Point const point);

# endif