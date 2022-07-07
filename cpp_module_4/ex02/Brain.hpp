/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:51:59 by user42            #+#    #+#             */
/*   Updated: 2022/07/07 23:08:35 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  __BRAIN_H__
#define __BRAIN_H__

# include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& b);
    Brain& operator=(const Brain& b);
    virtual ~Brain();

    std::string* getIdeas();
};

#endif