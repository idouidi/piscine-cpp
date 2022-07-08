/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:56:27 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/08 17:07:28 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int grts, const int grte)
	:_name(name), _grade_required_to_sign(grts), _grade_required_to_exec(grte)
{
	_signed = false;
	if (_grade_required_to_sign < 1 || _grade_required_to_exec < 1)
		throw GradeTooLowExecption ();
	if (_grade_required_to_sign > 150 || _grade_required_to_exec > 150)
		throw GradeTooHighExecption ();
}

Form::Form(const Form& f)
	:_name(f.getName()), _signed(f.getSigned()), _grade_required_to_sign(f.getGradeRequiredToSign()),
	_grade_required_to_exec(f.getGradeRequiredToExec())
{
}

Form& Form::operator=(const Form& b)
{
	if (this != &b)
	{
		_signed = b._signed;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "A Form was destroyed" << std::endl;
}

const std::string Form::getName() const
{
	return (_name);
}

int Form::getGradeRequiredToSign() const
{
	return (_grade_required_to_sign);
}

int Form::getGradeRequiredToExec() const
{
	return (_grade_required_to_exec);
}

bool Form::getSigned() const
{
	return (_signed);
}

const char* Form::GradeTooHighExecption::what(void) const throw()
{
  return ("Form Grade Too High");
}

const char* Form::GradeTooLowExecption::what(void) const throw()
{
  return ("Form Grade Too Low");
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > getGradeRequiredToSign())
		throw GradeTooLowExecption();
	_signed = true;
}

std::ostream& operator<<(std::ostream& flux, const Form& f)
{
	return flux << "Name: " << f.getName() << " | Signed: " << f.getSigned()
		<< " | Grade required to sign: " << f.getGradeRequiredToSign()
		<< " | Grade required to Exec: " << f.getGradeRequiredToExec() << std::endl;
}