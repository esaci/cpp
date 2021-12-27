#include "Convert.hpp"

Convert &Convert::operator=(Convert const &){return (*this);}


void	Convert::generate_print(char const &tmp) const
{
	print_char(tmp);
	print_int(static_cast<int>(tmp));
	print_float(static_cast<float>(tmp));
	print_double(static_cast<double>(tmp));
}

void	Convert::generate_print(int const &tmp) const
{
	if (tmp > 126 || tmp < 0)
			print_char("impossible");
		else
			print_char(static_cast<char>(tmp));
	print_int(tmp);
	print_float(static_cast<float>(tmp));
	print_double(static_cast<double>(tmp));
}

void	Convert::generate_print(float const &tmp) const
{
	if (tmp == tmp && tmp != tmp - 1 && tmp != tmp + 1)
	{
		if (tmp > 126 || tmp < 0)
			print_char("impossible");
		else
			print_char(static_cast<char>(tmp));
		print_int(static_cast<int>(tmp));
	}
	else
	{
		print_char("impossible");	
		print_int("impossible");
	}
	print_float(tmp);
	print_double(static_cast<double>(tmp));
}

void	Convert::generate_print(double const &tmp) const
{
	if (tmp == tmp && tmp != tmp - 1 && tmp != tmp + 1)
	{
		if (tmp > 126 || tmp < 0)
			print_char("impossible");
		else
			print_char(static_cast<char>(tmp));
		print_int(static_cast<int>(tmp));
	}
	else
	{
		print_char("impossible");	
		print_int("impossible");
	}
	print_float(static_cast<float>(tmp));
	print_double(tmp);
}

Convert::Convert(std::string const &arg): _precision(1), _value(arg)
{
	size_t	i = -1;

	if (!arg[1])
	{
		if (!(arg[0] >= '0' && arg[0] <= '9'))
			generate_print(static_cast<char>(arg[0]));
		else
			generate_print(static_cast<int>(atoi(arg.c_str())));
	}
	else if (arg.find('.') != i)
	{
		i = arg.find('.') + 1;
		while (arg[i] && arg[i] >= '0' && arg[i] <= '9')
		{
			_precision++;
			i++;
		}
		if (_precision > 1)
			_precision--;
		if (arg[arg.length() - 1] == 'f')
			generate_print(static_cast<float>(atof(arg.c_str())));
		else
			generate_print(static_cast<double>(atof(arg.c_str())));
	}
	else if (arg == std::string("nan") || arg == std::string("+inf") || arg == std::string("-inf"))
		generate_print(static_cast<double>(atof(arg.c_str())));
	else if (arg == std::string("nanf") || arg == std::string("+inff") || arg == std::string("-inff"))
		generate_print(static_cast<float>(atof(arg.c_str())));	
	else
		generate_print(static_cast<int>(atoi(arg.c_str())));
}

void	Convert::print_char(char const &tmp) const
{
	std::cout << "char: ";
	if (tmp < 32 || tmp > 126)
		std::cout << "Non displayable" << std::fixed << std::setprecision(_precision) << std::endl;
	else
		std::cout << tmp << std::fixed << std::setprecision(_precision) << std::endl;
}

void	Convert::print_char(std::string const &tmp) const
{
	std::cout << "char: " << tmp << std::endl;
}

void	Convert::print_int(std::string const &tmp) const
{
	std::cout << "int: " << tmp << std::endl;
}

void	Convert::print_int(int const &tmp) const
{
	std::cout << "int: " << tmp << std::fixed << std::setprecision(_precision) << std::endl;
}

void	Convert::print_float(float const &tmp) const
{
	std::cout << "float: " << tmp << "f" << std::fixed << std::setprecision(_precision) << std::endl;
}

void	Convert::print_double(double const &tmp) const
{
	std::cout << "double: " << tmp << std::fixed << std::setprecision(_precision) << std::endl;
}
