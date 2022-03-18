/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:02:22 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 23:05:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "animal";
	std::cout << "Wrong Animal was constructed\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal was destroyed\n";
}

WrongAnimal::WrongAnimal(WrongAnimal& wa)
{
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
	std::cout << "... Wrong SIUUU ...\n";
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}