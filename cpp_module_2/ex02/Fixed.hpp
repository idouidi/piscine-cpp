/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:48:02 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 00:58:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>
# include <cmath>
class Fixed
{
private:
	int valuePointFixed;
	static const int bits = 8;
public:
	int	getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int	toInt(void) const;

	bool operator>(const Fixed& src);
	bool operator<(const Fixed& src);
	bool operator>=(const Fixed& src);
	bool operator<=(const Fixed& src);
	bool operator==(const Fixed& src);
	bool operator!=(const Fixed& src);

	Fixed operator+(const Fixed& src);
	Fixed operator-(const Fixed& src);
	Fixed operator*(const Fixed &src);
	Fixed operator/(const Fixed &src);

	Fixed& operator++(void);
  	Fixed& operator--(void);
  	Fixed operator++(int);
  	Fixed operator--(int);

	static Fixed max(const Fixed& a, const Fixed& b);
	static Fixed min(const Fixed& a, const Fixed& b);

	Fixed(void);
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& src);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed(void);
};

std::ostream& operator<<(std::ostream& flux, const Fixed& f);
Fixed max(Fixed& a, Fixed& b);
Fixed min(Fixed& a, Fixed& b);

#endif 