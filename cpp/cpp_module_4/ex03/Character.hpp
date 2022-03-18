/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:20:33 by user42            #+#    #+#             */
/*   Updated: 2022/02/14 16:46:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define  __CHARACTER_HPP__

# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
    std::string _name;
    AMateria* inventory[4];
public:
    Character(std::string name);
    Character(const Character& c);
    Character& operator=(const Character& c);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif