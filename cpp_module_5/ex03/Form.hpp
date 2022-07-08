/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:55:59 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/08 20:57:02 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include "Bureaucrat.hpp"
# include <fstream>
# include <cstdlib>
# include <time.h>

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

	//GETER
	const std::string	getName() const;
	bool				getSigned() const;
	int					getGradeRequiredToSign() const;
	int					getGradeRequiredToExec() const;

	//SETER
	void				setName(const std::string name);
	void				setSigned(bool state);
	void				setGradeRequiredToSign(const int grts);
	void				setGradeRequiredToExec(const int grte);

	//EXECP
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

	class IsntSignedExecption: public std::exception
	{
		public:
			const char* what(void) const throw();
	};

	void				beSigned(const Bureaucrat& b);
	virtual void 		execute(const Bureaucrat& b) const = 0;
};

std::ostream& operator<<(std::ostream& flux, const Form& f);
#endif