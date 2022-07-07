/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:31:21 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 20:30:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int tab_i[5] = { 42 , 84, 168, 336, 672};
    std::cout << "int : " << std::endl;
    iter<int>(tab_i, 5, printdata);

    std::cout << "double : " << std::endl;
    double tab_d[5] = { 42.0 , 84.1, 168.2, 336.3, 672.4};
    iter<double>(tab_d, 5, printdata);

    std::cout << "char : " << std::endl;
    char c[13] = { 'q', 'u', 'a', 'r', 'a', 'n', 't', 'e', '-', 'd', 'e', 'u', 'x'};
    iter(c, 13, printdata);

    std::cout << "string : " << std::endl;
    std::string s[3] = { "~~~", "42", "~~~" };
    iter(s, 3, printdata);

}

