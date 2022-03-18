/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:22:37 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 11:35:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/smartphone.hpp"

void	SearchCmd(contact (&contact)[8])
{
	int	index = -1;
	std::string  choice;

	if (!DisplayPhoneBook(contact))
	{
		std::cout << "No phone contact has been added.." << std::endl;
		return ;
	}
	while (1)
	{
		std:: cout << "Select the contact index you want to display: ";
		if (!getline(std::cin, choice))
			no_cin();
		index = atoi(choice.c_str());
		if (index >= 1 && index <= 8 && contact[index - 1].IsContactInitialized())
		{
			contact[index - 1].GetFirstName();
			contact[index - 1].GetLastName();
			contact[index - 1].GetNickname();
			contact[index - 1].GetPhoneNumber();
			contact[index - 1].GetDarkestSecret();
			return ;
		}
		std::cout << "The contact index does not exist...\n" << std::endl;
	}
}