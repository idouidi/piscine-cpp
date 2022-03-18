/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:33:16 by user42            #+#    #+#             */
/*   Updated: 2022/01/27 20:11:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():valuePointFixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		valuePointFixed = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	return (valuePointFixed);
}

void	Fixed::setRawBits(int const raw)
{
	valuePointFixed = raw;
}
// new

int		Fixed::toInt(void)const
{
	return (valuePointFixed >> bits);
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(valuePointFixed) / (1 << bits);
}

Fixed::Fixed(const int num):valuePointFixed(num << bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num):valuePointFixed(static_cast<int>(std::roundf(num * (1 << bits))))
{
  std::cout << "Float constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& flux, const Fixed& f)
{
	return flux << f.toFloat();
}
