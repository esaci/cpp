#include "Point.hpp"
#include <iostream>

int main( void ) {
	{
		Point a(Fixed(0.0f), Fixed(0.0f));
		Point b(Fixed(0.0f), Fixed(7.0f));
		Point c(Fixed(7.0f), Fixed(0.0f));
		Point point(Fixed(0.0f), Fixed(3.0f));

		std::cout << "Point is "; 
		if (bsp(a, b, c, point) == false)
			std::cout << "Not ";
		std::cout << "in the triangle ! \na : " << a << "\nb : " << b << "\nc : " << c << std::endl;
	}
	{
		Point a(Fixed(0.0f), Fixed(0.0f));
		Point b(Fixed(7.0f), Fixed(7.0f));
		Point c(Fixed(2.0f), Fixed(3.0f));
		Point point(Fixed(3.0f), Fixed(3.1f));

		std::cout << "Point is "; 
		if (bsp(a, b, c, point) == false)
			std::cout << "Not ";
		std::cout << "in the triangle ! \na : " << a << "\nb : " << b << "\nc : " << c << std::endl;
	}
	{
		Point a(Fixed(0.0f), Fixed(0.0f));
		Point b(Fixed(7.0f), Fixed(7.0f));
		Point c(Fixed(2.0f), Fixed(3.0f));
		Point point(Fixed(4.0f), Fixed(5.0f));

		std::cout << "Point is "; 
		if (bsp(a, b, c, point) == false)
			std::cout << "Not ";
		std::cout << "in the triangle ! \na : " << a << "\nb : " << b << "\nc : " << c << std::endl;
		std::cout << "Point : " << point << std::endl;
	}
return (0);
}