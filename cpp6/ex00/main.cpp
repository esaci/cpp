#include "Convert.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
		return (1);
	Convert tmp(av[1]);
	return (0);
}