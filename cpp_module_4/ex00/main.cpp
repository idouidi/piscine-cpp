/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:45:32 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 15:48:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	std::cout << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound(); //will output the dog sound!
	animal->makeSound(); //will output the animal sound

//WRONG CLASS PART :
	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	delete cat;
	std::cout << std::endl;
	delete animal;
	std::cout << std::endl;
	delete wrong_cat;
	std::cout << std::endl;
	delete wrong_animal;
}
