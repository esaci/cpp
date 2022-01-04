#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "--------------" << std::endl;
	}
	{
		MutantStack<char> mstack;
		for (int i = 'a'; i <= 'z'; i++)
			mstack.push(i);
		MutantStack<char>::iterator it;
		it = mstack.begin();
		MutantStack<char>::iterator ite = mstack.end();
		std::cout << mstack.size() << std::endl;
		for (; it != ite; it++)
			std::cout << *it << std::endl;
		MutantStack<char> temp;
		temp = mstack;
		it = mstack.begin();
		for (int i = 'z'; i > 'b'; i--)
			mstack.pop();
		std::cout << "--------------" << std::endl;
		std::cout << mstack.size() << std::endl;
		std::cout << temp.size() << std::endl;
		MutantStack<char> s(mstack);
		std::cout << s.size() << std::endl;
		it = s.begin();
		ite = s.end();
		std::cout << "--------------" << std::endl;
		for (; it != ite; it++)
			std::cout << *it << std::endl;

	}
	return 0;
}