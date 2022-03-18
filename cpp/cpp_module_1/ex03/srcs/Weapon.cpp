/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:57:19 by user42            #+#    #+#             */
/*   Updated: 2022/01/25 13:06:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

void    Weapon::setType(std::string str)
{
    type = str;
}

const std::string& Weapon::getType()
{
    return ((const std::string&)type);
}

//default constructor
Weapon::Weapon()
{
}

//Custom constructor
Weapon::Weapon(std::string str)
{
    setType(str);
}

//Destructor
Weapon::~Weapon()
{
}

