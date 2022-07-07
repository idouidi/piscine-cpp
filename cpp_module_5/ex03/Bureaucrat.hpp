/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 03:39:30 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/03 13:57:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define  __BUREAUCRAT_HPP__

# include <iostream>
# include <exception>
# include <string>
# include <iomanip>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string 	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& b);
	Bureaucrat& operator=(const Bureaucrat& b);
	virtual ~Bureaucrat();

	const std::string getName() const;
	int getGrade() const;

	void increaseGrade();
	void decreaseGrade();

	class GradeTooHighException: public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public: 
			const char* what() const throw();
	};

	void	signForm(const Form& f);
	void	executeForm(Form const & form) ;
};


std::ostream& operator<<(std::ostream& flux, const Bureaucrat& b);
#endif