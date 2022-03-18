/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:37:40 by user42            #+#    #+#             */
/*   Updated: 2022/03/17 15:40:49 by user42           ###   ########.fr       */
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

    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    
    const_iterator c_begin() const
    {
        return this->c.cbegin();
    }
    const_iterator c_end() const
    {
        return this->c.cend();
    }
};

#endif