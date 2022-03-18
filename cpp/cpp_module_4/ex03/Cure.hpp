/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:17:55 by user42            #+#    #+#             */
/*   Updated: 2022/02/14 16:45:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define  __CURE_HPP__

# include "AMateria.hpp"

class Cure: virtual public AMateria
{
public:
    Cure();
    Cure(const Cure& c);
    Cure& operator=(const Cure& c);
    virtual ~Cure();

     AMateria* clone(void) const;
     void use(ICharacter& target);
};

 #endif