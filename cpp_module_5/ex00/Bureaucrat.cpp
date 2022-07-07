/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 03:38:47 by idouidi           #+#    #+#             */
/*   Updated: 2022/02/21 17:27:41 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooLowException();
	if (_grade > 150)
		throw GradeTooHighException();
	std::cout << "(DEFAULT) A bureaucrat named " << _name << " with the " << _grade << " grade" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
{
	*this = b;
	std::cout << "(COPY) A bureaucrat named " << _name << " with the " << _grade << "grade" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	if (this != &b)
	{
		*(const_cast<std::string*>(&_name)) = b._name;
		_grade = b._grade;
	}
		std::cout << "(ASSIGNATION) A bureaucrat named " << _name << " with a grade of " << _grade  << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A bureaucrat named " << _name << " with the grade of " << _grade << " was destroyed" << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() 
{
  return ("Bureaucrat Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() 
{
  return ("Bureaucrat Grade Too Low");
}

void Bureaucrat::increaseGrade()
{
	if (_grade + 1 > 150)
		throw GradeTooHighException();
	_grade += 1;
}

void Bureaucrat::decreaseGrade()
{
	if (_grade - 1 < 1)
		throw GradeTooLowException();
	_grade -= 1;
}

std::ostream& operator<<(std::ostream& flux, const Bureaucrat& b)
{
	return flux << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
}
