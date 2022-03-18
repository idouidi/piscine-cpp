/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:56:27 by idouidi           #+#    #+#             */
/*   Updated: 2022/02/23 02:00:08 by idouidi          ###   ########.fr       */
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
	*this = f;
	if (_grade_required_to_sign < 1 || _grade_required_to_exec < 1)
		throw GradeTooLowExecption ();
	if (_grade_required_to_sign > 150 || _grade_required_to_exec > 150)
		throw GradeTooHighExecption ();
}

Form& Form::operator=(const Form& b)
{
	if (this != &b)
	{
		*(const_cast<std::string*>(&_name)) = b._name;
		*(const_cast<int*>(&_grade_required_to_sign)) = b._grade_required_to_sign;
		*(const_cast<int*>(&_grade_required_to_exec)) = b._grade_required_to_exec;
		_signed = b._signed;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "A Form was destroyed" << std::endl;
	std::cout << std::endl;
}

void Form::setName(const std::string name)
{
	*(const_cast<std::string*>(&_name)) = name;
}

void Form::setSigned(bool state)
{
	_signed = state;
}

void Form::setGradeRequiredToSign(const int grts)
{
	*(const_cast<int*>(&_grade_required_to_sign)) = grts;
}

void Form::setGradeRequiredToExec(const int grte)
{
	*(const_cast<int*>(&_grade_required_to_exec)) = grte;
}

const std::string Form::getName() const
{
	return (_name);
}

const int Form::getGradeRequiredToSign() const
{
	return (_grade_required_to_sign);
}

const int Form::getGradeRequiredToExec() const
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

const char* Form::IsntSignedExecption::what(void) const throw()
{
	return ("Form is not signed");
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