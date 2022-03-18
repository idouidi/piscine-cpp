/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:14:15 by user42            #+#    #+#             */
/*   Updated: 2022/02/14 16:46:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria* inventory[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource& m);
    MateriaSource& operator=(const MateriaSource& m);
    virtual ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif