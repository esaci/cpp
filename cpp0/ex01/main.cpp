#include "annuaire.hpp"

int main(void)
{
	std::string ptr;
	annuaire an;

	std::cout << "Waiting for command: ";
	while (std::getline(std::cin, ptr))
	{
		if (ptr == "EXIT")
			return (0);
		else if (ptr == "ADD")
			an.add();
		else if (ptr == "SEARCH")
			an.search();
		else
			std::cout << ptr << " not a command. EXIT, ADD, SEARCH" << std::endl;
		std::cout << "Waiting for command: ";
	}
	return (0);
}