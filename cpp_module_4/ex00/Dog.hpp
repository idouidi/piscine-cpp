/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:07:05 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 23:35:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
 #define __DOG_H__

#include <iostream>
# include "Animal.hpp"

class Dog: virtual public Animal
{
private:
	
public:
    Dog();
    Dog(const Dog& d);
    Dog& operator=(const Dog& d);
    virtual ~Dog();

    virtual void makeSound() const;
};

#endif