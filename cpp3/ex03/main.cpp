#include "DiamondTrap.hpp"

int main ( void )
{
/* 	{
		std::string namelias("elias");
		std::string bat("batman");
		ClapTrap elias(namelias);
		ClapTrap elias2(elias);
		ClapTrap elias3(bat);
		ClapTrap Def;
		ClapTrap Cop;
		Cop = elias3;
		ClapTrap tab[] = {elias, elias2, Def, Cop};
		size_t	i;
		if (!sizeof(ClapTrap))
			return (0);
		for (i = 0; i < sizeof(tab)/sizeof(ClapTrap); i++)
		{
			tab[i].attack(bat);
			tab[i].beRepaired(i);
			tab[i].takeDamage(i);
		}
	} */
/* {
		std::string namelias("elias");
		std::string bat("batman");
		ScavTrap elias(namelias);
		ScavTrap elias2(elias);
		ScavTrap elias3(bat);
		ScavTrap Def;
		ScavTrap Cop;
		Cop = elias3;
		ScavTrap tab[] = {elias, elias2, Def, Cop};
		size_t	i;
		if (!sizeof(ScavTrap))
			return (0);
		for (i = 0; i < sizeof(tab)/sizeof(ScavTrap); i++)
		{
			tab[i].attack(bat);
			tab[i].beRepaired(i);
			tab[i].takeDamage(i);
		}
	} */
/* {
		std::string namelias("elias");
		std::string bat("batman");
		FragTrap elias(namelias);
		FragTrap elias2(elias);
		FragTrap elias3(bat);
		FragTrap Def;
		FragTrap Cop;
		Cop = elias3;
		FragTrap tab[] = {elias, elias2, Def, Cop};
		size_t	i;
		if (!sizeof(FragTrap))
			return (0);
		for (i = 0; i < sizeof(tab)/sizeof(FragTrap); i++)
		{
			tab[i].attack(bat);
			tab[i].beRepaired(i);
			tab[i].takeDamage(i);
		}
	} */
	{
		std::string namelias("elias");
		std::string bat("batman");
		DiamondTrap elias(namelias);
		DiamondTrap elias2(elias);
		DiamondTrap elias3(bat);
		DiamondTrap Def;
		DiamondTrap Cop;
		Cop = elias3;
		DiamondTrap tab[] = {elias, elias2, Def, Cop};
		size_t	i;
		if (!sizeof(DiamondTrap))
			return (0);
		for (i = 0; i < sizeof(tab)/sizeof(DiamondTrap); i++)
		{
			tab[i].attack(bat);
			tab[i].beRepaired(i);
			tab[i].takeDamage(i);
			tab[i].guardGate();
			tab[i].highFivesGuys();
			std::cout << "Name of this DiamondTrap is " << tab[i].getName() << " and his ClapTrap name is " << tab[i].getClapTrapName() << std::endl; 
		}	
	}
	return (0);
}
