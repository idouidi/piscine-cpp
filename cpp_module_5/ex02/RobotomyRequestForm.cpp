/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:50:18 by idouidi           #+#    #+#             */
/*   Updated: 2022/02/23 02:09:24 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
:Form(target, 72, 45)
{
	setName(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& r)
:Form(r)
{
	setName(r.getName());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r)
{
	if (this != &r)
	{
		setName(r.getName());
		setSigned(r.getSigned());
		setGradeRequiredToSign(r.getGradeRequiredToSign());
		setGradeRequiredToExec(r.getGradeRequiredToExec());
	}
	return (*this);	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequest Form was destroyed" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& b)const
{
	if (b.getGrade() > getGradeRequiredToExec())
		throw GradeTooLowExecption();
	if (!getSigned())
		throw IsntSignedExecption();
	srand(time(NULL));
	double rdm = ((double) std::rand() / (RAND_MAX));
	if (rdm > 0.5)
	{
		std::cout << " * drill noise *" << std::endl;
		std::cout << b.getName() << " was robotomized" << std::endl;
	}
	else
		std::cout << b.getName() << " failed to be robotomized" << std::endl;
	std::cout << std::endl;
}