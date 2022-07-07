/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:17:15 by user42            #+#    #+#             */
/*   Updated: 2022/01/26 23:15:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main (int ac, char *av[])
{
	Karen _karen;
	if (ac == 2 && av[1][0])
		_karen.complain(av[1]);
	else
	{
		std::cerr << "Error\nUsage: ./karen [LEVEL]" << std::endl;
		return (1);
	}
	return (0);
}