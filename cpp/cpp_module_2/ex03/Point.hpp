/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:43:52 by user42            #+#    #+#             */
/*   Updated: 2022/01/31 17:31:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(const Point& p);
	Point(const Fixed a, const Fixed b);
	~Point();
	Point& operator=(const Point& p);

	Fixed& getPointX(void) const;
	Fixed& getPointY(void) const;
	
};

int ft_pow(int x, unsigned int y);
double ft_sqrt(double a);
bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream& operator<<(std::ostream& flux, const Point& p);

#endif