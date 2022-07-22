/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:40:58 by user42            #+#    #+#             */
/*   Updated: 2022/07/21 17:27:22 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    
    std::list<int> lst;
    std::deque<int> dqe;
    std::vector<int> vtc;
    for (int i = 0; i < 10; i++)
    {
        lst.push_back(i * 2);
        dqe.push_back(i * 3);
        vtc.push_back(i * 4);

    }
    std::cout << "*   *   *   *   *   *   *   *   *   *   *\n" << std::endl;
    std::cout << "test for a list " << std::endl;
    test_container<std::list<int> >(lst);
    std::cout << "*   *   *   *   *   *   *   *   *   *   *\n" << std::endl;
    std::cout << std::endl;

    std::cout << "#   #   #   #   #   #   #   #   #   #   #\n" << std::endl;
    std::cout << "test for a  double-ended queue " << std::endl;
    test_container<std::deque<int> >(dqe);
    std::cout << "#   #   #   #   #   #   #   #   #   #   #\n" << std::endl;
    std::cout << std::endl;

    std::cout << "+   +   +   +   +   +   +   +   +   +   +\n" << std::endl;
    std::cout << "test for a vector " << std::endl;
    test_container<std::vector<int> >(vtc);
    std::cout << "+   +   +   +   +   +   +   +   +   +   +\n" << std::endl;
}
