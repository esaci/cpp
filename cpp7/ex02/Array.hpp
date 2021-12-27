#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		size_t	_len;
	public:
		class OutofBondExeption: public std::exception
		{
			public:
				virtual	const char *what( void ) const throw()
				{
					return ("Array: Out of Bond !");
				}
		};
		Array<T>( void ): _array(NULL), _len(0){}
		Array<T>(size_t const &arg): _array(new T[arg]), _len(arg){}
		Array<T>(Array const &arg): _len(arg._len)
		{
			_array = new T[arg._len];
			for(size_t i = 0; i < _len; i++)
				_array[i] = arg._array[i];
		}
		Array	&operator=(Array const &arg)
		{
			if (_array)
				delete [] _array;
			_array = new T[arg._len];
			_len = arg._len;
			for(size_t i = 0; i < _len; i++)
				_array[i] = arg._array[i];
			return (*this);
		}
		virtual ~Array( void )
		{
			delete [] _array;
		}
		T	&operator[](size_t const &arg)
		{
			if (!_array)
				throw OutofBondExeption();
			if (arg < _len)
				return (_array[arg]);
			throw OutofBondExeption();
		}
		size_t	const &size( void ) const
		{
			return (_len);
		}
};
#endif