/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:18:19 by user42            #+#    #+#             */
/*   Updated: 2022/07/22 22:33:03 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <stdexcept>
# include <limits>
# include <ctime>

class Span
{
private:
	unsigned int		_n;
	std::vector<int>	_vector;
	Span();
public:
	Span(unsigned int n);
	Span(const Span& s);
	Span& operator=(const Span& s);
	~Span();

	std::vector<int>		getVector() const;

	void 					addNumber(unsigned int n);
	unsigned int 			longestSpan();
	unsigned int 			shortestSpan();};

std::ostream&	operator<<(std::ostream& flux, const Span& s);

#endif