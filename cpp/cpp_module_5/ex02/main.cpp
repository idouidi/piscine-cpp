/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:08:49 by idouidi           #+#    #+#             */
/*   Updated: 2022/02/23 04:10:43 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	RobotomyRequestForm Form2("Form 2");
	try
	{
		Form2.beSigned(Bob);
		Form2.execute(Bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	PresidentialPardonForm Form3("Form3");
	try
	{
		Form3.beSigned(Bob);
		Form3.execute(Bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout <<std::endl;

	Bureaucrat Jason("Jason", 148);
	Jason.executeForm(Form1);

	std::cout <<std::endl;

	Bob.executeForm(Form1);
	
	std::cout <<std::endl;
	return (0);
}