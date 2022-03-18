/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:51:52 by user42            #+#    #+#             */
/*   Updated: 2022/02/04 14:32:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "(Default) a Brain was implemented" << std::endl;
}

Brain::Brain(const Brain& b)
{
    *this = b;
    std::cout << "(Copy) a Brain was implemented" << std::endl;
}

Brain& Brain::operator=(const Brain& b)
{
    if (this != &b)
        *this = b;
    return (*this);
}

Brain::~Brain()
{}

std::string* Brain::getIdeas()
{
	return (ideas);
}