/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:36:41 by user42            #+#    #+#             */
/*   Updated: 2022/03/17 15:41:29 by user42           ###   ########.fr       */
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

    std::cout <<"the size of the stack is : " <<  mstack.size() << std::endl;
    std::cout << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "We add 4 elements into the stack. So now the stack is: 5 -> 3 -> 5 -> 737 -> 0" << std::endl;
    std::cout << std::endl;

    std::cout <<"the size of the stack is : " <<  mstack.size() << std::endl;
    std::cout << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --ite;
    std::cout << "iterator it point on the begining of the stack : " << *it << std::endl;
    std::cout << "iterator ite point on the end of the stack : " << *ite << std::endl;
    ite++;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
}

void test_const()
{
    std::cout << "- -    - -  CONST TEST  - -    - -" << std::endl;

    MutantStack<char> mstack;

    mstack.push('a');
    mstack.push('b');
    mstack.push('c');
    mstack.push('d');
    mstack.push('e');

    std::cout << "The top element in the stack : " << mstack.top() << std::endl;
    std::cout <<"the size of the stack is : " <<  mstack.size() << std::endl;

    MutantStack<char>::const_iterator c_it = mstack.c_begin();
    MutantStack<char>::const_iterator c_ite = mstack.c_end();
    ++c_it;
    --c_it;
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