/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:55:06 by user42            #+#    #+#             */
/*   Updated: 2022/01/25 11:16:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string& stringREF(str);

	std::cout << "the adress in memory of str: 			" << &str << std::endl;
	std::cout << "the adress in memory of str in using stringPTR:	" << stringPTR << std::endl;
	std::cout << "the adress in memory of str in using stringREF:	" << &stringREF << std::endl;
	std::cout << "str		= " << str << std::endl;
	std::cout << "stringPTR	= " << *stringPTR <<  std::endl;
	std::cout << "stringREF	= " << stringREF << std::endl;
}