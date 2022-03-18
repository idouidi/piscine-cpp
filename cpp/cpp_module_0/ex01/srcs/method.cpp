/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:49:09 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 11:34:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/smartphone.hpp"

bool    contact::IsContactInitialized()
{
	if (this->is_initialize == false)
		return (0);
	else
		return (1);
}

void	contact::ContactInitialized()
{
	this->is_initialize = true;
}

void    contact::SetNames()
{
	std::string tmp;
	while(1)
	{
		std::cout << "enter the first name: ";
		if (!getline(std::cin, tmp))
			no_cin();
		if (GoodFormatNames(tmp))
		{
			this->first_name = tmp;
			break;
		}
		else
			std::cerr << "The name it's not right formated" << std::endl;
	}
	while(1)
	{
		std::cout << "enter the last name: ";
		if(!getline(std::cin, tmp))
			no_cin();
		if (GoodFormatNames(tmp))
		{
			this->last_name = tmp;
			break;
		}
		else
			std::cerr << "The name it's not right formated" << std::endl;
	}
	std::cout << "enter the nickname: ";
	if(!getline(std::cin, tmp))
		no_cin();
	this->nickname = tmp;
}

void	contact::SetPhoneNumber()
{
	std::string tmp;

	while (1)
	{
		std::cout << "enter the phone number: ";
		if (!getline(std::cin, tmp))
			no_cin();
		if (GoodFormatNumber(tmp))
		{
			this->phone_number = tmp;
			break;
		}
		else
			std::cerr << "The phone number it's not right formated" << std::endl;
	}
}

void	contact::SetDarkestSecret()
{
	std::string tmp;

	while (1)
	{
		std::cout << "Do you want to add a dark secret for this contact? [y/n] ";
		if (!getline(std::cin, tmp))
			no_cin();
		if (!tmp.compare("y"))
		{
			std::cout << "enter the Darkest secret: ";
			if (!getline(std::cin, tmp))
				no_cin();
			if (!tmp.compare(""))
				tmp = "(none)";
			this->darkest_secret = tmp;
			break;
		}
		else if (!tmp.compare("n"))
		{
			this->darkest_secret = "(none)";
			break ;
		}
	}
}

void	contact::GetFormatContact()
{
	SetFormat(this->first_name);
	SetFormat(this->last_name);
	SetFormat(this->nickname);
	SetFormat(this->phone_number);
	SetFormat(this->darkest_secret);
}

void	contact::GetFirstName()
{
	std::cout << this->first_name << std::endl;
}

void	contact::GetLastName()
{
	std::cout << this->last_name << std::endl;
}

void	contact::GetNickname()
{
	std::cout << this->nickname << std::endl;
}

void    contact::GetPhoneNumber()
{
	std::cout << this->phone_number << std::endl;
}

void	contact::GetDarkestSecret()
{
	std::cout << this->darkest_secret << std::endl;
}
