/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 03:29:39 by idouidi           #+#    #+#             */
/*   Updated: 2022/03/05 04:11:35 by idouidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{}

Base* generate(void)
{
    srand((unsigned) time(0));
    double rdm = 1 + (rand() % 3);
    if (rdm <= 1)
    {
        std::cout << "Class A is created" << std::endl;
        return new A;
    }
    else if (rdm <= 2)
    {
        std::cout << "Class B is created" << std::endl;
        return new B;
    }
    else
    {
        std::cout << "Class C is created" << std::endl;
        return new C;
    }
}

void identify(Base* p) 
{
  if (dynamic_cast<A*>(p))
    std::cout << "p point to : ";
  else if (dynamic_cast<B*>(p))
    std::cout << "p point to : ";
  else if (dynamic_cast<C*>(p))
    std::cout << "p point to: ";
}

bool handle_cast(Base& p, const std::string& s) 
{
  try {
    if (s == "A") {
      (void)dynamic_cast<A&>(p);
    } else if (s == "B") {
      (void)dynamic_cast<B&>(p);
    } else if (s == "C") {
      (void)dynamic_cast<C&>(p);
    }
    std::cout << s << std::endl;
  } catch (std::exception&) {}
  return false;
}

void identify(Base& p) {
  if (handle_cast(p, "A") || handle_cast(p, "B") || handle_cast(p, "C"))
    return;
}