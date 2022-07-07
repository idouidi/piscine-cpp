/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:45:32 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 21:19:49 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* array[6];
	Dog*	test_deep_cpy;

	std::cout << "\n	-	-	-	-	-	-	-	-\n" << std::endl;
	for(int i = 0; i < 6; i++)
	{
		if (i <= 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << std::endl;
	}

	test_deep_cpy = new Dog((*dynamic_cast<Dog *>(array[0])));
	std::cout << "\n	-	-	-	-	-	-	-	-\n" << std::endl;
	for(int i = 0; i < 6; i++)
		delete array[i];
	std::cout << "\n	-	-	-	-	-	-	-	-\n" << std::endl;

	std::cout << "## The deep copy is illustrated by the existence of the string copied from array[0].\
While this instance was deleted : \n" << *test_deep_cpy->getBrain()->getIdeas() << std::endl;
	 std::cout << "\n	-	-	-	-	-	-	-	-\n" << std::endl;

	delete test_deep_cpy;
}
