/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 03:29:39 by idouidi           #+#    #+#             */
/*   Updated: 2022/07/16 02:32:48 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{}

Base* generate(void)
{
    double rdm = 1 + (rand() % 3);
    if (rdm <= 1)
    {
        std::cout << "Class [A] is created: " << std::endl;
        return new A;
    }
    else if (rdm <= 2)
    {
        std::cout << "Class [B] is created: " << std::endl;
        return new B;
    }
    else
    {
        std::cout << "Class [C] is created: " << std::endl;
        return new C;
    }
}


void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch (const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch (const std::exception& e)
            {
              std::cout << "not a correct upcast ..." << std::endl;
            }
        }
    }
}

void identify(Base* p)
{
    try
    {
        (void)dynamic_cast<A*>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B*>(p);
            std::cout << "B" << std::endl;
        }
        catch (const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C*>(p);
                std::cout << "C" << std::endl;
            }
            catch (const std::exception& e)
            {
              std::cout << "not a correct upcast ..." << std::endl;
            }
        }
    }
}
