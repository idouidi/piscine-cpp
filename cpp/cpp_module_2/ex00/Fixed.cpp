/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:38:57 by user42            #+#    #+#             */
/*   Updated: 2022/01/27 14:20:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	valuePointFixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	if (this != &src)
		valuePointFixed = src.valuePointFixed;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	if (this != &src)
		valuePointFixed = src.valuePointFixed;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


void	Fixed::setRawBits(int const raw)
{
	valuePointFixed = raw;
}
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (valuePointFixed);
}

