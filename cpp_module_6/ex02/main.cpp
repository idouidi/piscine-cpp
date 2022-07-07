/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:52:27 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/05 04:08:29 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    for (int i = 0 ; i < 3 ; ++i)
    {
        Base* base = generate();
        identify(base);
        identify(*base);
        std::cout << std::endl;
        delete base;
    }
  return 0;
}

