/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:08:49 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/03 15:44:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Bureaucrat Bob("Bob", 1);
	ShrubberyCreationForm Form1("Form1");

	std::cout << std::endl;
	try
	{
		Form1.execute(Bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << Form1 << std::endl;
	try
	{
		Form1.beSigned(Bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form1.execute(Bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Form1 << std::endl;
	std::cout << std::endl;

	Intern Mark;

	Form* form1 = Mark.makeForm("shrubbery creation", "forest");
	Form* form2 = Mark.makeForm("robotomy request", "bender");
	Form* form3 = Mark.makeForm("presidential pardon", "poutine");
	Mark.makeForm("polaroid like form", "instagram");

	std::cout << std::endl;
	std::cout << *form1 << *form2 << *form3 << std::endl;
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;
	return (0);
}