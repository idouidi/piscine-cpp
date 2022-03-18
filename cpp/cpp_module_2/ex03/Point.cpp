/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:43:46 by user42            #+#    #+#             */
/*   Updated: 2022/01/31 18:12:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0)
{
}

Point::Point(const Point& src)
{
	*this = src;
}

Point::Point(const Fixed a, const Fixed b):x(a),y(b)
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point& p)
{
	if (this != &p)
	{
		(Fixed&)x = p.getPointX();
		(Fixed&)y = p.getPointY();
	}
	return (*this);
}

Fixed& Point::getPointX() const
{
	return ((Fixed&)x);
}

Fixed& Point::getPointY() const
{
	return ((Fixed&)y);
}

std::ostream& operator<<(std::ostream& flux, const Point& p)
{
	return flux << "(" << p.getPointX() << "," << p.getPointY() << ")";
}
