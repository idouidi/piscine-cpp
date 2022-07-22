/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:36:41 by user42            #+#    #+#             */
/*   Updated: 2022/07/23 00:25:44 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void    subject_test()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "The top element in the stack : " << mstack.top() << std::endl;
    std::cout << "remove the latest element insert into the stack.";
    mstack.pop();
    std::cout << " Now the top of the stack is : " << *mstack.begin() << std::endl;
    std::cout << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    --ite;
    std::cout << "iterator it point on the begining of the stack : " << *it << std::endl;
    std::cout << "iterator ite point on the end of the stack : " << *ite<< std::endl;
    std::cout << "We add 4 elements into the stack. So now the stack is: 5 -> 3 -> 5 -> 737 -> 0" << std::endl;
    ++ite;
    while (it != ite)
    {
    std::cout << *it++ << std::endl;
    }

    std::cout <<"the size of the stack is : " <<  mstack.size() << std::endl;
    std::cout << std::endl;
}

void test_const()
{
    std::cout << "- -    - -  CONST TEST  - -    - -" << std::endl;

    MutantStack<char> mstack;

    mstack.push('a');
    mstack.push('z');
    mstack.push('e');
    mstack.push('r');
    mstack.push('t');
    mstack.push('y');

    std::cout << "The top element in the stack : " << mstack.top() << std::endl;
    std::cout <<"the size of the stack is : " <<  mstack.size() << std::endl;

    MutantStack<char>::const_iterator c_it = mstack.begin();
    MutantStack<char>::const_iterator c_ite = mstack.end();
    --c_ite;
    std::cout << "iterator c_it point on the begining of the stack : " << *c_it << std::endl;
    std::cout << "iterator c_ite point on the end of the stack : " << *c_ite<< std::endl;
    ++c_ite;
    while (c_it != c_ite) {
      std::cout << *c_it << std::endl;
      ++c_it;
    }
}

int main()
{
    subject_test();
    test_const();
    return 0;
}