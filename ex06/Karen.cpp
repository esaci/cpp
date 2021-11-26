#include "Karen.hpp"

Karen::Karen( void ){}
Karen::~Karen( void ){}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my \
	7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra \
	bacon cost more money. You don’t put enough! If you did I would not have to ask \
	for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	int	i;
	std::string	ptr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	( Karen::*f[4])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	for(i=0; i < 4; i++)
	{
		if (ptr[i] == level)
		{
			(this->*f[i])();
			break;
		}
	}
	if (i == 4)
		std::cout << "ERROR: NO FUNCTION ASSOCIATED" << std::endl;
}

void	Karen::filter(std::string msg)
{
	int	i;
	std::string	ptr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	( Karen::*f[4])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	for(i=0; i < 4; i++)
	{
		if (ptr[i] == msg)
			break;
	}
	switch (i)
	{
	case	0:
		std::cout << "[ " << ptr[0] << " ]" << std::endl;
		(this->*f[0])();
	case	1:
		std::cout << "[ " << ptr[1] << " ]" << std::endl;
		(this->*f[1])();
	case	2:
		std::cout << "[ " << ptr[2] << " ]" << std::endl;
		(this->*f[2])();
	case	3:
		std::cout << "[ " << ptr[3] << " ]" << std::endl;
		(this->*f[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}