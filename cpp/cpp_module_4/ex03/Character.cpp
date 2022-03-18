/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:27:49 by user42            #+#    #+#             */
/*   Updated: 2022/02/18 15:37:03 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name):ICharacter()
{
    _name = name;
    for(int i = 0; i < 4; i++)
        inventory[i] = nullptr;
    std::cout << "A character named " << _name << " joined from the Default constructor" << std::endl;
}

Character::Character(const Character& c)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
        if (c.inventory[i])
            inventory[i] = c.inventory[i]->clone();
    }
    _name = c._name + "_copy";
    std::cout << "A character named " << _name << " joined from the Copy constructor" << std::endl;
}

Character& Character::operator=(const Character& c)
{
    if (this != &c)
    {
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i])
                delete inventory[i];
            if (c.inventory[i])
                inventory[i] = c.inventory[i]->clone();
        }
        _name = c._name + "_assignation";
        std::cout << "A character named " << _name << " joined from the Assignation constructor" << std::endl;
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete inventory[i];
    std::cout << "A character named " << _name << " was destroyed..." << std::endl;
}

std::string const& Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    int idx = 0;
    if (!m)
    {
        std::cout << _name << " can't equip that !" << std::endl;
        return ;
    }
    while (inventory[idx] && idx < 4)
        idx++;
    if (idx >= 4)
    {
        std::cout << _name << " can't equip more than 4 items" << std::endl;
        return ;
    }
    inventory[idx] = m;
    std::cout << _name << " equip item: " << m->getType() << " in slot " << idx << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        std::cout << _name << " tried to unequip an item from an forbiden slot !" << std::endl;
    else
    {
        AMateria *save = inventory[idx];
        std::cout << _name << "unequiped an item from the slot " << idx << std::endl;
        inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 4 || !inventory[idx])
    {
        std::cout << "tried to use an item from a forbiden slot" << std::endl;
        return ;
    }
    inventory[idx]->use(target);
}
