#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	{
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
	}
	return (0);
}
