/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:47:30 by msainton          #+#    #+#             */
/*   Updated: 2022/10/17 19:23:59 by msainton         ###   ########.fr       */
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
    A *a;
    B *b;
    C *c;
    std::srand(std::time(nullptr));
    int i = rand() % 3;
    if (i == 0)
        return (a);
    if (i == 1)
        return (b);
    if (i == 2)
        return (c);
}

int main()
{
    
}