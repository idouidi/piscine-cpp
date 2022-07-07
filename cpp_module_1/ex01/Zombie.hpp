/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:04:44 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 15:28:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>


class Zombie
{
private:
	std::string	name;
public:
    Zombie();
	~Zombie();
    void    setName(std::string str);
	void	announce();
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int n, std::string name);
#endif