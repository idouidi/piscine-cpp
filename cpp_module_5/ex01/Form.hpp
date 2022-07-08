/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:55:59 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/08 17:07:01 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string 	_name;
	bool				_signed;
	const int			_grade_required_to_sign;
	const int			_grade_required_to_exec;
	Form();

public:
	Form(const std::string name, const int grts, const int grte);
	Form(const Form& f);
	Form& operator=(const Form& f);
	virtual ~Form();

	const std::string	getName() const;
	bool				getSigned() const;
	int			getGradeRequiredToSign() const;
	int			getGradeRequiredToExec() const;

	class GradeTooHighExecption: public std::exception
	{
		public:
			const char* what(void) const throw();
	};
	
	class GradeTooLowExecption: public std::exception
	{
		public:
			const char* what(void) const throw();
	};

	void				beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& flux, const Form& f);
#endif