/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:37:40 by user42            #+#    #+#             */
/*   Updated: 2022/07/22 23:55:27 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
    MutantStack(): std::stack<T>() {}
    MutantStack(const MutantStack& m)
    {
        *this = m;
    }
    MutantStack& operator=(const MutantStack& m)
    {
        if (this != &m)
        {
            std::stack<T>::operator=(m);
        }
        return (*this);
    }
    ~MutantStack(){}
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(void)
	{
		return (std::stack<T>::c.begin());
	}

	iterator end(void)
	{
		return (std::stack<T>::c.end());
	}

	const_iterator begin(void) const
	{
		return (std::stack<T>::c.begin());
	}

	const_iterator end(void) const
	{
		return (std::stack<T>::c.end());
	}

    //reverse
    reverse_iterator rbegin(void)
	{
		return (std::stack<T>::c.rbegin());
	}

	reverse_iterator rend(void)
	{
		return (std::stack<T>::c.rend());
	}

	const_reverse_iterator rbegin(void) const
	{
		return (std::stack<T>::c.rbegin());
	}

	const_reverse_iterator rend(void) const
	{
		return (std::stack<T>::c.rend());
	}
};

#endif