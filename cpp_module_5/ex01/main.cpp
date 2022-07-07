/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:08:49 by idouidi           #+#    #+#             */
/*   Updated: 2022/02/22 16:01:35 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat Bob("Bob", 1);
	Bureaucrat Jason("Jason", 150);
	Bureaucrat Marc("Marc", 3);

	Form Form1("Form1", 5, 5);
	Form Form2("Form2", 80, 52);
	Form Form3("Form3", 1, 1);

	std::cout << std::endl;
	std::cout << Bob << Jason << Marc << std::endl;
	std::cout << std::endl;
	std::cout << Form1 << Form2 << Form3 << std::endl;

	Bob.signForm(Form1);
	Jason.signForm(Form2);
	Marc.signForm(Form3);
	
	std::cout << std::endl;
	std::cout << Form1 << Form2 << Form3 << std::endl;
	return (0);	
}