/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:27:44 by user42            #+#    #+#             */
/*   Updated: 2022/01/31 17:30:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

double powerOfTen(int num)
{
	double rst = 1.0;
	if(num >= 0)
	{
		for(int i = 0; i < num ; i++){
			rst *= 10.0;
		}
	}
	else
	{
		for(int i = 0; i < (0 - num ); i++){
			rst *= 0.1;
		}
	}
	return rst;
 }
 
double ft_sqrt(double a)
{
	 double z = a; 
	 double rst = 0.0;
	 int max = 8;
	 int i;
	 double j = 1.0;
	 for(i = max ; i > 0 ; i--){
		 if(z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
		 {
			 while( z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
			 {
				 j++;
				 if (j >= 10)
					break;
			 }
			 j--;
			 z -= (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i));
			 rst += j * powerOfTen(i); 
			 j = 1.0;
		   }
	  }
	  for(i = 0 ; i >= 0 - max ; i--){
		  if(z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
		  {
			  while( z - (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i)) >= 0)
				  j++;
			  j--;
			  z -= (( 2 * rst ) + ( j * powerOfTen(i)))*( j * powerOfTen(i));
 
			  rst += j * powerOfTen(i);
			  j = 1.0;
		   }
	  }
	  return rst;
 }

 int ft_pow(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ft_pow(x, y / 2) * ft_pow(x, y / 2);
    else
        return x * ft_pow(x, y / 2) * ft_pow(x, y / 2);
}