#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA(void)
{
	;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType()
			  << std::endl;
}