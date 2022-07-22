/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:05:50 by user42            #+#    #+#             */
/*   Updated: 2022/07/22 23:26:16 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{    
    std::cout << "BASIC     TEST    AND     SUBJECT     TEST" << std::endl;
    try
    {
        Span spn(5);
        spn.addNumber(6);
        spn.addNumber(3);
        spn.addNumber(17);
        spn.addNumber(9);
        spn.addNumber(11);
        std::cout << spn;
        std::cout << "the shortest span is: " << spn.shortestSpan()
            << "\nthe longest span is: " << spn.longestSpan() << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    std::cout << std::endl;
    try
    {
        Span spn(6);
        spn.addNumber(25);
        spn.addNumber(66);
        spn.addNumber(42);
        spn.addNumber(-1);
        spn.addNumber(45);
        spn.addNumber(789);
        std::cout << spn;
        std::cout << "the shortest span is: " << spn.shortestSpan()
        << "\nthe longest span is: " << spn.longestSpan() << std::endl;
        std::cout << std::endl;
        std::cout << "TRY TO ADD A NUMBER BEYOND THE SIZE OF THE VECTOR :" << std::endl;
        spn.addNumber(5);
    }
    catch(const std::exception& e)
    {
        std::cerr << ">> " <<  e.what() << " <<" << '\n';
    }


    std::cout << std::endl;
    std::cout << "TRY   WITH    RANDOM      10.000      NUMBERS" << std::endl;
    std::srand(time(0));
    try
    {
        Span s(10000);
        for(int i = 0; i < 10000; i++)
            s.addNumber(rand() / (RAND_MAX / (10000 - i) + 1));
        //std::cout << s << std::endl;
        std::cout << "the shortest span is: " << s.shortestSpan()
        << "\nthe longest span is: " << s.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << ">> " <<  e.what() << " <<" << '\n';
    }
    return (0);
}