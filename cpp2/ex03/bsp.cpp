#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed cay(c.gety() - a.gety()); //dy ca
	Fixed cax(c.getx() - a.getx()); //dx ca
	Fixed bay(b.gety() - a.gety()); //dx ba
	Fixed pay(point.gety() - a.gety()); //dy pa
	Fixed pax(point.getx() - a.getx()); //dy pa
	Fixed bax(b.getx() - a.getx()); //dx ba

	if (std::abs(cay.toFloat()) <= 0.1f)
		return (bsp(a, c, b, point));
	Fixed w1 ((a.getx() * cay + pay * cax - point.getx() * cay) / (bay * cax - bax * cay));
	Fixed w2 ((pay - (w1 * bay)) / cay);

	if (w1.toFloat() > 0 && w2.toFloat() > 0 && (w1 + w2).toFloat() <= 1)
		return (true);
	return (false);
}