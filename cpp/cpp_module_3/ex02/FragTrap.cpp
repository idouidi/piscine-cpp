/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:33:08 by user42            #+#    #+#             */
/*   Updated: 2022/02/02 00:43:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    name = "Bot";
    std:: cout << "(Default Constructor  DAUGHTER CLASS)\n- " << name << " is coming...." << std::endl;
}

FragTrap::FragTrap(std::string str):ClapTrap(str)
{
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    std:: cout << "(Constructor with string argument DAUGHTER CLASS)\n- " << str << " is coming...." << std::endl;
}

FragTrap::~FragTrap()
{
	std:: cout << "(Destructor DAUGHTER CLASS) " << getName() << " is leaving...." << std::endl;
}

FragTrap::FragTrap(const FragTrap& s)
{
    *this = s;
    std:: cout << "(Copy Constructor DAUGHTER CLASS)\n- " << s.getName() << " is coming...." << std::endl;
}

FragTrap&  FragTrap::operator=(const FragTrap& s)
{
    if (this != &s)
    {
        name = s.name;
        hitPoint = s.hitPoint;
        energyPoint = s.energyPoint;
        attackDamage = s.attackDamage;
    }
    std:: cout << "(Assigantion overload Constructor DAUGHTER CLASS)\n- " << name << " is coming...." << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "GIVE ME A HIGH FIVES!\n" << std::endl;
}

