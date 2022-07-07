/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:07:05 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 20:24:09 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
# define __DOG_H__

# include <iostream>
# include "Animal.hpp"

class Dog: virtual public Animal
{
private:
	Brain *_brain;
public:
    Dog();
    Dog(const Dog& d);
    Dog& operator=(const Dog& d);
    virtual ~Dog();

    virtual void makeSound() const;
    Brain* getBrain() const;
};

#endif