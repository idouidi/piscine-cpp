/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:08:49 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/08 14:55:21 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat Bob("Bob", 1);
	Bureaucrat Jason("Jason", 150);
	Bureaucrat Marc("Marc", 3);
	
	std::cout << std::endl;
	std::cout << Bob << Jason << Marc << std::endl;
	try
	{
		Bob.decreaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jason.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Marc.decreaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << Bob << Jason <<  Marc << std::endl;
	return (0);	
}