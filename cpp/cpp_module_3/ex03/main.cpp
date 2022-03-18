/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:56:06 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 20:48:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "	~~~	CONSTRUCTOR	~~~" << std::endl;
	std::cout << std::endl;
	ClapTrap Roger("Gold D.Roger");
	std::cout << std::endl;
	std::cout << Roger << std::endl;
	
	std::cout << "		=	=	=	=" << std::endl;
	
	std::cout << std::endl;
	FragTrap Ace("Ace");
	std::cout << std::endl;
	std::cout << Ace << std::endl;

	std::cout << "		=	=	=	=" << std::endl;

	std::cout << std::endl;
	ScavTrap Sabo("Sabo");
	std::cout << std::endl;
	std::cout << Sabo << std::endl;

	std::cout << "		=	=	=	=" << std::endl;

	std::cout << std::endl;
	DiamondTrap luffy("luffy");
	std::cout << std::endl;
	std::cout << luffy << std::endl;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "	~~~	FIGHT	~~~" << std::endl;
	std::cout << Sabo << std::endl;
	luffy.attack(Sabo);
	std::cout << std::endl;
	std::cout << Sabo << std::endl;
	std::cout << std::endl;

	std::cout << "	~~~	NAME	~~~" << std::endl;
	std::cout << std::endl;
	luffy.whoAmI();
	std::cout << std::endl;

	std::cout << "	~~~	DESTRUCTOR	~~~" << std::endl;
	return (0);
}