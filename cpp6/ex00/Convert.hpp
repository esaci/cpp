#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>

class Convert
{
	private:
		size_t		_precision;
		std::string	_value;
		Convert &operator=(Convert const &);
		Convert( void ){}
	public:
		Convert(std::string const &);
		virtual ~Convert(){};
		void	generate_print(char const &) const;
		void	generate_print(int const &) const;
		void	generate_print(float const &) const;
		void	generate_print(double const &) const;
		void	print_char(char const &) const;
		void	print_char(std::string const &) const;
		void	print_int(int const &) const;
		void	print_int(std::string const &) const;
		void	print_float(float const &) const;
		void	print_double(double const &) const;
};

# endif