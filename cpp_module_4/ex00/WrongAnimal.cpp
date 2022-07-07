/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:02:22 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 15:44:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "animal";
	std::cout << "WrongAnimal was constructed\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal was destroyed (WrongAnimal Class)\n";
}

WrongAnimal::WrongAnimal(WrongAnimal& wa)
{
	if (this != &wa)
	*this = wa;
	std::cout << "Wrong Animal was constructed from a copy\n";
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& wa)
{
    if (this != &wa)
		type = wa.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal\n";
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}