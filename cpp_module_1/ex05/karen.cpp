/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:43:05 by user42            #+#    #+#             */
/*   Updated: 2022/01/26 21:59:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

Karen::Karen()
{
	std::cout << "A wild karen is coming..." << std::endl;
}

Karen::~Karen()
{
	std::cout << "A karen is leaving, calling the police..." << std::endl;
}

void	Karen::debug()
{
	std::cout << "# DEBUG # I love having extra bacon for my\
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << " == == ==" << std::endl;
}

void	Karen::info()
{
	std::cout << "# INFO # I cannot believe adding extra bacon costs more money.\
You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << " == == ==" << std::endl;
}

void	Karen::warning()
{
	std::cout << "# WARNING # I think I deserve to have some extra bacon for free.\
 I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << " == == ==" << std::endl;
}

void	Karen::error()
{
	std::cout << "# ERROR # This is unacceptable! I want to speak to the manager now" << std::endl;
	std::cout << " == == ==" << std::endl;
}

void	Karen::complain(std::string level)
{
	void (Karen::*tab[4])(void)= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string trigger[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!trigger[i].compare(level))
		{
			(this->*(tab[i]))();
			break ;
		}
	}
}