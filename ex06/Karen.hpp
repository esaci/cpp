#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
class Karen
{
	public:
		Karen( void );
		~Karen( void );
		void	complain( std::string level);
		void	filter(std::string msg);
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif