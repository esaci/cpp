#include "Point.hpp"

Point::Point( void ): x(0), y(0){}
Point::Point(Fixed const f1, Fixed const f2):x(f1), y(f2){}
Point::~Point( void ){}
Point::Point(Point const &arg):x(arg.x), y(arg.y){}
Point &Point::operator=(Point const &arg)
{
	(void)arg; 
	return (*this);
}
Fixed const &Point::getx( void ) const {return (this->x);}
Fixed const &Point::gety( void ) const {return (this->y);}

std::ostream	&operator<<(std::ostream &o, Point const &arg)
{
	o << "x vaut " << arg.getx().toFloat() << " y vaut " << arg.gety().toFloat();
	return (o);
}