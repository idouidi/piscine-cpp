/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:49:03 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 19:26:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap , public FragTrap
{
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string str);
    DiamondTrap(const DiamondTrap& s);
    DiamondTrap& operator=(const DiamondTrap& s);
    virtual ~DiamondTrap();
	using ScavTrap::attack;

    std::string getName(void) const;
    void whoAmI() const ;
};

std::ostream& operator<<(std::ostream& flux, const DiamondTrap& d);
#endif