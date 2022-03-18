/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:02:36 by user42            #+#    #+#             */
/*   Updated: 2022/02/07 11:10:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter():name("none")
{
    std::cout << "Default constructor ICharacter" << std::endl;
}

ICharacter::ICharacter(const ICharacter& a)
{
    *this = a;
    std::cout << "Copy constructor ICharacter" << std::endl;
}

ICharacter& ICharacter::operator=(const ICharacter& a)
{
    if (this != &a)
        *this = a;
    std::cout << "Assignation constructor ICharacter" << std::endl;
    return (*this);
}

ICharacter::~ICharacter()
{
    std::cout << "Destructor ICharacter" << std::endl;
}