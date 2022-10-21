/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <msainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:43:09 by msainton          #+#    #+#             */
/*   Updated: 2022/10/21 12:16:46 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


int main()
{
    size_t i = 5;
    int tab[5] = {1, 2, 3, 4, 5};
    ::iter(tab, i, &print);

    std::cout << std::endl;
    
    float   tab1[] = {1.20, 2.0, 3.0};
    ::iter(tab1, 3, &print);

    std::cout << std::endl;
    
    std::string tab2[] = {"coucou", "ca va", "?"};
    iter(tab2, 3, &print);
    
}