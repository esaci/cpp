#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <map>

class EasyfindException: public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Easyfind : Value not Found !");
		}
};

template <typename T>
typename std::map<int, T>::iterator easyfind(std::map<int, T> &arg, int arg2)
{
	typename std::map<int, T>::iterator	it;

	it = arg.find(arg2);
	if (it != arg.end())
		return (it);
	throw EasyfindException();
}

template <typename T>
typename std::multimap<int, T>::iterator easyfind(std::multimap<int, T> &arg, int arg2)
{
	typename std::multimap<int, T>::iterator	it;

	it = arg.find(arg2);
	if (it != arg.end())
		return (it);
	throw EasyfindException();
}

template <typename T>
typename T::iterator easyfind(T &arg, int arg2)
{
	typename T::iterator	it;

	it = find(arg.begin(), arg.end(), arg2);
	if (it != arg.end())
		return (it);
	throw EasyfindException();
}


#endif