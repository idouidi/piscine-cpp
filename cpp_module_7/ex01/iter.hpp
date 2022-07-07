/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:09:45 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 20:32:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
 #define __ITER_HPP__

#include <iostream>

template <typename T>
void printdata(T data)
{
	std::cout << data << " ";
}

template <typename T>
void iter(T* array, int len, void (*fcntptr)(T&))
{
	for(int i = 0; i< len; i++)
	(*fcntptr)(array[i]);
	std::cout << std::endl;
}

#endif 