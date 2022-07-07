/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:35:05 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 14:35:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    std::cout << "int:" << std::endl;
    tryType<int>(6);
    std::cout << "-     -       -       -       -       -" << std::endl;
    std::cout << "double :" << std::endl;
    tryType<double>(15);
    std::cout << "-     -       -       -       -       -" << std::endl;
    std::cout << "char :" << std::endl;
    tryType<char>(5);
    std::cout << "-     -       -       -       -       -" << std::endl;
    std::cout << "string :" << std::endl;
    Array<std::string> A(4);
    A[0] = "First";
	A[1] = "Second";
	A[2] = "Third";
	A[3] = "Fourth";
    for (int i = 0; i < 4; i++)
    {
        std::cout << A.getArrayIndex(i) << " | ";
    }
    std::cout << std::endl;
    try
    {
        A[5] = "out of bonds";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    system("leaks ex02");
}