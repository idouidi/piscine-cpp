/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:59:07 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 15:26:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
 #define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal& wa);
		WrongAnimal & operator=(const WrongAnimal& wa);
		virtual ~WrongAnimal();

		virtual void makeSound() const;
        std::string getType(void) const;
};

#endif
