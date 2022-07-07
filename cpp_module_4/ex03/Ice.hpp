/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:26:57 by user42            #+#    #+#             */
/*   Updated: 2022/02/14 16:44:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define  __ICE_HPP__

# include "AMateria.hpp"

class Ice: virtual public AMateria
{
public:
    Ice();
    Ice(const Ice& c);
    Ice& operator=(const Ice& c);
    virtual ~Ice();

     AMateria* clone(void) const;
     void use(ICharacter& target);
};

 #endif