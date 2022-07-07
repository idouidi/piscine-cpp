/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 00:50:32 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/05 02:24:12 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

uintptr_t	serialize(t_data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

t_data	*deserialize(uintptr_t ptr)
{
	return reinterpret_cast<t_data *>(ptr);
}

std::ostream&	operator<<(std::ostream &flux, const t_data &d)
{
	return flux << "nbr: " << d.nbr << ", _char: '" << d._char << "' (char)"
        << static_cast<int>(d._char) << ", ptr: " << d.ptr << std::endl;
}