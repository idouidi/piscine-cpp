/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:47:16 by user42            #+#    #+#             */
/*   Updated: 2022/01/31 18:04:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
  	Point b(10, 30);
  	Point c(20, 0);
  	Point p1(30, 15);
	Point p2(10, 15);

	std::cout << "coordinates of the point a are: " << a << std::endl;
	std::cout << "coordinates of the point b are: " << b << std::endl;
	std::cout << "coordinates of the point c are: " << c << std::endl;
	std::cout << "coordinates of the point p1 are: " << p1 << std::endl;
	std::cout << "coordinates of the point p2 are: " << p2 << std::endl;
	std::cout << "p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << " of the triangle!" << std::endl;
	std::cout << "p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << " of the triangle!" << std::endl;
	return 0;
}
