/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:45:32 by user42            #+#    #+#             */
/*   Updated: 2022/02/05 14:16:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//AAnimal error(); trying to create an object from an abstract class
	AAnimal* meta[6];
	for(int i = 0; i < 6; i++)
	{
		if (i <= 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
		std::cout << std::endl;
	}
	for(int i = 0; i < 6; i++)
		delete meta[i];
}
