#include <iostream>
#include <fstream>
// #include <algorithm>

int main (int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "need a filename and 2 strings !" << std::endl;
		return (2);
	}
	std::ifstream	file(av[1]);
	if (!file.good())
	{
		std::cout << "File doesn't exist !" << std::endl;
		return (1);
	}
	if (!av[1][0] || !av[2][0])
	{
		std::cerr << "2nd and 3rd input must not be empty!" << std::endl;
		return (1);
	}
	std::string		name(av[1]);
	name = name + ".replace";
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::string		line;
	int				j = 0;

	std::ofstream	outfile(name.c_str());
	size_t		index;
	while(std::getline(file, line))
	{
		while (line.find(s1) != std::string::npos)
		{
			std::string	str(line);
			j++;
			index = line.find(s1);
			str = str.substr(0, index) + s2;
			outfile << str; 
			line = line.substr(index + s1.length());
		}
		outfile << line << std::endl;
	}
	file.close();
	outfile.close();
	return (0);
	(void)s1;
	(void)s2;
}