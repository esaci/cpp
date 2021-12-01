#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed v1(b.getx() - a.getx());
	Fixed v2(b.gety() - a.gety());
	Fixed vv1(c.getx() - a.getx());
	Fixed vv2(point.gety() - a.gety());

	Fixed w1 ((a.getx() * v1 + vv2 * v2 - point.getx() * v1) / (vv1 * v2 - (b.getx() - a.getx()) * v1));
	Fixed w2 ((vv2 - w1 * vv1) / v1);
	if (w1.toFloat() >= 0 && w2.toFloat() >= 0 && (w1 + w2).toFloat() <= 1)
		return (true);
	return (false);
}