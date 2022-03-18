/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:38:09 by user42            #+#    #+#             */
/*   Updated: 2022/02/01 23:10:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__ 
# define __CLAPTRAP_H__

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    size_t hitPoint; 
    size_t energyPoint;    
    size_t attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string str);
    ClapTrap(const ClapTrap& c);
    ClapTrap& operator=(const ClapTrap& c);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void takeBreak(unsigned int amount);

    std::string getName(void) const;
    size_t getHitPoint(void) const;
    size_t getEnergyPoint(void) const;
    size_t getAttackDamage(void) const;

    void setName(std::string str);
    void setHitPoint(size_t hp);
    void setEnergyPoint(size_t ep);
    void setAttackDamage(size_t ad);
};

std::ostream& operator<<(std::ostream& flux, const ClapTrap& c);




#endif