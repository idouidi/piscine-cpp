/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:11:42 by user42            #+#    #+#             */
/*   Updated: 2022/01/31 18:12:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float distance(float x1, float y1, float x2, float y2)
{
	return (ft_sqrt(ft_pow((x2 - x1), 2) + ft_pow((y2 - y1), 2)));
}

float calcArea(float a, float b, float c)
{
	float S = (a + b + c) / 2;
	return 	(ft_sqrt(S * (S - a) * (S - b) * (S - c)));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float a_x = a.getPointX().toFloat();
	float a_y = a.getPointY().toFloat();
	float b_x = b.getPointX().toFloat();
	float b_y = b.getPointY().toFloat();
	float c_x = c.getPointX().toFloat();
	float c_y = c.getPointY().toFloat();
	float point_x = point.getPointX().toFloat();
	float point_y = point.getPointY().toFloat();

	float d_a = distance(a_x, a_y, b_x, b_y);
	float d_b = distance(b_x, b_y, c_x, c_y);
	float d_c = distance(c_x, c_y, a_x, a_y);
	
	float areaABC = calcArea(d_a, d_b, d_c);

	float d_d = distance(a_x, a_y, point_x, point_y);
	float d_e = distance(b_x, b_y, point_x, point_y);
	float d_f = distance(c_x, c_y, point_x, point_y);

	float areaDAE = calcArea(d_d, d_a, d_e);
	float areaEBF = calcArea(d_e, d_b, d_f);
	float areaFCD = calcArea(d_f, d_c, d_d);

	float res = areaABC - (areaDAE + areaEBF + areaFCD);
	if (res < 0)
		res *= -1;
	if (!res || res < 0.001)
		return (true);
	return (false);
}