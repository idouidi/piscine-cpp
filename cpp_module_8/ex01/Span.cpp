/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:02:28 by user42            #+#    #+#             */
/*   Updated: 2022/07/22 23:12:20 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n):_n(n)
{
    if (_n< 0)
        throw(std::overflow_error("The number it's not an unsigned int"));
    _vector.reserve(_n);
}

Span::Span(const Span& s)
{
    *this = s;
}

Span& Span::operator=(const Span& s)
{
    if (this != &s)
    {
        _n = s._n;
        _vector = s._vector;
    }
    return (*this);
}

Span::~Span()
{}

std::vector<int> Span::getVector() const
{
    return (_vector);
}  


void Span::addNumber(unsigned int n)
{
    if (_vector.size() >= _n)
        throw(std::out_of_range("Can not add more numbers"));
    _vector.push_back(n);
}

unsigned int Span::longestSpan()
{
    if (_vector.size() <= 2)
        throw(std::out_of_range("Not enough element"));
    std::vector<int>::iterator min = std::min_element(_vector.begin(), _vector.end());
    std::vector<int>::iterator max = std::max_element(_vector.begin(), _vector.end());
    return (*max - *min);
}

unsigned int Span::shortestSpan()
{
    if (_vector.size() <= 2)
        throw(std::out_of_range("Not enough element"));
    std::vector<int>::iterator max = std::max_element(_vector.begin(), _vector.end());
    int shortest_span = *max;
    std::vector<int>vtc_cpy = _vector;

    std::sort(vtc_cpy.begin(), vtc_cpy.end());
    for (unsigned int i =0; i < vtc_cpy.size(); i++)
        if (i && std::abs(vtc_cpy[i] - vtc_cpy[i - 1]) < shortest_span)
            shortest_span = std::abs(vtc_cpy[i] - vtc_cpy[i - 1]);
    return (shortest_span);
}

std::ostream&	operator<<(std::ostream& flux, const Span& s)
{
    for (unsigned int i = 0; i < s.getVector().size(); i++)
        flux << s.getVector()[i] << " |";
    flux << std::endl;
    return (flux);
}