/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:18:15 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 15:51:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Human")
{}

Animal::Animal(const Animal& a)
{
    if (this != &a)
        *this = a;
}

Animal& Animal::operator=(const Animal& a)
{
    if (this != &a)
        type = a.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << type << " was destroyed (Animal Class)" << std::endl;
}

void Animal::setType(std::string str)
{
    type = str;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "HELLO WORLD" << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Animal& a)
{
  return o << "What's your type " << a.getType() << std::endl;

}