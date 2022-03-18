/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:18:15 by user42            #+#    #+#             */
/*   Updated: 2022/02/04 15:02:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Human")
{}

Animal::Animal(const Animal& a)
{
    *this = a;
}

Animal& Animal::operator=(const Animal& a)
{
    if (this != &a)
    {
        type = a.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "(ANIMAL CLASS): " << " is sleeping" << std::endl;
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
    std::cout << "SIUUUU" << std::endl;
}

std::string gen_random(const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}