#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
T	&easyfind(T &arg, int arg2)
{
	return (find_first_of(arg.begin(), arg.end(), arg2));
}
#endif