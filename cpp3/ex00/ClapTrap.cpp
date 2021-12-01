#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ):Name("ClapTrap Default"), Hitpoints(10), Energy_points(10), Attack_damage(0){std::cout << "Default Constructor " << Name << " called !" << std::endl;}
ClapTrap::ClapTrap(std::string const &Name):Name(Name), Hitpoints(10), Energy_points(10), Attack_damage(0){std::cout << "ClapTrap Constructor " << Name << " called !" << std::endl;}
ClapTrap::ClapTrap(ClapTrap const &arg):Name(arg.Name), Hitpoints(arg.Hitpoints), Energy_points(arg.Energy_points), Attack_damage(arg.Attack_damage){std::cout << "ClapTrap Copy Constructor " << Name << " called !" << std::endl;}
ClapTrap::~ClapTrap( void ){std::cout << "ClapTrap Destructor " << Name << " called !" << std::endl;}
ClapTrap	&ClapTrap::operator=(ClapTrap const &arg)
{
	Name = arg.Name;
	Hitpoints = arg.Hitpoints;
	Energy_points = arg.Energy_points;
	Attack_damage = arg.Attack_damage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target) const{std::cout << "ClapTrap " << Name << " attack " << target << " !" << std::endl;}
void	ClapTrap::takeDamage(unsigned int amount){std::cout << "ClapTrap " << Name << " takes " << amount << " Damage !" << std::endl;Hitpoints -= amount;}
void	ClapTrap::beRepaired(unsigned int amount){std::cout << "ClapTrap " << Name << " is Repaired for " << amount << " HitPoint(s) !" << std::endl;Hitpoints += amount;}