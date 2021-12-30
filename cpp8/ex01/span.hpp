#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	class OutofBoundException : public std::exception
	{
		virtual char const *what( void ) const throw();
	};
	private:
		std::vector<int> *_vector;
		unsigned int _N;
		unsigned int _index;
	public:
		Span( void );
		Span(unsigned int &arg);
		Span(Span const &);
		virtual	~Span( void );
		Span	&operator=(Span const &);
		void	addNumber(int &);
		template <typename T>
		void Span::addNumber(typename T::iterator it, typename T::iterator ite)
		{
			for(it; it != ite; it++)
				_vector->push_back(*it);
		}
		int		&shortestSpan( void );
		int		&longestSpan( void );
};

# endif
