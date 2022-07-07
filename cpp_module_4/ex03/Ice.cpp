/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:28:50 by user42            #+#    #+#             */
/*   Updated: 2022/02/10 12:30:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice():AMateria()
{
   type = "ice";
   std::cout << "Default Ice constructor" << std::endl;
}

Ice::Ice(const Ice& c)
{
    *this = c;
    std::cout << "Copy Ice constructor" << std::endl;
}

Ice& Ice::operator=(const Ice& c)
{
    if (this != &c)
    {
        type = c.getType();
    }
    std::cout << "Assignation Ice constructor" << std::endl;
    return (*this);
}

Ice::~Ice()
{
     std::cout << "Ice Destructor" << std::endl;
}

AMateria* Ice::clone(void) const 
{
  return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}