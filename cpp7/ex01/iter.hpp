#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *p, size_t len, void (*f)(T const &))
{
	if (!p)
		return ;
	for(size_t i = 0; i < len; i++)
	{
		f(p[i]);
	}
}

template <typename T>
void	test(T &arg)
{
	std::cout << arg << std::endl;
}

#endif