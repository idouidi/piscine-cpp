/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 00:50:32 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/16 01:33:47 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}

std::ostream&	operator<<(std::ostream &flux, const Data &d)
{
	return flux << "Address of ptr is:		" << d.ptr << std::endl;
}