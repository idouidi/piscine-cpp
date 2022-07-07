/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:53:53 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 23:47:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "wrong cat";
	std::cout << "A wrong cat was constructed\n";
}

WrongCat::~WrongCat()
{
	std::cout << "A wrong cat was destroyed\n";
}

WrongCat::WrongCat(WrongCat& c)
{
	*this = c;
	std::cout << "A wrong cat was constructed from copy\n";
}

WrongCat& WrongCat::operator=(const WrongCat& c)
{
    if (this != &c)
	    type = c.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow meow\n";
}