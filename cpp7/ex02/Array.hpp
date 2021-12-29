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
					return ("Array: Out of Bounds !");
				}
		};
		Array<T>( void ): _array(new T[0]()), _len(0){}
		Array<T>(size_t const &arg): _array(new T[arg]()), _len(arg){}
		Array<T>(Array<T> const &arg): _len(arg._len)
		{
			_array = new T[arg._len];
			for(size_t i = 0; i < arg._len; i++)
				_array[i] = arg._array[i];
		}
		T	&operator[](size_t const &arg)
		{
			if (!_len)
				throw OutofBondExeption();
			if (arg < _len)
				return (_array[arg]);
			throw OutofBondExeption();
		}
		Array	&operator=(Array const &arg)
		{
			if (_array)
				delete [] _array;
			_len = arg._len;
			_array = new T[_len];
			for(size_t i = 0; i < _len; i++)
				_array[i] = arg._array[i];
			return (*this);
		}
		virtual ~Array( void )
		{
			delete [] _array;
		}
		size_t	const &size( void ) const
		{
			return (_len);
		}
};
#endif