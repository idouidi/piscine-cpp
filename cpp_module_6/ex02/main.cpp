/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:52:27 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/16 02:33:40 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::srand(time(NULL));
    Base* base = generate();

    std::cout << std::endl;
    std::cout << "Identify pointer: ";
    identify(base);
  
    std::cout << "Identify reference: ";
    identify(*base);
    std::cout << std::endl;
  
    delete base;
  return 0;
}

