/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:55:12 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 00:59:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():valuePointFixed(0)
{
}

Fixed::Fixed(const Fixed& src)
{
  *this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	if (this != &src)
		valuePointFixed = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits() const
{
	return (valuePointFixed);
}

void	Fixed::setRawBits(int const raw)
{
	valuePointFixed = raw;
}

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
}

Fixed::Fixed(const float num):valuePointFixed(static_cast<int>(std::roundf(num * (1 << bits))))
{
}

std::ostream& operator<<(std::ostream& flux, const Fixed& f)
{
	return flux << f.toFloat();
}

bool	Fixed::operator>(const Fixed& src)
{
	return (valuePointFixed > src.valuePointFixed);
}

bool	Fixed::operator<(const Fixed& src)
{
	return (valuePointFixed < src.valuePointFixed);
}

bool	Fixed::operator>=(const Fixed& src)
{
	return (valuePointFixed >= src.valuePointFixed);
}

bool	Fixed::operator<=(const Fixed& src)
{
	return (valuePointFixed <= src.valuePointFixed);
}

bool	Fixed::operator==(const Fixed& src)
{
	return (valuePointFixed == src.valuePointFixed);
}

bool	Fixed::operator!=(const Fixed& src)
{
	return (valuePointFixed != src.valuePointFixed);
}

Fixed	Fixed::operator+(const Fixed& src)
{
	return (toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(const Fixed& src)
{
	return (toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(const Fixed& src)
{
	return (toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(const Fixed& src)
{
	return (toFloat() / src.toFloat());
}

Fixed& Fixed::operator++(void) {
  ++valuePointFixed;
  return *this;
}

Fixed& Fixed::operator--(void) {
  --valuePointFixed;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp = *this;

  ++valuePointFixed;
  return tmp;
}

Fixed Fixed::operator--(int) {
  Fixed tmp = *this;

  --valuePointFixed;
  return tmp;
}

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
	return(a.toFloat() > b.toFloat() ? a : b);
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
	return(a.toFloat() < b.toFloat() ? a : b);
}

Fixed max(Fixed& a, Fixed& b)
{
	return(a.toFloat() > b.toFloat() ? a : b);
}

Fixed min(Fixed& a, Fixed& b)
{
	return(a.toFloat() < b.toFloat() ? a : b);
}

