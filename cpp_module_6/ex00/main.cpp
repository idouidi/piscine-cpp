/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:34:12 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/04 18:17:49 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
        std::cout << "Usage: program [ARG TO CONVERT]" << std::endl;
    else
    {
        Convert cvrt(av[1]);
        std::cout << cvrt;
    }
}