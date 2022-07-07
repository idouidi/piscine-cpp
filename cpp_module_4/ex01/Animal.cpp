/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:18:15 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 21:02:35 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal")
{
    std::cout << "(Default Animal Constructor)" << std::endl;
}

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
    std::cout << "Animal is Destroyed" << std::endl;
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
    std::srand(time(NULL));
    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[std::rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}