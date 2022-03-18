/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:34:32 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/05 00:42:04 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_HPP__
# define __CONVERT_HPP__

# include <iostream>
# include <iomanip>
#include <exception>

class Convert
{
private:
    const std::string _value;
    Convert();
public:
    Convert(const std::string _value);
    Convert(const Convert& c);
    Convert& operator=(const Convert& c);
    ~Convert();

    std::string getValue() const;
    void    printConvert(std::ostream& flux);
};

std::ostream& operator<<(std::ostream& flux, const Convert& c);
bool    isNumber(const std::string value);
void    special_case(std::ostream& flux, const std::string& value);
#endif