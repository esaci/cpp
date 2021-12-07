#include "Brain.hpp"

Brain::Brain( void ){std::cout << "Brain Default Constructor" << std::endl;}
Brain::Brain(Brain const &arg){*this = arg;std::cout << "Brain Copy Constructor" << std::endl;}
Brain::~Brain( void ){std::cout << "Brain Destructor" << std::endl;}
Brain &Brain::operator=(Brain const &arg)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = arg.ideas[i];
	return (*this);
}

void	Brain::setIdeas(std::string const &li)
{
	int	i;
	for (i = 0; i < 100; i++)
	{
		if (ideas[i] == "")
		{
			ideas[i] = std::string(li);
			break;
		}
	}
	if (i == 100)
		std::cout << "Cant add idea to brain, its full..." << std::endl;
}

void	Brain::showIdeas( void )
{
	for(int i = 0; i < 100; i++)
	{
		if (ideas[i] == "")
			break;
		std::cout << "Idea number: " << i << " is " << ideas[i] << std::endl;
	}
}