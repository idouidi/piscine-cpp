/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:22:49 by user42            #+#    #+#             */
/*   Updated: 2022/02/18 15:32:15 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure():AMateria()
{
   type = "cure";
   std::cout << "Default Cure constructor" << std::endl;
}

Cure::Cure(const Cure& c)
{
    *this = c;
    std::cout << "Copy Cure constructor" << std::endl;
}

Cure& Cure::operator=(const Cure& c)
{
    if (this != &c)
    {
        type = c.getType();
    }
    std::cout << "Assignation Cure constructor" << std::endl;
    return (*this);
}

Cure::~Cure()
{
     std::cout << "Cure Destructor" << std::endl;
}

AMateria* Cure::clone(void) const 
{
  return new Cure();
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds " << std::endl;
}
