#include "span.hpp"
#include <list>
int main()
{
	try
	{
		int	tmp[] = {1, 100, 2, 3, 5, 4, 4, 44444};
		std::list<int>	tmp2(tmp, tmp + sizeof(tmp) / sizeof(int));
		Span sp = Span(static_cast<unsigned int>(tmp2.size()));
		addNumber(sp, tmp2);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	try
	{
		int	tmp[] = {-10, 100, 394, 471};
		std::list<int>	tmp2(tmp, tmp + sizeof(tmp) / sizeof(int));
		Span sp = Span(static_cast<unsigned int>(tmp2.size()));
		addNumber(sp, tmp2);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}