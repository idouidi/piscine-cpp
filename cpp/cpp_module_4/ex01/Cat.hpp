/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:05:58 by user42            #+#    #+#             */
/*   Updated: 2022/02/04 14:16:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
 #define __CAT_H__

# include <iostream>
# include "Animal.hpp"

static int nbCat = 0;

class Cat: virtual public Animal
{
private:
    Brain *_brain;
public:
    Cat();
    Cat(const Cat& c);
    Cat& operator=(const Cat& c);
    virtual ~Cat();

    virtual void makeSound() const;
};

#endif