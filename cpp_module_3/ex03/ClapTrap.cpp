/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:42:49 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 18:17:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ClapTrap::ClapTrap(std::string str):name(str), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std:: cout << "(ClapTrap: Constructor with string argument)\n- " << name << " is coming...." << std::endl;
}

ClapTrap::ClapTrap()
{
	 name = "BOT";
	 hitPoint = 10;
	 energyPoint = 10;
	 attackDamage = 0;
	std:: cout << "(ClapTrap: Default Constructor)\n- " << name << " is coming...." <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
	*this = c;
	std:: cout << "(ClapTrap:Copy Constructor)\n- " << name << " is coming...." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
	if (this != &c)
	{
		name = c.name;
		hitPoint = c.hitPoint;
		attackDamage = c.attackDamage;
		energyPoint = c.energyPoint;
	}
	std:: cout << "(ClapTrap: Assigantion overload Constructor)\n- " << name << " is coming...." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std:: cout << "(ClapTrap: Destructor) " << name << " is leaving...." << std::endl;
}


//GET
std::string ClapTrap::getName(void) const
{
	return (name);
}

size_t ClapTrap::getHitPoint(void) const
{
	return (hitPoint);
}

size_t ClapTrap::getEnergyPoint(void) const
{
	return (energyPoint);
}

size_t ClapTrap::getAttackDamage(void) const
{
	return (attackDamage);
}


//SET
void  ClapTrap::setName(std::string str)
{
	name = str;
}
void ClapTrap::setHitPoint(size_t hp)
{
	hitPoint = hp;
}

void ClapTrap::setEnergyPoint(size_t ep)
{
	energyPoint = ep;
}

void ClapTrap::setAttackDamage(size_t ad)
{
	attackDamage = ad;
}

//ACTION
void ClapTrap::attack(const std::string& target)
{
	if (energyPoint)
	{
		energyPoint--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
	}
	else
		std::cout << name << " doesn't have enough energyPoint to attack ..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoint -= amount;
	if (hitPoint < 0)
		hitPoint = 0;
	std::cout << "- ClapTrap " << name << " have lost " << amount << " hit point!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoint)
	{
		hitPoint += amount;
		if (hitPoint >= 10)
			hitPoint = 10;
		energyPoint--;
		std::cout << "ClapTrap " << name << " Healed " << amount << " hit point!" << std::endl;
	}
	else
		std::cout << name << " doesn't have enough energyPoint to heal himself..." << std::endl;
}

void ClapTrap::takeBreak(unsigned int amount)
{
	if (hitPoint)
	{
		energyPoint += amount;
		std::cout << name << " recovered " << amount << " point energy!" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& flux, const ClapTrap& c)
{
	return flux << "## Name: " << c.getName() << " | Hit point: " << c.getHitPoint() 
		<<" | Energy point: " << c.getEnergyPoint() << " | AttackDamage: " <<  c.getAttackDamage() << " ##"<< std::endl;
}