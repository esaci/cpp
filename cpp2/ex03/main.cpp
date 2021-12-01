#include "Point.hpp"
#include <iostream>

int main( void ) {
	{
		Point a(Fixed(0.0f), Fixed(0.0f));
		Point b(Fixed(0.0f), Fixed(7.0f));
		Point c(Fixed(7.0f), Fixed(0.0f));
		Point point(Fixed(-1.0f), Fixed(1.0f));

		std::cout << "Point is "; 
		if (!bsp(a, b, c, point))
			std::cout << "Not ";
		std::cout << " in the triangle ! \na: " << a << " b : " << b << " c : " << c << std::endl;
	}
return (0);
}