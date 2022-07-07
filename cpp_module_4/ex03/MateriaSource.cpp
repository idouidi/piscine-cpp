/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:08:42 by user42            #+#    #+#             */
/*   Updated: 2022/02/14 17:00:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        inventory[i] = nullptr;
    std::cout << "Default constructor Materia" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
        if (m.inventory[i])
            inventory[i] = m.inventory[i]->clone();
    }
    std::cout << "Copy constructor Materia" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& m)
{
    if (this != &m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i])
                delete inventory[i];
            if (m.inventory[i])
                inventory[i] = m.inventory[i]->clone();
        }      
    }
    std::cout << "Assignation constructor Materia" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete inventory[i];
    std::cout << "Destructor AMateria" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    if (!m)
        return ;
    while (inventory[i] && i < 4)
        i++;
    if (i >= 4)
    {
        std::cout << "Inventory is full ! Can't learn more..." << std::endl;
        return ;
    }
    else
        inventory[i] = m;
    std::cout << m->getType() << " learned !" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (inventory[i] && i < 4)
    {
        if (inventory[i]->getType() == type)
        {
            std::cout << type << " : was created!" << std::endl;
            return (inventory[i]->clone());
        }
        i++;
    }
    std::cout << "Materia does not exist..." << std::endl;
    return (NULL);
}