#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <iostream>
# include <stack>
# include <vector>
# include <algorithm>
# include <deque>

template <typename T> class MutantStack : public std::stack<T>
{
	public :
		MutantStack<T>( void ): std::stack<T>(){}
		MutantStack<T>(MutantStack const &arg):std::stack<T>(arg){}
		virtual	~MutantStack<T>( void ){}
		typedef  typename std::deque<T>::iterator iterator;
		MutantStack<T>	&operator=(MutantStack<T> const &arg)
		{
			std::stack<T>::operator=(arg);
			return (*this);
		}
		iterator	begin( void )
		{
			return (this->c.begin());
		}
		iterator	end( void )
		{
			return (this->c.end());
		}
		/* typedef typename std::stack<T>::container_type iterator; */
		/* typedef typename std::stack<T>::container_type<T>::begin begin; */
		/* typedef  typename std::vector<T>::push_back end; */
		/* iterator begin( void ){return (std::stack<T>::begin(this->c));}
		iterator end(void ){return (std::end(*this)));} */
};

#endif