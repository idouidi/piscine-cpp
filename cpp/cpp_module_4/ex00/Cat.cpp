/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:25:49 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 22:20:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
    type = "Cat";
}


Cat::Cat(const Cat& a)
{
    *this = a;
}

Cat& Cat::operator=(const Cat& a)
{
    if (this != &a)
    {
        type = a.type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << type << " is sleeping" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}