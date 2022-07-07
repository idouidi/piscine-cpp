/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:25:49 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 16:41:37 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
    type = "Cat";
}


Cat::Cat(const Cat& a):Animal()
{
    if (this != &a)
        *this = a;
}

Cat& Cat::operator=(const Cat& a)
{
    if (this != &a)
        type = a.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << type << " was destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}