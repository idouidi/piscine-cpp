/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:34:54 by user42            #+#    #+#             */
/*   Updated: 2022/01/25 12:49:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <iostream>

class Weapon
{
private:
	std::string 		type;
public:
	Weapon();
	Weapon(std::string str);
	~Weapon();
	void				setType(std::string type);
	const std::string&	getType();

};

#endif