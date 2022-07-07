/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:05:50 by user42            #+#    #+#             */
/*   Updated: 2022/03/16 12:25:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

    
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
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << std::endl;
        std::cout << "subject test: " <<std::endl;
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp;
        std::cout << "the shortest span is: " << sp.shortestSpan()
            << "\nthe longest span is: " << sp.longestSpan() << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}