#include "whatever.hpp"

int	main( void )
{
	{
		int i = 1;
		int j = 2;
		char a = 'a';
		char b = 'b';

		std::cout << i << a << " | " << j << b << std::endl;
		std::cout << min<int>(i, j) << min<char>(a, b) << " | " << max(j, i) << max(b, a) << std::endl;
		swap(i, j);
		swap(a, b);
		std::cout << i << a << " | " << j << b << std::endl;
	}
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}