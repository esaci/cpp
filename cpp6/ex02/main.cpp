#include <iostream>
#include <time.h>
#include <cstdlib>

class Base
{
	public :
		virtual ~Base( void ){}
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base *generate( void )
{
	int u;
	Base	*res;
	srand(time(NULL));
	u = rand() % 3;
	switch (u)
	{
		case 0:
			std::cout << "Generate A" << std::endl;
			res = new A;
			break;
		case 1:
			std::cout << "Generate B" << std::endl;
			res = new B;
			break;
		default:
			std::cout << "Generate C" << std::endl;
			res = new C;
			break;
	}
	return (res);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Il s'agit d'une instance de class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Il s'agit d'une instance de class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Il s'agit d'une instance de class C" << std::endl;
	else
		std::cout << "Error: il faut une instance A, B, C" << std::endl;
}

void	identify(Base &p)
{
	Base res;
	try 
	{
		res = dynamic_cast<A &>(p);
		std::cout << "Il s'agit d'une instance de class A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		res = dynamic_cast<B &>(p);
		std::cout << "Il s'agit d'une instance de class B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		res = dynamic_cast<C &>(p);
		std::cout << "Il s'agit d'une instance de class C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	std::cout << "Error: il faut une instance A, B, C" << std::endl;
	(void)res;
}

int	main( void )
{
	Base *tmp;

	tmp = generate();
	identify(tmp);
	identify(*tmp);
	delete tmp;
}