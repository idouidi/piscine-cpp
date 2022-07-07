/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:51:52 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 20:49:43 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "(Default Brain Constructor)" << std::endl;
}

Brain::Brain(const Brain& b)
{
    *this = b;
    std::cout << "(Copy Brain Constructor)" << std::endl;
}

Brain& Brain::operator=(const Brain& b)
{
    if (this != &b)
        *ideas = *b.ideas;
    return (*this);
}

Brain::~Brain()
{}

std::string* Brain::getIdeas()
{
	return (ideas);
}