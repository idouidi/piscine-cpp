/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:59:21 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 18:50:09 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>
# include <cstdlib>
# include "Brain.hpp"

class Animal
{
protected:
	std::string type;
	
public:
    Animal();
    Animal(const Animal& a);
    Animal& operator=(const Animal& a);
    virtual ~Animal();

	virtual std::string getType() const;
	virtual void setType(std::string str);
	virtual void makeSound() const;
};

std::string gen_random(const int len);

#endif