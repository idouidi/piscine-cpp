/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:54:58 by user42            #+#    #+#             */
/*   Updated: 2022/07/22 18:12:29 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <algorithm>
# include <deque>
# include <list>
# include <vector>
# include <stdexcept>
# include <string>

template <typename T>
int easyfind(T const& t, int n)
{
    typename T::const_iterator end = t.end();
    typename T::const_iterator it = std::find(t.begin(), t.end(), n);
    if (it == end)
        throw(std::out_of_range("- Not Found"));
    return (*it);
}


void	ft_displayInt(int i)
{
	std::cout << i << " |";
}

template <typename T>
void test_container(T const &t)
{
    std::for_each(t.begin(), t.end(), ft_displayInt);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "test to find the occurence [4]:" << std::endl;
    try
    {
        std::cout << "- Index " << easyfind(t, 4) <<  " exist in this container" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "test to find the occurence [24]:" << std::endl;
    try
    {
        std::cout << "- Index " << easyfind(t, 24) <<  " exist in this container\n" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

#endif