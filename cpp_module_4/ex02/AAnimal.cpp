/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:03:07 by user42            #+#    #+#             */
/*   Updated: 2022/02/05 14:04:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal():type("Human")
{}

AAnimal::AAnimal(const AAnimal& a)
{
    *this = a;
}

AAnimal& AAnimal::operator=(const AAnimal& a)
{
    if (this != &a)
    {
        type = a.type;
    }
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "(AANIMAL CLASS): " << " is sleeping" << std::endl;
}

void AAnimal::setType(std::string str)
{
    type = str;
}

std::string AAnimal::getType() const
{
    return type;
}

void AAnimal::makeSound() const
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