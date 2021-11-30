#include "Fixed.hpp"

#include <iostream>
int main( void ) {
	{
		Fixed a(5);
		Fixed b( 10 );
		Fixed c( 42.42f );
		Fixed d( 100.111f );
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << "a + b is " << a + b << std::endl;
		std::cout << "b * a is " << b * a << std::endl;
		std::cout << "b / a is " << b / a << std::endl;
		std::cout << "d * c is " << d * c << std::endl;
		Fixed e(a + b);
		Fixed f(b * a);
		Fixed g(b / a);
		Fixed h(d * c);
		std::cout << "e is " << e.toInt() << " as integer" << std::endl;
		std::cout << "f is " << f.toInt() << " as integer" << std::endl;
		std::cout << "g is " << g.toInt() << " as integer" << std::endl;
		std::cout << "h is " << h.toInt() << " as integer" << std::endl;
	}
	{
		Fixed a;
		Fixed const b(10);
		Fixed const c(42.42f);
		Fixed const d(b);
		a = Fixed(1234.4321f);
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
return (0);
}