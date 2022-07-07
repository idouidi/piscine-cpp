/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:27:49 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 23:23:28 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

static int nbDog = 0;

Dog::Dog():AAnimal()
{
    type = "Dog";
    _brain = new Brain();
    *_brain->getIdeas() = gen_random(100);
    nbDog += 1;
    std::cout << "(Default Dog Constructor) Im the " << nbDog << " Dog created and "
        "this is my idea " << *_brain->getIdeas() << std::endl;
    
}

Dog::Dog(const Dog& a):AAnimal()
{
        type = a.type;
        _brain = new Brain(*(a._brain));
        nbDog += 1;
        std::cout << "(Copy Dog Constructor) Im the " << nbDog << " Dog created and "
         "this is my idea " << *_brain->getIdeas() << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
    if (this != &a)
    {
        type = a.type;
        *_brain = *a._brain;
        std::cout << "(Assignation Copy Dog Constructor) Im the " << nbDog << " Dog created and "
         "this is my idea " << *_brain->getIdeas() << std::endl;
    }
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog is Destroyed" << std::endl;
    std::cout << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woaf woaf" << std::endl;
}

Brain* Dog::getBrain() const
{
    if (_brain)
        return (_brain);
    return (NULL);
}