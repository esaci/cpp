#include "Array.hpp"
#include <string>

int	main( void )
{
	size_t i = 0;
	Array<int>	tmp(10);
	Array<char> tmp2(10);
	Array<int>	tmp3(tmp);
	Array<int>	tmp4;
	tmp4 = tmp;
	Array<std::string> smp(10);
	Array<int>	empty;
	try
	{
		for(i = 0; i < 10; i++)
			std::cout << tmp[i] << " | " << tmp2[i] << " | " << smp[i] << std::endl;
		for(i = 0; i < 10; i++)
		{
			tmp[i] = i + 1;
			tmp2[i] = 'a' + i;
 		}
		Array<int>	tmp5(tmp);
		tmp5[1] = 42;
		for(i = 0; i < 10; i++)
			smp[i] = std::string("test");
		for(i = 0; i < 10; i++)
			std::cout << tmp[i] << " | " << tmp2[i] << std::endl;
		for(i = 0; i < 10; i++)
			std::cout << tmp3[i] << " | " << tmp4[i] << " | " << tmp5[i] << std::endl;
		for(i = 0; i < 10; i++)
			std::cout << smp[i] << std::endl;
		for(int i = 0; i < 11; i++)
			std::cout << empty[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
	return (0);
}