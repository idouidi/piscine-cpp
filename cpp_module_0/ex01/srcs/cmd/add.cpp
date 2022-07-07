/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:21:49 by user42            #+#    #+#             */
/*   Updated: 2022/05/31 12:53:10 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/smartphone.hpp"

void	SetContact(contact (&contact)[8], int i)
{
	contact[i].SetNames();
	contact[i].SetPhoneNumber();
	contact[i].SetDarkestSecret();
	contact[i].ContactInitialized();
}

void	ReplaceContact(contact (&contact)[8])
{
	std::string  choice;
	int		index;

	while (1)
	{
		std::cout << "You have reach the maximum number of contacts that can be registered.\nDo you want to replace a contact ? [y/n] ";
		if (!getline(std::cin, choice))
			no_cin();
		if (!choice.compare("y"))
		{
			SetContact(contact, 0);
			return ;	
		}
		else if (!choice.compare("n"))
			return ;
	}

}
void	AddCmd(contact (&contact)[8])
{
   	if (max_contact == 4)
		ReplaceContact(contact);
	else
	{
		max_contact += 1;
		for (int i = 0; i < 8; i++)
		{
			if (!contact[i].IsContactInitialized())
			{
				SetContact(contact, i);
				return ;
			}
		}
	}
}