/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:05:58 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 23:35:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
 #define __CAT_H__

# include <iostream>
# include "Animal.hpp"

class Cat: virtual public Animal
{
private:
	
public:
    Cat();
    Cat(const Cat& c);
    Cat& operator=(const Cat& c);
    virtual ~Cat();
    virtual void makeSound() const;
};

#endif