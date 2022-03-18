/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:56:06 by user42            #+#    #+#             */
/*   Updated: 2022/02/01 17:48:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "chrono"

void 	ft_fight(ClapTrap& f1, ClapTrap& f2)
{
	f1.setAttackDamage(2);
	f2.setAttackDamage(2);
	int _rand = 0;
	while (f1.getHitPoint() && f2.getHitPoint())
	{
		_rand = std::rand() % 5;
		switch (_rand)
		{
			case 0:
				f1.attack(f2.getName());
				f2.takeDamage(f1.getAttackDamage());
				break;
			case 1:
				f2.attack(f1.getName());
				f1.takeDamage(f2.getAttackDamage());
				break;
			case 2:
				f1.beRepaired(1);
				break;
			case 3:
				f2.beRepaired(1);
				break;
			case 4:
				f1.takeBreak(1);
				break;
			case 5:
				f2.takeBreak(1);
				break;
		}
	}
	std::cout << std::endl;
}

int main()
{
	ClapTrap _clapTrap;
	std::cout << _clapTrap << std::endl;
	
	ClapTrap MikeTyson("Mike tyson");
	std::cout << MikeTyson << std::endl;
	
	ClapTrap MohamedAli("Mohamed Ali");
	std::cout << MohamedAli << std::endl;
	
	ClapTrap LoganPaul= _clapTrap;
	std::cout << LoganPaul << std::endl;

	LoganPaul = MikeTyson;
	std::cout << LoganPaul << std::endl;
	LoganPaul.setName("Logan Paul");

	std::cout << "	~~~~ FIRST FIGHT ~~~~  \n" << std::endl;
	
	ft_fight(LoganPaul, _clapTrap);
	std::cout << LoganPaul << std::endl;
	std::cout << _clapTrap << std::endl;

	std::cout << "	~~~~ SECOND FIGHT ~~~~  \n" << std::endl;
	ft_fight(MikeTyson, MohamedAli);
	std::cout << MohamedAli << std::endl;
	std::cout << MikeTyson << std::endl;
	return (0);
}