/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:53:53 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 16:44:04 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
	type = "wrong cat";
	std::cout << "WrongCat was constructed\n";
}


WrongCat::WrongCat(WrongCat& c):WrongAnimal()
{
	*this = c;
	std::cout << "WrongCat was constructed from copy\n";
}

WrongCat& WrongCat::operator=(const WrongCat& c)
{
    if (this != &c)
	    type = c.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat was destroyed\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow meow\n";
}