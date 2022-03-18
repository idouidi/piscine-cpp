/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smartphone.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:35:47 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 11:44:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SMARTPHONE_HPP
# define SMARTPHONE_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <climits>
# include <limits>

class contact
{
	bool				is_initialize;
	std::string			phone_number;
	std::string			first_name;
	std::string			last_name;
	std::string			nickname;
	std::string			darkest_secret;

public:
	contact();
	void			SetNames();
	void			SetPhoneNumber();
	void			SetDarkestSecret();
	void			GetFirstName();
	void			GetLastName();
	void			GetNickname();
	void			GetPhoneNumber();
	void			GetDarkestSecret();
	void			GetFormatContact();
	void			ContactInitialized();
	bool			IsContactInitialized();
};

//	CMD
void				AddCmd(contact (&contact)[8]);
void				SearchCmd(contact (&contact)[8]);
//	UTILS	
int					DisplayPhoneBook(contact (&contact)[8]);
void				SetFormat(std:: string str);
void				no_cin();
int					GoodFormatNames(std:: string name);
int					GoodFormatNumber(std:: string number);

extern int			max_contact;

#endif