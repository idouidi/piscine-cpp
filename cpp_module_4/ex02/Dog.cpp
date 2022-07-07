/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:27:49 by user42            #+#    #+#             */
/*   Updated: 2022/02/05 14:06:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():AAnimal()
{
    type = "Dog";
    _brain = new Brain();
    *_brain->getIdeas() = gen_random(100);
    std::cout << "(Default) Im the " << ++nbDog << " Dog created and "
        "this is my idea " << *_brain->getIdeas() << std::endl;
    
}

Dog::Dog(const Dog& a)
{
    type = a.type;
    _brain = new Brain(*(a._brain));
    *_brain->getIdeas() = gen_random(100);
    std::cout << "(Copy) Im the " << ++nbDog << " Dog created and "
     "this is my idea " << *_brain->getIdeas() << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
    if (this != &a)
    {
        type = a.type;
       _brain = new Brain(*(a._brain));
       *_brain->getIdeas() = gen_random(100);
    }
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog is sleeping" << std::endl;
    std::cout << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woaf woaf" << std::endl;
}