/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:26:18 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 15:36:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int		effectif;
	Zombie	*horde;

	effectif = 3;
	horde = zombieHorde(effectif, "Zombie");
	for (int i = 0; i < effectif; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}