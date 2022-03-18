/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:21:10 by user42            #+#    #+#             */
/*   Updated: 2022/01/26 23:18:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug()
{
	std::cout << "# DEBUG # I love having extra bacon for my\
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Karen::info()
{
	std::cout << "# INFO # I cannot believe adding extra bacon costs more money.\
You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "# WARNING # I think I deserve to have some extra bacon for free.\
 I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "# ERROR # This is unacceptable! I want to speak to the manager now" << std::endl;
}

void    Karen::filter()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::complain(std::string level)
{
	int i = 0;
	void (Karen::*tab[5])(void)= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::filter};
	std::string trigger[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i; i < 4; i++)
		if (!trigger[i].compare(level))
			break ;
	switch (i)
	{
		case 0:
			(this->*(tab[0]))();
			return ;
		case 1:
			(this->*(tab[1]))();
			return ;
		case 2:
			(this->*(tab[2]))();
			return;
		case 3:
			(this->*(tab[3]))();
			return;		
		case 4:
			(this->*(tab[4]))();
			return ;
	}
}