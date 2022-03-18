/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:25:49 by user42            #+#    #+#             */
/*   Updated: 2022/02/05 14:06:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():AAnimal()
{
    type = "Cat";
    _brain = new Brain();
    *_brain->getIdeas() = gen_random(100);
    std::cout << "(Default) Im the " << ++nbCat << " Cat created and " 
    "this is my idea " << *_brain->getIdeas() << std::endl;
}


Cat::Cat(const Cat& a)
{
   type = a.type;
   _brain = new Brain(*(a._brain));
   *_brain->getIdeas() = gen_random(100);
    std::cout << "(Copy) Im the " << ++nbCat << " created and "
    "this is my idea " << *_brain->getIdeas() << std::endl;
}

Cat& Cat::operator=(const Cat& a)
{
    if (this != &a)
    {
        type = a.type;
        _brain = new Brain(*(a._brain));
        *_brain->getIdeas() = gen_random(100);
    }
    return (*this);
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat is sleeping" << std::endl;
    std::cout << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}
