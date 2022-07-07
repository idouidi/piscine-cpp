/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 00:48:08 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/05 01:38:47 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIAL_HPP__
# define __SERIAL_HPP__

# include <iostream>
# include <stdint.h>

typedef struct s_data
{
    int     nbr;
    void    *ptr;
    char    _char;
}               t_data;

uintptr_t	serialize(t_data *ptr);
t_data		*deserialize(uintptr_t ptr);

std::ostream	&operator<<(std::ostream &flux, const t_data &d);

#endif