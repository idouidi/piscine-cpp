/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:18:48 by user42            #+#    #+#             */
/*   Updated: 2022/01/25 13:42:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
# define __HUMANB_H__
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*weapon;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB();
	void		attack();
	void		setWeapon(Weapon &object);
};

#endif