/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:31:22 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 20:46:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    name = "Bot";
    _guard = 0;
    std:: cout << "(ScavTrap Default Constructor  DAUGHTER CLASS)\n- " << name << " is coming...." << std::endl;
}

ScavTrap::ScavTrap(std::string str):ClapTrap(str)
{
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    _guard = 0;
    std:: cout << "(ScavTrap: Constructor with string argument DAUGHTER CLASS)\n- " << str << " is coming...." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std:: cout << "(ScavTrap: Destructor DAUGHTER CLASS) " << getName() << " is leaving...." << std::endl;
    std::cout << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& s)
{
    *this = s;
    std:: cout << "(ScavTrap: Copy Constructor DAUGHTER CLASS)\n- " << s.getName() << " is coming...." << std::endl;
}

ScavTrap&  ScavTrap::operator=(const ScavTrap& s)
{
    if (this != &s)
    {
        name = s.name;
        hitPoint = s.hitPoint;
        energyPoint = s.energyPoint;
        attackDamage = s.attackDamage;
    }
    std:: cout << "(ScavTrap: Assigantion overload Constructor DAUGHTER CLASS)\n- " << name << " is coming...." << std::endl;
    return (*this);
}

void ScavTrap::guardGate(void)
{
    _guard = true;
    std::cout << "guard activated" << std::endl;
}

void ScavTrap::disabledGuardgate(void)
{
    _guard = false;
    std::cout << "guard disabled" << std::endl;
}

void ScavTrap::attack(ScavTrap &other)
{
	if (energyPoint)
	{
		energyPoint--;
        if (!other._guard)
        {
		    std::cout << "ScavpTrap " << "luffy" << " attacks " << other.name << ", causing " << attackDamage << " point of damage!" << std::endl;
            other.takeDamage(attackDamage);
        }
        else
            std::cout << other.name << " blocked " << name << " attack!" << std::endl;
	}
	else
		std::cout << name << " doesn't have enough energyPoint to attack ..." << std::endl;
}

