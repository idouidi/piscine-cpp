/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:21:50 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/08 20:27:40 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATION_HPP__
# define  __SHRUBBERYCREATION_HPP__

#include "Form.hpp"
#include <string>

class ShrubberyCreationForm: public Form
{
private:
	ShrubberyCreationForm();
public:
  ShrubberyCreationForm(const std::string& target);
  ShrubberyCreationForm(const ShrubberyCreationForm& s);
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);
  ~ShrubberyCreationForm(void);

	class ErrorFileExecption: public std::exception
	{
		public:
			const char* what(void) const throw();
	};

   void execute(const Bureaucrat& b) const;
};

#endif