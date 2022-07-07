/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:25:49 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 23:03:03 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

static int nbCat = 0;

Cat::Cat():AAnimal()
{
    type = "Cat";
    _brain = new Brain();
    *_brain->getIdeas() = gen_random(100);
    nbCat +=1;
    std::cout << "(Default Cat Constructor) Im the " << nbCat << " Cat created and " 
    "this is my idea " << *_brain->getIdeas() << std::endl;
}


Cat::Cat(const Cat& a):AAnimal()
{
   type = a.type;
   _brain = new Brain(*(a._brain));
   nbCat += 1;
    std::cout << "(Copy Cat Constructor) Im the " << nbCat << " created and "
    "this is my idea " << *_brain->getIdeas() << std::endl;
}

Cat& Cat::operator=(const Cat& a)
{
    if (this != &a)
    {
        type = a.type;
        *_brain = *a._brain;
        nbCat += 1;
        std::cout << "(Copy Cat Constructor) Im the " << nbCat << " created and "
        "this is my idea " << *_brain->getIdeas() << std::endl;
    }
    return (*this);
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat is destroyed" << std::endl;
    std::cout << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

Brain* Cat::getBrain() const
{
    if (_brain)
        return (_brain);
    return (NULL);
}
