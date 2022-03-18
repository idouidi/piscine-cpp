/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:02:57 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 13:35:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "Creating the First Zombie..." << std::endl;
	{
		Zombie covid("Covid-19");
		covid.announce();
	}
    std::cout << std::endl;
	std::cout << "Creating the NEWZOMBIE "<< std::endl;
	{
		Zombie	*omicron = newZombie("Omicron");
		omicron->announce();
		delete omicron;
	}
    std::cout << std::endl;
	{
		std::cout << "OMG A THRID ZOMBIE !?"<< std::endl;
		randomChump("DELTACRON");
	}
    return (0);
}