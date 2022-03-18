/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:18:19 by user42            #+#    #+#             */
/*   Updated: 2022/03/16 12:30:17 by user42           ###   ########.fr       */
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

class Span
{
private:
	unsigned int		_N;
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
	unsigned int 			shortestSpan();
};

std::ostream&	operator<<(std::ostream& flux, const Span& s);

#endif