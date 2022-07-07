/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:20:10 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 15:33:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[n];
	for(int i = 0; i < n; i++)
		horde[i].setName(name);
	return (horde);
}