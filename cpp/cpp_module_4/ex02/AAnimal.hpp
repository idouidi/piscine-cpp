/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:03:16 by user42            #+#    #+#             */
/*   Updated: 2022/02/05 14:06:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __AANIMAL_H__
 #define __AANIMAL_H__

#include <iostream>
# include "Brain.hpp"


class AAnimal
{
protected:
	std::string type;
	
public:
    AAnimal();
    AAnimal(const AAnimal& a);
    AAnimal& operator=(const AAnimal& a);
    virtual ~AAnimal();

	virtual std::string getType() const;
	virtual void setType(std::string str);
	virtual void makeSound() const = 0;
};

std::string gen_random(const int len);

#endif