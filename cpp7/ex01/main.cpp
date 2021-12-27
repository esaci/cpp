#include "iter.hpp"

int main( void )
{
	char	tmp[] = "oui bonjour";
	int		tmp2[] = {1, 2, 3, 4, 13123, 8};

	iter(tmp, 12, &test);
	std::cout << "---------------" << std::endl;
	iter(tmp2, 6, &test);
	std::cout << "---------------" << std::endl;
	iter<char>(tmp, 12, &test);
	return (0);
}