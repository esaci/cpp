#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int> *_vector;
		unsigned int _N;
	public:
		class OutofBoundException : public std::exception
		{
			virtual char const *what( void ) const throw();
		};
		class ShortSize : public std::exception
		{
			virtual char const *what( void ) const throw();
		};
		Span( void );
		Span(unsigned int );
		Span(int );
		Span(Span const &);
		virtual	~Span( void );
		Span	&operator=(Span const &);
		void	addNumber(int );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );
		std::vector<int> &getVector( void );
		unsigned int	&getsizeLimit( void );
};

template <typename T>
void addNumber(Span &arg, T &arg2)
{
	typename T::iterator it = arg2.begin();
	typename T::iterator ite = arg2.end();
	for(; it != ite; it++){
		if (arg.getVector().size() == arg.getsizeLimit())
			throw Span::OutofBoundException();
		arg.getVector().push_back(*it);
	}
}

# endif
