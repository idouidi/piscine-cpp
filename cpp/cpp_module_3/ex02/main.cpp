/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:56:06 by user42            #+#    #+#             */
/*   Updated: 2022/02/02 00:39:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap bot;
	FragTrap CaptainAmerica("Captain America");

	std::cout << "\n	~~~~ FIGHT ~~~~  \n" << std::endl;
	
	CaptainAmerica.highFivesGuys();
	return (0);
}