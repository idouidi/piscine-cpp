/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:08:30 by user42            #+#    #+#             */
/*   Updated: 2022/01/25 13:37:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
# define __HUMANA_H__
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void		attack();
};



#endif