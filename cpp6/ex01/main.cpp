#include <iostream>
#include <stdint.h>
struct Data
{
	static	const int i = 0;
};

uintptr_t serialize(Data* ptr){return (reinterpret_cast<uintptr_t>(ptr));}

Data* deserialize(uintptr_t raw){return (reinterpret_cast<Data *>(raw));}

int	main( void )
{
	Data	ptr;
	Data	ptr2;

	std::cout << "adress ptr : " << &ptr << " | adress ptr2 : " << &ptr2 << std::endl;
	std::cout << "serialize value ptr : " << serialize(&ptr) << " | serialize value ptr2 : " << serialize(&ptr2) << std::endl;
	std::cout << "adress ptr : " << deserialize(serialize(&ptr)) << " | adress ptr2 : " << deserialize(serialize(&ptr2)) << std::endl;	
	std::cout << ptr.i << "||" << ptr2.i << std::endl;
	return (0);
}