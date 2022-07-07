/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:56:06 by user42            #+#    #+#             */
/*   Updated: 2022/02/02 00:02:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap bot;
	ScavTrap R2d2("R2-d2");

	std::cout << "\n	~~~~ FIGHT ~~~~  \n" << std::endl;
	
	bot.attack(R2d2);
	R2d2.guardGate();
	bot.attack(R2d2);
	R2d2.disabledGuardgate();
	bot.attack(R2d2);
	return (0);
}