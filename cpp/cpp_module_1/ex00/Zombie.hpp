/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:01:03 by user42            #+#    #+#             */
/*   Updated: 2022/01/22 13:19:11 by user42           ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();
	void	announce();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
#endif