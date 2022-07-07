/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:37:43 by user42            #+#    #+#             */
/*   Updated: 2022/01/27 15:05:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>

class Fixed
{
private:
	int					valuePointFixed;
	static const int	bits = 8;
public:
	int 				getRawBits(void) const;
	void				setRawBits(int const raw);
	Fixed();
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& src);
	~Fixed();
};

#endif 