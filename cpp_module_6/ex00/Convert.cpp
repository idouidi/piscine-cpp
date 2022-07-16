/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:15:35 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/15 16:39:06 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(const std::string value):_value(value)
{}

Convert::Convert(const Convert& c):_value(c._value)
{
}

Convert& Convert::operator=(const Convert& c)
{
    if (this != &c)
    {
       *(const_cast<std::string*>(&_value))= c._value;
    }
    return (*this);
}

Convert::~Convert()
{}

bool    isNumber(const std::string value)
{
    bool    point;
    int     i = 0;
    int     len = value.length();
	if (value[i] == '-')
		i++;
	while (i < len)
	{
		if (value[i] == 'f' && i + 1 == len)
			return true;
		if ((!isdigit(value[i]) && value[i] != '.') || (value[i] == '.' && point))
			return false;
		if (value[i] == '.')
            point = true;
		i++;
	}
	return true;
}

void	special_case(std::ostream& flux, const std::string &value)
{
	flux << "char: impossible" << std::endl;
	flux << "int: impossible" << std::endl;
	flux << "float: " << value << "f" << std::endl;
	flux << "double: " << value << std::endl;
}

void Convert::printConvert(std::ostream& flux)
{
    if (isNumber(_value))
    {
        double num = std::atof(_value.c_str());
        if (static_cast<char>(num) < 32 || static_cast<char>(num) == 127)
           flux << "char: Non displayable" << std::endl;
        else
			flux << "char: " << static_cast<char>(num) << std::endl;
        flux << "int: " << static_cast<int>(num) << std::endl;
        flux << "float: " << static_cast<float>(num) << (static_cast<int>(num) == static_cast<float>(num) ? ".0" : "") << "f" << std::endl;
		flux << "double: " << static_cast<double>(num) << (static_cast<int>(num) == static_cast<double>(num) ? ".0" : "") << std::endl;
    }
    else if (_value.length() == 1)
    {
        char _char = _value[0];
        if (_char < 32 || _char == 127)
             flux << "char: Non displayable" << std::endl;
        else
            flux << "char: " << _char << std::endl;
        flux << "int: " << static_cast<int>(_char) << std::endl;
        flux << "float: " << static_cast<float>(_char) << ".0f" << std::endl;
		flux << "double: " << static_cast<double>(_char) << ".0" << std::endl;
    }
	else if (_value == "nan" || _value == "nanf")
		special_case(flux, "nan");
	else if (_value == "+inf" || _value == "+inff")
		special_case(flux, "+inf");
    else if (_value == "-inf" || _value == "-inff")
		special_case(flux, "-inf");
    else
        flux << "It can not be convert ..." << std::endl;
}

std::ostream& operator<<(std::ostream& flux, const Convert& c)
{
    (*const_cast<Convert*>(&c)).printConvert(flux);
    return  flux;
}