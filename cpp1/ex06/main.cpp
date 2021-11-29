#include "Karen.hpp"

int	main(int ac, char *av[])
{
	Karen	karen;

	if (ac != 2)
	{
		std::cerr << "Karen only takes one argument" << std::endl;
		return (1);
	}
	std::string	line(av[1]);
	karen.filter(line);
	return (0);
}