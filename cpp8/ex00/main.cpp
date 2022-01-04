#include "easyfind.hpp"

#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>


void	test_vector( void )
{
	int	test2[] = {1, 2, 3, 4, 5};
	std::vector<int>	test(test2, test2 + sizeof(test2) / sizeof(int));
	std::vector<int>::iterator	tmp;
	/* std::vector<char> test3;
	easyfind(test3, 4); */
	try
	{
		tmp = easyfind(test, 3);
		std::cout << "Vector : " << *tmp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test_list( void )
{
	int	test2[] = {1, 2, 3, 4, 5};
	std::list<int>	test(test2, test2 + sizeof(test2) / sizeof(int));
	std::list<int>::iterator	tmp;
	try
	{
		tmp = easyfind< std::list<int> >(test, 3);
		std::cout << "List : " << *tmp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test_deque( void )
{
	int	test2[] = {1, 2, 3, 4, 5};
	std::deque<int>	test(test2, test2 + sizeof(test2) / sizeof(int));
	std::deque<int>::iterator	tmp;
	try
	{
		tmp = easyfind< std::deque<int> >(test, 3);
		std::cout << "Deque : " << *tmp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test_map( void )
{
	int	test2[] = {1, 2, 3, 4, 5};
	int	test3[] = {'a', 'b', 'c', 'd', 'e'};
	std::map<int, char>	test;
	for (int i = 0; i < 5; i++)
		test[test2[i]] = test3[i];
	std::map<int, char>::iterator	tmp;
	try
	{
		tmp = easyfind(test, 3);
		std::cout << "map : " << tmp->second << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test_multimap( void )
{
	int	test2[] = {1, 2, 3, 4, 5};
	int	test3[] = {'a', 'b', 'c', 'd', 'e'};
	std::multimap<int, char>	test;
	for (int i = 0; i < 5; i++)
		test.insert(std::pair <int, char> (test2[i], test3[i]));
	std::map<int, char>::iterator	tmp;
	try
	{
		tmp = easyfind(test, 3);
		std::cout << "multimap : " << tmp->second << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test_set( void )
{
	 int	test2[] = {1, 2, 3, 4, 5};
  	std::set<int> test (test2,test2 + 5); 
	std::set<int>::iterator	tmp;
	try
	{
		tmp = easyfind< std::set<int> >(test, 3);
		std::cout << "Set : " << *tmp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test_multiset( void )
{
	 int	test2[] = {1, 2, 3, 4, 5};
  	std::multiset<int> test (test2,test2 + 5); 
	std::multiset<int>::iterator	tmp;
	try
	{
		tmp = easyfind< std::multiset<int> >(test, 3);
		std::cout << "Multiset : " << *tmp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main( void )
{
	test_vector();
	test_list();
	test_deque();
	test_map();
	test_multimap();
	test_set();
	test_multiset();
	return (0);
}
