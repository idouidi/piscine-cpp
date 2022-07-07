/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:03:50 by idouidi           #+#    #+#             */
/*   Updated: 2022/02/23 02:10:09 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM__HPP__
# define  __PRESIDENTIALPARDONFORM__HPP__

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& p);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& p);
	~PresidentialPardonForm();

	void execute(const Bureaucrat& b) const;
};

#endif