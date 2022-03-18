/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:50:32 by idouidi           #+#    #+#             */
/*   Updated: 2022/02/23 00:30:40 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP
# define __ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& r);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& r);
	~RobotomyRequestForm();

	void execute(const Bureaucrat& b) const;
};

#endif