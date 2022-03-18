/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:07:46 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 19:11:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

# include <iostream>

template<typename T>
void swap(T& a, T&b)
{
    T c;

    c = a;
    a = b;
    b = c;
}

template<typename T>
const T& min(const T& a, const T&b)
{
    return ((a < b) ? a : b);
}

template<typename T>
const T& max(const T& a, const T&b)
{
    return ((a > b) ? a : b);
}

#endif