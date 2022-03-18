/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:58:35 by user42            #+#    #+#             */
/*   Updated: 2022/02/14 16:46:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  __ICHARACTER_HPP__
# define __ICHARACTER_HPP__ 

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
public: 
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

 #endif