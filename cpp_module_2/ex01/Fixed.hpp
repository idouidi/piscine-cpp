/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:02:53 by user42            #+#    #+#             */
/*   Updated: 2022/01/27 20:04:50 by user42           ###   ########.fr       */
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

	Fixed& operator=(const Fixed& src);
	Fixed(void);
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& src);
	~Fixed(void);
};

std::ostream& operator<<(std::ostream& flux, const Fixed& f);

#endif 