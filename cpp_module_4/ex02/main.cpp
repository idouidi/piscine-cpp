/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:45:32 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 23:33:30 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

int main()
{
	//We cant create an instance from an abstract class
	//AAnimal test(); 
	AAnimal* array[6];

	std::cout << "\n	-	-	-	-	-	-	-	-\n" << std::endl;
	for(int i = 0; i < 6; i++)
	{
		if (i <= 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << std::endl;
	}

	for(int i = 0; i < 6; i++)
		delete array[i];
}
