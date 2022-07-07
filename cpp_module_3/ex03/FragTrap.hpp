/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:27:32 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 19:19:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

public:
    FragTrap();
    FragTrap(std::string str);
    FragTrap(const FragTrap& s);
    FragTrap& operator=(const FragTrap& s);
    virtual ~FragTrap();
    void highFivesGuys(void);
};

#endif