/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:03:07 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 23:29:10 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal():type("AAnimal")
{
    std::cout << "(Default AAnimal Constructor)" << std::endl;
}

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
    std::cout << "AAnimal is Destroyed" << std::endl;
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
    std::srand(time(NULL));
    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[std::rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}