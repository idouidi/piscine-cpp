/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:27:49 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 16:41:07 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal()
{
    type = "Dog";
}

Dog::Dog(const Dog& a): Animal()
{
    if (this != &a)
        *this = a;
}

Dog& Dog::operator=(const Dog& a)
{
    if (this != &a)
        type = a.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << type << " was destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woaf woaf" << std::endl;
}