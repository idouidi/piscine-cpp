/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:43:54 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 19:37:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
protected:
    bool _guard;
public:
    ScavTrap();
    ScavTrap(std::string str);
    ScavTrap(const ScavTrap& s);
    ScavTrap& operator=(const ScavTrap& s);
    ~ScavTrap();
    void guardGate();
    void disabledGuardgate();
    void attack(ScavTrap &other);
};

#endif