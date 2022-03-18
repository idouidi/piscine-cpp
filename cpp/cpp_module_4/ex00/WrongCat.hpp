/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:56:32 by user42            #+#    #+#             */
/*   Updated: 2022/02/03 23:33:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
 #define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(WrongCat& c);
		WrongCat & operator=(const WrongCat& c);
		virtual void makeSound() const;
};

#endif