/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:27:32 by user42            #+#    #+#             */
/*   Updated: 2022/02/02 00:35:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
protected:

public:
    FragTrap();
    FragTrap(std::string str);
    FragTrap(const FragTrap& s);
    FragTrap& operator=(const FragTrap& s);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif