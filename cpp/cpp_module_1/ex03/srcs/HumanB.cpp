/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:20:42 by user42            #+#    #+#             */
/*   Updated: 2022/01/25 13:45:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string str):name(str), weapon(NULL)
{
	std::cout << name << " is coming..." << std::endl;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &object)
{
	weapon = &object;
}