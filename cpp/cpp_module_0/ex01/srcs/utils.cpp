/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:20:38 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 11:33:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/smartphone.hpp"

int	GoodFormatNames(std:: string name)
{
	if (name.length() < 2)
		return (0);
	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] == '-' || name[i] == ' ')
			if (!name[i + 2] || i <= 1 || i >= name.length() - 1 || !std::isalpha(name[i + 1]))
				return (0);
		else if (!std::isalpha(name[i]))
			return (0);
	}
	return (1);
}

int	GoodFormatNumber(std:: string number)
{
	if (number.length() < 2 || number.length() > 15)
		return (0);
	for (int i = 0; i < number.length(); i++)
		if (!std::isdigit(number[i]))
			return(0);
	return (1);
}

void	SetFormat(std:: string str)
{
	std::string tmp;

	if (str.length() > 10)
	{
		tmp = str.substr(0, 9);
		std::cout << tmp << ".";	
	}
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

int	DisplayPhoneBook(contact (&contact)[8])
{
	std::string tmp;
	std::array<std::string, 6> ref = {"Index", "First name", "Last name", "nickname", "phone number", "dark secret"};
	
	if (!contact[0].IsContactInitialized())
		return (0);
	for(int i = 0; i < 6; i++)
	{
		if (ref[i].length() > 10)
		{
			tmp = ref[i].substr(0, 9);
			std::cout << tmp << ".";
		}
		else
			std::cout << std::setw(10) << ref[i];
		std::cout << "|";
	}
	std::cout << std::endl;
	for (int i = 0; contact[i].IsContactInitialized(); i++)
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		contact[i].GetFormatContact();
		std::cout << std::endl;
	}
	return (1);
}

void	no_cin()
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << std::endl;
	exit(EXIT_FAILURE);
}