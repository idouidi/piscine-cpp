/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:27:49 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 22:11:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal()
{
    type = "Dog";
}

Dog::Dog(const Dog& a)
{
    *this = a;
}

Dog& Dog::operator=(const Dog& a)
{
    if (this != &a)
    {
        type = a.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << type << " is sleeping" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woaf woaf" << std::endl;
}