/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:08:49 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/08 21:55:42 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{

	Intern 		Mark;	

	std::cout << std::endl;
	Form* Form01 = Mark.makeForm("shrubbery creation", "forest");
	Form* Form02 = Mark.makeForm("robotomy request", "bender");
	Form* Form03 = Mark.makeForm("presidential pardon", "poutine");
	Mark.makeForm("polaroid like form", "instagram");

	std::cout << std::endl;
	std::cout << *Form01 << *Form02 << *Form03 << std::endl;
	std::cout << std::endl;

	delete Form01;
	delete Form02;
	delete Form03;
	return (0);
}