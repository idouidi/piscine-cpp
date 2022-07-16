/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:31:30 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/16 01:44:12 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

/*
*   uintptr_t is an unsigned integer type that is capable of storing 
*   a data pointer. Which typically means that it's the same size as 
*   a pointer.
*
*   A common reason to want an integer type that can hold an 
*   architecture's pointer type is to perform integer-specific 
*   operations on a pointer, or to obscure the type of a pointer 
*   by providing it as an integer "handle".
*/

int main ()
{
	Data  d;
	std::string msg = "salut";
	d.ptr = &msg;


	std::cout << "Address of d is:		" << &d << std::endl;
	std::cout << "[d] "<< d << std::endl;

	std::cout << "*     *       *       *      *" << std::endl;

	uintptr_t   s	= serialize(&d);
	std::cout << std::endl;
	std::cout << "d in now serialize with s:	" << &s << std::endl;
	Data *e			= deserialize(s);
	std::cout << std::endl;

	std::cout << "*     *       *       *      *" << std::endl;

	std::cout << std::endl;
	std::cout << "d is now e, Address of e is:	" << e << std::endl;
	std::cout << "[e] "<< *e << std::endl;
}