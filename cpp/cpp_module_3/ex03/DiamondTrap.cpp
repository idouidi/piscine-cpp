/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:58:30 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 20:51:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str):ClapTrap(str + "_clap_name"), FragTrap(str + "_clap_name"), ScavTrap(str + "_clap_name")
{
    hitPoint = FragTrap::hitPoint;
	attackDamage = FragTrap:: attackDamage;
	energyPoint = ScavTrap:: energyPoint;
    name = str;
    std:: cout << "(DiamondTrap: Constructor with string argument DAUGHTER CLASS)\n- " << name << " is coming...." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std:: cout << "(DiamondTrap: Destructor DAUGHTER CLASS) " << getName() << " is leaving...." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& s)
{
    *this = s;
    std:: cout << "(DiamondTrap: Copy Constructor DAUGHTER CLASS)\n- " << s.getName() << " is coming...." << std::endl;
}

DiamondTrap&  DiamondTrap::operator=(const DiamondTrap& s)
{
    if (this != &s)
    {
        name = s.name;
        hitPoint = s.hitPoint;
        energyPoint = s.energyPoint;
        attackDamage = s.attackDamage;
    }
    std:: cout << "(DiamondTrap: Assigantion overload Constructor DAUGHTER CLASS)\n- " << name << " is coming...." << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI(void) const 
{
    std:: cout << "DiamondTrap name is " << name << "\nClapTrap name is " << ClapTrap::name << std::endl; 
}

std::string DiamondTrap::getName() const
{
    return this->name;
}

std::ostream& operator<<(std::ostream& flux, const DiamondTrap& c)
{
	return flux << "## Name: " << c.getName() << " | Hit point: " << c.getHitPoint() 
		<<" | Energy point: " << c.getEnergyPoint() << " | AttackDamage: " <<  c.getAttackDamage() << " ##"<< std::endl;
}