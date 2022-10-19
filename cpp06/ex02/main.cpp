/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:47:30 by msainton          #+#    #+#             */
/*   Updated: 2022/10/18 13:19:37 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>


Base    *generate()
{
    std::srand(std::time(NULL));
    int i = rand() % 3;
    if (i == 0)
    {
        A *a = new A();
        return (a);
    }
    if (i == 1)
    {
        B *b = new B();
        return (b);
    }
    C *c = new C();
    return (c);
}

void    identify(Base *p)
{
    
    Base    *t = p;
    t = dynamic_cast<A*>(p);
    if (t != NULL)
    {
        std::cout << "A is real type" << std::endl;
        return ;
    }
    t = dynamic_cast<B*>(p);
    if (t != NULL)
    {
        std::cout << "B is real type" << std::endl;
        return ;
    }
    t = dynamic_cast<C*>(p);
    if (t != NULL)
    {
        std::cout << "C is real type" << std::endl;
        return ;
    }
    
}


void    identify(Base & p)
{
    try
    {
        p = dynamic_cast<A &>(p);
        std::cout << "A is real type" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        p = dynamic_cast<B &>(p);
        std::cout << "B is real type" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
         p = dynamic_cast<C &>(p);
        std::cout << "C is real type" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    
    
}

int main()
{
    Base    *p;
    Base    *t;
    p = generate();
    t = generate();
    identify(t);
    identify(*t);
    delete p;
}