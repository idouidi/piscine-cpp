/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:37:34 by user42            #+#    #+#             */
/*   Updated: 2022/02/14 16:58:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "none";
    std::cout << "Default constructor AMateria" << std::endl;
}

AMateria::AMateria(std::string const& str)
{
    type = str;
    std::cout << "Constructor with argument AMateria" << std::endl;
}

AMateria::AMateria(const AMateria& a)
{
    type = a.type;
    std::cout << "Copy constructor AMateria" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& a)
{
    if (this != &a)
         type = a.getType();
    std::cout << "Assignation constructor AMateria" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Destructor AMateria" << std::endl;
}

std::string const& AMateria::getType(void) const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
}
