/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:59:15 by user42            #+#    #+#             */
/*   Updated: 2022/01/21 18:53:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/smartphone.hpp"

int max_contact;

contact::contact()
{
	is_initialize = false;
}

void	IsCmd(std::string line, contact (&contact)[8])
{
	const	char *ref[3] = {"ADD", "SEARCH", "EXIT"};

	for(int i = 0; i < 3; i++)
	{
		if (!line.compare(ref[i]))
		{
			if (i == 0)
				AddCmd(contact);
			else if (i == 1)
				SearchCmd(contact);
			else
				exit(EXIT_SUCCESS);
			return ;
		}
	}
	std::cerr << "Command \"" << line <<"\" not found ..." << std::endl;
}


int	main()
{
	std::string	line;
	contact contact[8];

	max_contact = 0;
	std::cout << "~~~~	PHONE BOOK	~~~" << std::endl;
	while (1)
	{
		std::cout << "🔎 : ";
		if (getline(std::cin, line))
			IsCmd(line, contact);
		else
			no_cin();
	}
	return (0);
}