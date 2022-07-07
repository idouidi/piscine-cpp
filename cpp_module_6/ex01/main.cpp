/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:31:30 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/05 02:35:46 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

int main ()
{
    t_data  d;

    std::cout << "Address of data is: " << &d << std::endl;
    std::cout << std::endl;
    d.nbr = 35;
    d._char = '#';
    d.ptr = &d;
    std::cout << d << std::endl;

    uintptr_t   s = serialize(&d);
    std::cout << "d in now serialize with s :" << &s << std::endl;
    std::cout << std::endl;
    
    t_data *dd = deserialize(s);
    std::cout << "d is now dd, address of dd is:  " << dd << std::endl;
    std::cout << std::endl;


}