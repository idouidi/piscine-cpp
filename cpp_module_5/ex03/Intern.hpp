/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 04:15:14 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/03 14:37:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define  __INTERN_HPP__

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <exception>
class Intern
{
private:

public:
	Intern();
	Intern(const Intern& i);
	Intern& operator=(const Intern& i);
	~Intern();

	class FormDoesNotExist: public std::exception
	{
		public:
			const char* what() const throw();
	};
	Form* makeForm(const std::string form_name, const std::string target);
};

# endif